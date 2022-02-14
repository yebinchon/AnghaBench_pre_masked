
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int *,char*,char const*) ;
 size_t FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*,char const*) ;
 size_t FUNC_8 (char const*) ;

__attribute__((used)) static void
FUNC_9(void)
{
 FILE *VAR_1;
 char VAR_2[128];
 size_t VAR_3;
 const char *VAR_4 = "This is a message\n";

 VAR_1 = FUNC_3("test.txt", "w+");
 if (FUNC_4(VAR_1, "%s", VAR_4) <= 0)
  FUNC_0(VAR_0, "fprintf failed to write to file");
 FUNC_6(VAR_1);
 VAR_3 = FUNC_5(VAR_2, 1, sizeof(VAR_2) - 1, VAR_1);
 if (VAR_3 != FUNC_8(VAR_4))
  FUNC_0(VAR_0, "fread failed");
 VAR_2[VAR_3] = '\0';
 FUNC_2(VAR_1);

 if (FUNC_7(VAR_2, VAR_4) != 0)
  FUNC_1(VAR_0, "Written and read data differ");




}
