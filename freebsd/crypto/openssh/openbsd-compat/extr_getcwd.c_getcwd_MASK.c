
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct dirent {scalar_t__ d_fileno; int d_namlen; int d_name; } ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ dev_t ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dirent*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (char*,char*,size_t) ;
 int * FUNC_9 (char*) ;
 struct dirent* FUNC_10 (int *) ;
 char* FUNC_11 (char*,size_t) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;

char *
FUNC_13(char *VAR_6, size_t VAR_7)
{
 struct dirent *VAR_8;
 DIR *VAR_9 = ((void*)0);
 dev_t VAR_10;
 ino_t VAR_11;
 int VAR_12;
 char *VAR_13, *VAR_14;
 struct stat VAR_15;
 dev_t VAR_16;
 ino_t VAR_17;
 size_t VAR_18, VAR_19;
 int VAR_20;
 char *VAR_21, *VAR_22, *VAR_23;






 if (VAR_6) {
  VAR_18 = 0;
  if (!VAR_7) {
   VAR_5 = VAR_0;
   return (((void*)0));
  }
  VAR_21 = VAR_6 + VAR_7;
 } else {
  if ((VAR_6 = FUNC_6(VAR_18 = VAR_4)) == ((void*)0))
   return (((void*)0));
  VAR_21 = VAR_6 + VAR_18;
 }
 VAR_13 = VAR_21 - 1;
 *VAR_13 = '\0';






 if ((VAR_23 = FUNC_6(VAR_19 = VAR_4)) == ((void*)0))
  goto err;
 VAR_22 = VAR_23 + VAR_19;
 VAR_14 = VAR_23;
 VAR_23[0] = '.';
 VAR_23[1] = '\0';


 if (FUNC_12("/", &VAR_15))
  goto err;
 VAR_16 = VAR_15.st_dev;
 VAR_17 = VAR_15.st_ino;

 VAR_5 = 0;

 for (VAR_12 = 1;; VAR_12 = 0) {

  if (FUNC_5(VAR_23, &VAR_15))
   goto err;


  VAR_11 = VAR_15.st_ino;
  VAR_10 = VAR_15.st_dev;


  if (VAR_16 == VAR_10 && VAR_17 == VAR_11) {
   *--VAR_13 = '/';





   FUNC_8(VAR_6, VAR_13, VAR_21 - VAR_13);
   FUNC_3(VAR_23);
   return (VAR_6);
  }






  if (VAR_14 + 3 + VAR_3 + 1 >= VAR_22) {
   char *VAR_24;

   if ((VAR_24 = FUNC_11(VAR_23, VAR_19 *= 2)) == ((void*)0))
    goto err;
   VAR_14 = VAR_24 + (VAR_14 - VAR_23);
   VAR_23 = VAR_24;
   VAR_22 = VAR_23 + VAR_19;
  }
  *VAR_14++ = '.';
  *VAR_14++ = '.';
  *VAR_14 = '\0';


  if (!(VAR_9 = FUNC_9(VAR_23)) || FUNC_4(FUNC_2(VAR_9), &VAR_15))
   goto err;


  *VAR_14++ = '/';






  VAR_20 = 0;
  if (VAR_15.st_dev == VAR_10) {
   for (;;) {
    if (!(VAR_8 = FUNC_10(VAR_9)))
     goto notfound;
    if (VAR_8->d_fileno == VAR_11)
     break;
   }
  } else
   for (;;) {
    if (!(VAR_8 = FUNC_10(VAR_9)))
     goto notfound;
    if (FUNC_0(VAR_8))
     continue;
    FUNC_7(VAR_14, VAR_8->d_name, VAR_8->d_namlen + 1);


    if (FUNC_5(VAR_23, &VAR_15)) {
     if (!VAR_20)
      VAR_20 = VAR_5;
     VAR_5 = 0;
     continue;
    }
    if (VAR_15.st_dev == VAR_10 && VAR_15.st_ino == VAR_11)
     break;
   }





  if (VAR_13 - VAR_6 < VAR_8->d_namlen + (VAR_12 ? 1 : 2)) {
   size_t VAR_25;
   char *VAR_26;

   if (!VAR_18) {
    VAR_5 = VAR_2;
    goto err;
   }
   VAR_25 = VAR_21 - VAR_13;
   if ((VAR_26 = FUNC_11(VAR_6, VAR_18 *= 2)) == ((void*)0))
    goto err;
   VAR_13 = VAR_26 + (VAR_13 - VAR_6);
   VAR_6 = VAR_26;
   VAR_21 = VAR_6 + VAR_18;
   FUNC_8(VAR_21 - VAR_25, VAR_13, VAR_25);
   VAR_13 = VAR_21 - VAR_25;
  }
  if (!VAR_12)
   *--VAR_13 = '/';
  VAR_13 -= VAR_8->d_namlen;
  FUNC_7(VAR_13, VAR_8->d_name, VAR_8->d_namlen);
  (void)FUNC_1(VAR_9);


  *VAR_14 = '\0';
 }

notfound:





 if (!VAR_5)
  VAR_5 = VAR_20 ? VAR_20 : VAR_1;

err:
 VAR_20 = VAR_5;

 if (VAR_18)
  FUNC_3(VAR_6);
 FUNC_3(VAR_23);
 if (VAR_9)
  (void)FUNC_1(VAR_9);

 VAR_5 = VAR_20;

 return (((void*)0));
}
