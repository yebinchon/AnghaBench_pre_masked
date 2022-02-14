
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 char** VAR_0 ;

void
FUNC_1 (FILE *VAR_1, int VAR_2, int VAR_3)
{
  if (VAR_0[VAR_2])
    FUNC_0 (VAR_1, "SYS_%s ", VAR_0[VAR_2]);
  else
    FUNC_0 (VAR_1, "<Unknown syscall %d> ", VAR_2);
}
