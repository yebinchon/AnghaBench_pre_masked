
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int path ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int VAR_2 ;
 int FUNC_5 (char*,int,char*,char*,...) ;
 int FUNC_6 (char*,struct stat*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static void
FUNC_12(int VAR_3)
{
 char VAR_4[VAR_0];
 FILE *VAR_5;
 char *VAR_6;
 struct stat VAR_7;
 int VAR_8;







 FUNC_5(VAR_4, sizeof(VAR_4), "%s/kernel.%d", VAR_1, VAR_3);
 if (FUNC_6(VAR_4, &VAR_7) == 0) {
  if (FUNC_1(VAR_7.st_mode)) {
   VAR_2 = FUNC_8(VAR_4);
   return;
  }
  if (FUNC_0(VAR_7.st_mode)) {
   FUNC_5(VAR_4, sizeof(VAR_4), "%s/kernel.%d/kernel",
       VAR_1, VAR_3);
   if (FUNC_6(VAR_4, &VAR_7) == 0 && FUNC_1(VAR_7.st_mode)) {
    VAR_2 = FUNC_8(VAR_4);
    return;
   }
  }
 }
 FUNC_5(VAR_4, sizeof(VAR_4), "%s/info.%d", VAR_1, VAR_3);
 VAR_5 = FUNC_4(VAR_4, "r");
 if (VAR_5 == ((void*)0)) {
  FUNC_11("%s", VAR_4);
  return;
 }
 while (FUNC_3(VAR_4, sizeof(VAR_4), VAR_5) != ((void*)0)) {
  VAR_8 = FUNC_9(VAR_4);
  if (VAR_8 > 0 && VAR_4[VAR_8 - 1] == '\n')
   VAR_4[--VAR_8] = '\0';
  if (FUNC_10(VAR_4, "    ", 4) == 0) {
   VAR_6 = FUNC_7(VAR_4, ':');
   VAR_6 = (VAR_6 == ((void*)0)) ? VAR_4 + 4 : VAR_6 + 1;
   VAR_8 = FUNC_5(VAR_4, sizeof(VAR_4), "%s/kernel.debug", VAR_6);
   if (FUNC_6(VAR_4, &VAR_7) == -1 || !FUNC_1(VAR_7.st_mode)) {
    VAR_4[VAR_8 - 6] = '\0';
    if (FUNC_6(VAR_4, &VAR_7) == -1 ||
        !FUNC_1(VAR_7.st_mode))
     break;
   }
   VAR_2 = FUNC_8(VAR_4);
   break;
  }
 }
 FUNC_2(VAR_5);
}
