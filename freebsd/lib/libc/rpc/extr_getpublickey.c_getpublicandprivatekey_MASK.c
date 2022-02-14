
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (char**,char*) ;
 int FUNC_9 (char**) ;
 int FUNC_10 (char*,char*,char const*,int ,char**,int*) ;

int
FUNC_11(const char *VAR_2, char *VAR_3)
{
 char VAR_4[1024];
 char *VAR_5;
 FILE *VAR_6;
 char *VAR_7;
 char *VAR_8;

 VAR_6 = FUNC_2(VAR_0, "r");
 if (VAR_6 == ((void*)0))
  return (0);
 for (;;) {
  VAR_5 = FUNC_1(VAR_4, sizeof(VAR_4), VAR_6);
  if (VAR_5 == ((void*)0)) {
   FUNC_0(VAR_6);
   return (0);
  }
  if (VAR_5[0] == '#')
   continue;
  else if (VAR_5[0] == '+') {
   continue;

  } else {
   VAR_7 = FUNC_8(&VAR_5, "\t ");
   if (VAR_7 == ((void*)0)) {
    FUNC_3(VAR_1,
    "Bad record in %s -- %s", VAR_0, VAR_4);
    continue;
   }
   do {
    VAR_8 = FUNC_8(&VAR_5, " \t#\n");
   } while (VAR_8 != ((void*)0) && !*VAR_8);
   if (VAR_8 == ((void*)0)) {
    FUNC_3(VAR_1,
   "Bad record in %s val problem - %s", VAR_0, VAR_4);
    continue;
   }
   if (FUNC_5(VAR_7, VAR_2) == 0) {
    FUNC_6(VAR_3, VAR_8);
    FUNC_0(VAR_6);
    return (1);
   }
  }
 }
}
