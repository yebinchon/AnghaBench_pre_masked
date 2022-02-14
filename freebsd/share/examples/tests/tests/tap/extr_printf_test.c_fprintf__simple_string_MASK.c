
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int *,char*,char const*) ;
 size_t FUNC_4 (char*,int,int,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*,char const*) ;
 size_t FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10(void)
{
 FILE *VAR_0;
 char VAR_1[128];
 size_t VAR_2;
 const char *VAR_3 = "This is a message\n";

 VAR_0 = FUNC_2("test.txt", "w+");
 if (FUNC_3(VAR_0, "%s", VAR_3) <= 0) {
  FUNC_0("fprintf failed to write to file");
  FUNC_7(2);
  return;
 }
 FUNC_5();
 FUNC_6(VAR_0);
 VAR_2 = FUNC_4(VAR_1, 1, sizeof(VAR_1) - 1, VAR_0);
 if (VAR_2 != FUNC_9(VAR_3)) {
  FUNC_0("fread failed");
  FUNC_7(1);
  return;
 }
 FUNC_5();
 VAR_1[VAR_2] = '\0';
 FUNC_1(VAR_0);

 if (FUNC_8(VAR_1, VAR_3) != 0)
  FUNC_0("Written and read data differ");
 else
  FUNC_5();




}
