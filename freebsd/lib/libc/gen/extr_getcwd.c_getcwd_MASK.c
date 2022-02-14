
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct dirent {scalar_t__ d_fileno; char* d_name; int d_namlen; } ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ dev_t ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dirent*) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int * FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ,char*,struct stat*,int ) ;
 scalar_t__ FUNC_11 (char*,struct stat*) ;
 char* FUNC_12 (size_t) ;
 struct dirent* FUNC_13 (int *) ;
 char* FUNC_14 (char*,size_t) ;
 scalar_t__ FUNC_15 (char*,struct stat*) ;
 int FUNC_16 (char*) ;

char *
FUNC_17(char *VAR_9, size_t VAR_10)
{
 struct dirent *VAR_11;
 DIR *VAR_12 = ((void*)0);
 dev_t VAR_13;
 ino_t VAR_14;
 int VAR_15;
 char *VAR_16;
 struct stat VAR_17;
 dev_t VAR_18;
 ino_t VAR_19;
 size_t VAR_20;
 int VAR_21;
 char *VAR_22, VAR_23;
 int VAR_24;






 if (VAR_9) {
  VAR_20 = 0;
  if (!VAR_10) {
   VAR_8 = VAR_2;
   return (((void*)0));
  }
  if (VAR_10 == 1) {
   VAR_8 = VAR_4;
   return (((void*)0));
  }
  VAR_22 = VAR_9 + VAR_10;
 } else {
  if ((VAR_9 = FUNC_12(VAR_20 = VAR_7)) == ((void*)0))
   return (((void*)0));
  VAR_22 = VAR_9 + VAR_20;
 }
 if (FUNC_1(VAR_9, VAR_22 - VAR_9) == 0) {
  if (*VAR_9 != '/') {
   VAR_16 = VAR_9;
   VAR_22 = VAR_9 + FUNC_16(VAR_9) - 1;
   while (VAR_16 < VAR_22) {
    VAR_23 = *VAR_16;
    *VAR_16++ = *VAR_22;
    *VAR_22-- = VAR_23;
   }
  }
  return (VAR_9);
 }
 VAR_16 = VAR_22 - 1;
 *VAR_16 = '\0';


 if (FUNC_15("/", &VAR_17))
  goto err;
 VAR_18 = VAR_17.st_dev;
 VAR_19 = VAR_17.st_ino;

 VAR_8 = 0;

 for (VAR_15 = 1;; VAR_15 = 0) {

  if (VAR_12 != ((void*)0) ? FUNC_4(FUNC_3(VAR_12), &VAR_17) : FUNC_11(".", &VAR_17))
   goto err;


  VAR_14 = VAR_17.st_ino;
  VAR_13 = VAR_17.st_dev;


  if (VAR_18 == VAR_13 && VAR_19 == VAR_14) {
   *--VAR_16 = '/';





   FUNC_6(VAR_16, VAR_9, VAR_22 - VAR_16);
   if (VAR_12)
    (void) FUNC_7(VAR_12);
   return (VAR_9);
  }


  VAR_24 = FUNC_5(VAR_12 != ((void*)0) ? FUNC_3(VAR_12) : VAR_0,
    "..", VAR_6 | VAR_5);
  if (VAR_24 == -1)
   goto err;
  if (VAR_12)
   (void) FUNC_7(VAR_12);
  if (!(VAR_12 = FUNC_8(VAR_24)) || FUNC_4(FUNC_3(VAR_12), &VAR_17)) {
   FUNC_2(VAR_24);
   goto err;
  }






  VAR_21 = 0;
  if (VAR_17.st_dev == VAR_13) {
   for (;;) {
    if (!(VAR_11 = FUNC_13(VAR_12)))
     goto notfound;
    if (VAR_11->d_fileno == VAR_14)
     break;
   }
  } else
   for (;;) {
    if (!(VAR_11 = FUNC_13(VAR_12)))
     goto notfound;
    if (FUNC_0(VAR_11))
     continue;


    if (FUNC_10(FUNC_3(VAR_12), VAR_11->d_name, &VAR_17,
        VAR_1)) {
     if (!VAR_21)
      VAR_21 = VAR_8;
     VAR_8 = 0;
     continue;
    }
    if (VAR_17.st_dev == VAR_13 && VAR_17.st_ino == VAR_14)
     break;
   }





  while (VAR_16 - VAR_9 < VAR_11->d_namlen + (VAR_15 ? 1 : 2)) {
   size_t VAR_25, VAR_26;

   if (!VAR_20) {
    VAR_8 = VAR_4;
    goto err;
   }
   VAR_26 = VAR_16 - VAR_9;
   VAR_25 = VAR_22 - VAR_16;
   if ((VAR_9 = FUNC_14(VAR_9, VAR_20 *= 2)) == ((void*)0))
    goto err;
   VAR_16 = VAR_9 + VAR_26;
   VAR_22 = VAR_9 + VAR_20;
   FUNC_6(VAR_16, VAR_22 - VAR_25, VAR_25);
   VAR_16 = VAR_22 - VAR_25;
  }
  if (!VAR_15)
   *--VAR_16 = '/';
  VAR_16 -= VAR_11->d_namlen;
  FUNC_6(VAR_11->d_name, VAR_16, VAR_11->d_namlen);
 }

notfound:





 if (!VAR_8)
  VAR_8 = VAR_21 ? VAR_21 : VAR_3;

err:
 VAR_21 = VAR_8;

 if (VAR_20)
  FUNC_9(VAR_9);
 if (VAR_12)
  (void) FUNC_7(VAR_12);

 VAR_8 = VAR_21;
 return (((void*)0));
}
