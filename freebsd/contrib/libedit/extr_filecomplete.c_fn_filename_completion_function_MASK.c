
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; size_t d_namlen; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (size_t,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,size_t) ;
 char* FUNC_4 (char*) ;
 int * FUNC_5 (char*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*,size_t,char*,char*,char*) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char const*) ;
 size_t FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,size_t) ;
 int FUNC_12 (char*,char const*,size_t) ;
 char* FUNC_13 (char const*,char) ;

char *
FUNC_14(const char *VAR_0, int VAR_1)
{
 static DIR *VAR_2 = ((void*)0);
 static char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 static size_t VAR_6 = 0;
 struct dirent *VAR_7;
 char *VAR_8;
 size_t VAR_9;

 if (VAR_1 == 0 || VAR_2 == ((void*)0)) {
  VAR_8 = FUNC_13(VAR_0, '/');
  if (VAR_8) {
   char *VAR_10;
   VAR_8++;
   VAR_10 = FUNC_3(VAR_3, (FUNC_10(VAR_8) + 1) *
       sizeof(*VAR_10));
   if (VAR_10 == ((void*)0)) {
    FUNC_2(VAR_3);
    VAR_3 = ((void*)0);
    return ((void*)0);
   }
   VAR_3 = VAR_10;
   (void)FUNC_8(VAR_3, VAR_8);
   VAR_9 = (size_t)(VAR_8 - VAR_0);

   VAR_10 = FUNC_3(VAR_4, (VAR_9 + 1) *
       sizeof(*VAR_10));
   if (VAR_10 == ((void*)0)) {
    FUNC_2(VAR_4);
    VAR_4 = ((void*)0);
    return ((void*)0);
   }
   VAR_4 = VAR_10;
   (void)FUNC_12(VAR_4, VAR_0, VAR_9);
   VAR_4[VAR_9] = '\0';
  } else {
   FUNC_2(VAR_3);
   if (*VAR_0 == 0)
    VAR_3 = ((void*)0);
   else {
    VAR_3 = FUNC_9(VAR_0);
    if (VAR_3 == ((void*)0))
     return ((void*)0);
   }
   FUNC_2(VAR_4);
   VAR_4 = ((void*)0);
  }

  if (VAR_2 != ((void*)0)) {
   (void)FUNC_0(VAR_2);
   VAR_2 = ((void*)0);
  }



  FUNC_2(VAR_5);
  VAR_5 = ((void*)0);
  if (VAR_4 == ((void*)0)) {
   if ((VAR_4 = FUNC_9("")) == ((void*)0))
    return ((void*)0);
   VAR_5 = FUNC_9("./");
  } else if (*VAR_4 == '~')
   VAR_5 = FUNC_4(VAR_4);
  else
   VAR_5 = FUNC_9(VAR_4);

  if (VAR_5 == ((void*)0))
   return ((void*)0);

  VAR_2 = FUNC_5(VAR_5);
  if (!VAR_2)
   return ((void*)0);


  VAR_6 = VAR_3 ? FUNC_10(VAR_3) : 0;
 }


 while ((VAR_7 = FUNC_6(VAR_2)) != ((void*)0)) {

  if (VAR_7->d_name[0] == '.' && (!VAR_7->d_name[1]
      || (VAR_7->d_name[1] == '.' && !VAR_7->d_name[2])))
   continue;
  if (VAR_6 == 0)
   break;


  if (VAR_7->d_name[0] == VAR_3[0]



      && FUNC_10(VAR_7->d_name) >= VAR_6

      && FUNC_11(VAR_7->d_name, VAR_3,
   VAR_6) == 0)
   break;
 }

 if (VAR_7) {




  VAR_9 = FUNC_10(VAR_7->d_name);


  VAR_9 = FUNC_10(VAR_4) + VAR_9 + 1;
  VAR_8 = FUNC_1(VAR_9, sizeof(*VAR_8));
  if (VAR_8 == ((void*)0))
   return ((void*)0);
  (void)FUNC_7(VAR_8, VAR_9, "%s%s", VAR_4, VAR_7->d_name);
 } else {
  (void)FUNC_0(VAR_2);
  VAR_2 = ((void*)0);
  VAR_8 = ((void*)0);
 }

 return VAR_8;
}
