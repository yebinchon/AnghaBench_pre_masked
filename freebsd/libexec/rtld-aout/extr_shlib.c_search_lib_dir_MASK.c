
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int*,int,int*,int) ;
 char* FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (int*,char*) ;
 int * FUNC_5 (char*) ;
 struct dirent* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;

char *
FUNC_11(char *VAR_2, char *VAR_3, int *VAR_4, int *VAR_5, int VAR_6)
{
 size_t VAR_7;
 DIR *VAR_8;
 struct dirent *VAR_9;
 int VAR_10[VAR_0];
 int VAR_11;
 char VAR_12[VAR_1+1];
 char VAR_13[VAR_1+1];

 if((VAR_8 = FUNC_5(VAR_2)) == ((void*)0))
  return ((void*)0);

 VAR_7 = FUNC_9(VAR_3);
 VAR_11 = 0;
 VAR_12[0] = '\0';
 VAR_13[0] = '\0';

 while((VAR_9 = FUNC_6(VAR_8)) != ((void*)0)) {
  char *VAR_14;

  if(FUNC_9(VAR_9->d_name) < 3 + VAR_7 + 2 ||
     FUNC_10(VAR_9->d_name, "lib", 3) != 0 ||
     FUNC_10(VAR_9->d_name + 3, VAR_3, VAR_7) != 0 ||
     VAR_9->d_name[3+VAR_7] != '.')
   continue;

  VAR_14 = VAR_9->d_name + 3 + VAR_7 + 1;

  if(FUNC_10(VAR_14, "so.", 3) == 0) {
   int VAR_15[VAR_0];
   int VAR_16;

   VAR_16 = FUNC_4(VAR_15, VAR_14+3);
   if(VAR_16 < 2)
    continue;

   if(*VAR_4 != -1) {
    if(VAR_15[0] != *VAR_4)
     continue;
    if(*VAR_5 != -1) {
     if(VAR_15[1] < *VAR_5)
      continue;
    }
   }

   if(FUNC_2(VAR_15, VAR_16, VAR_10,
      VAR_11) <= 0)
    continue;


   FUNC_8(VAR_13, VAR_9->d_name);
   FUNC_0(VAR_15, VAR_10,
    VAR_16 * sizeof VAR_10[0]);
   VAR_11 = VAR_16;
  } else if(VAR_6 && FUNC_7(VAR_14, "a") == 0)
   FUNC_8(VAR_12, VAR_9->d_name);
 }
 FUNC_1(VAR_8);

 if(VAR_13[0] != '\0') {
  *VAR_4 = VAR_10[0];
  *VAR_5 = VAR_10[1];
  return FUNC_3(VAR_2, "/", VAR_13);
 }

 if(VAR_12[0] != '\0')
  return FUNC_3(VAR_2, "/", VAR_12);

 return ((void*)0);
}
