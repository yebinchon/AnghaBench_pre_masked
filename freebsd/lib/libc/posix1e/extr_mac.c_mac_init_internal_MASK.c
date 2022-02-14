
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 () ;
 char* FUNC_8 (char**) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char**,char*) ;

__attribute__((used)) static int
FUNC_12(int VAR_5)
{
 const char *VAR_6;
 char VAR_7[VAR_1];
 FILE *VAR_8;
 int VAR_9;

 VAR_9 = 0;

 FUNC_0(&VAR_4);

 if (!FUNC_5() && FUNC_4("MAC_CONFFILE") != ((void*)0))
  VAR_6 = FUNC_4("MAC_CONFFILE");
 else
  VAR_6 = VAR_2;
 VAR_8 = FUNC_3(VAR_6, "re");
 if (VAR_8 == ((void*)0))
  return (0);

 while (FUNC_2(VAR_7, VAR_1, VAR_8)) {
  char *VAR_10, *VAR_11, *VAR_12;

  if (VAR_7[FUNC_10(VAR_7)-1] == '\n')
   VAR_7[FUNC_10(VAR_7)-1] = '\0';
  else {
   if (VAR_5)
    continue;
   FUNC_1(VAR_8);
   VAR_9 = VAR_0;
   goto just_return;
  }


  VAR_10 = VAR_7;
  VAR_11 = FUNC_11(&VAR_10, "#");


  VAR_12 = FUNC_8(&VAR_11);
  if (VAR_12 == ((void*)0))
   continue;

  if (FUNC_9(VAR_12, "default_labels") == 0) {
   char *VAR_13, *VAR_14;

   VAR_13 = FUNC_8(&VAR_11);
   VAR_14 = FUNC_8(&VAR_11);
   if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0) ||
       FUNC_8(&VAR_11) != ((void*)0)) {
    if (VAR_5)
     continue;
    VAR_9 = VAR_0;
    FUNC_1(VAR_8);
    goto just_return;
   }

   if (FUNC_6(VAR_13, VAR_14) == -1) {
    if (VAR_5)
     continue;
    FUNC_1(VAR_8);
    goto just_return;
   }
  } else if (FUNC_9(VAR_12, "default_ifnet_labels") == 0 ||
      FUNC_9(VAR_12, "default_file_labels") == 0 ||
      FUNC_9(VAR_12, "default_process_labels") == 0) {
   char *VAR_15, *VAR_16;

   if (FUNC_9(VAR_12, "default_ifnet_labels") == 0)
    VAR_16 = "ifnet";
   else if (FUNC_9(VAR_12, "default_file_labels") == 0)
    VAR_16 = "file";
   else if (FUNC_9(VAR_12, "default_process_labels") ==
       0)
    VAR_16 = "process";

   VAR_15 = FUNC_8(&VAR_11);
   if (VAR_15 == ((void*)0) || FUNC_8(&VAR_11) != ((void*)0)) {
    if (VAR_5)
     continue;
    VAR_9 = VAR_0;
    FUNC_1(VAR_8);
    goto just_return;
   }

   if (FUNC_6(VAR_16, VAR_15) == -1) {
    if (VAR_5)
     continue;
    FUNC_1(VAR_8);
    goto just_return;
   }
  } else {
   if (VAR_5)
    continue;
   FUNC_1(VAR_8);
   VAR_9 = VAR_0;
   goto just_return;
  }
 }

 FUNC_1(VAR_8);

 VAR_3 = 1;

just_return:
 if (VAR_9 != 0)
  FUNC_7();
 return (VAR_9);
}
