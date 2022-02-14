
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(int VAR_1, void *VAR_2)
{
 FILE *VAR_3 = VAR_2;

 (void) FUNC_0(VAR_3, "\t%-15s ", FUNC_3(VAR_1));

 if (FUNC_2(VAR_1))
  (void) FUNC_0(VAR_3, " NO    ");
 else
  (void) FUNC_0(VAR_3, "YES    ");

 if (FUNC_1(VAR_1))
  (void) FUNC_0(VAR_3, "  YES   ");
 else
  (void) FUNC_0(VAR_3, "   NO   ");

 if (FUNC_4(VAR_1) == ((void*)0))
  (void) FUNC_0(VAR_3, "-\n");
 else
  (void) FUNC_0(VAR_3, "%s\n", FUNC_4(VAR_1));

 return (VAR_0);
}
