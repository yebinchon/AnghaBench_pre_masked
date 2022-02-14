
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const char *VAR_1)
{
 FILE *VAR_2 = VAR_0;

 if (VAR_1) {
  FUNC_0(VAR_2, "\t.globl\t%s\n", VAR_1);
  FUNC_0(VAR_2, "%s:\n", VAR_1);
 }
 FUNC_0(VAR_2, "\t.long\tFDT_BEGIN_NODE\n");
}
