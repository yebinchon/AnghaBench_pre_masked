
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int,char*) ;
 int VAR_1 ;
 int FUNC_8 (int ,char*) ;
 char* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*) ;
 char* FUNC_11 (char*,char*,char**) ;
 int FUNC_12 (char*,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_13(char *VAR_3)
{
 char VAR_4[1024];
 int VAR_5 = 0;
 FILE *VAR_6 = FUNC_3(VAR_3, "r");
 char *VAR_7, *VAR_8;
 char *VAR_9;
 char *VAR_10;
 char VAR_11[64];

 if (!VAR_6)
  return;

 FUNC_7(VAR_11, 63, "Thresholds: ");
 VAR_2 = FUNC_5(FUNC_10(VAR_11)+1);
 if (!VAR_2) {
  FUNC_4(VAR_1, "Failed to allocate memory: %s\n",
   FUNC_9(VAR_0));
  FUNC_0(1);
 }
 FUNC_8(VAR_2, VAR_11);
 while (FUNC_2(VAR_4, sizeof VAR_4, VAR_6) != ((void*)0)) {
  VAR_7 = FUNC_11(VAR_4, "\n", &VAR_8);
  if (!VAR_7)
   continue;

  if (*VAR_7 == '#')
   continue;

  VAR_9 = FUNC_11(VAR_7, "=", &VAR_8);
  VAR_10 = FUNC_11(((void*)0), "\n", &VAR_8);

  VAR_5 = FUNC_12(VAR_10, ((void*)0), 0);
  FUNC_6(VAR_9, VAR_5);
 }

 FUNC_1(VAR_6);
}
