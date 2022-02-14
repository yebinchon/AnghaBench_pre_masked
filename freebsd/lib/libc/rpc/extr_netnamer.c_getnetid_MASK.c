
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char**,char*) ;
 int FUNC_9 (char**) ;
 int FUNC_10 (char*,int ,char*,int ,char**,int*) ;

int
FUNC_11(char *VAR_3, char *VAR_4)
{
 char VAR_5[1024];
 char *VAR_6;
 char *VAR_7;
 char *VAR_8;
 FILE *VAR_9;






 int VAR_10;

 VAR_10 = 0;

 VAR_9 = FUNC_2(VAR_1, "r");
 if (VAR_9 == ((void*)0)) {




  return (0);

 }
 while (VAR_9 != ((void*)0)) {
  VAR_6 = FUNC_1(VAR_5, sizeof(VAR_5), VAR_9);
  if (VAR_6 == ((void*)0)) {
   VAR_10 = 0;
   goto done;
  }
  if (VAR_6[0] == '#')
   continue;
  else if (VAR_6[0] == '+') {
   continue;

  } else {
   VAR_7 = FUNC_8(&VAR_6, "\t ");
   if (VAR_7 == ((void*)0)) {
    FUNC_3(VAR_2,
  "Bad record in %s -- %s", VAR_1, VAR_5);
    continue;
   }
   do {
    VAR_8 = FUNC_8(&VAR_6, " \t#\n");
   } while (VAR_8 != ((void*)0) && !*VAR_8);
   if (VAR_8 == ((void*)0)) {
    FUNC_3(VAR_2,
  "Bad record in %s val problem - %s", VAR_1, VAR_5);
    continue;
   }
   if (FUNC_5(VAR_7, VAR_3) == 0) {
    FUNC_6(VAR_4, VAR_8);
    VAR_10 = 1;
    goto done;
   }
  }
 }

done:
 if (VAR_9 != ((void*)0))
  FUNC_0(VAR_9);
 return (VAR_10);
}
