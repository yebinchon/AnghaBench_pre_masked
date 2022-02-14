
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ref {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct df_ref*) ;
 int FUNC_1 (struct df_ref*) ;
 int FUNC_2 (struct df_ref*) ;
 int FUNC_3 (struct df_ref*) ;
 scalar_t__ FUNC_4 (struct df_ref*) ;
 int FUNC_5 (struct df_ref*) ;
 scalar_t__ FUNC_6 (struct df_ref*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,char*,...) ;

void
FUNC_10 (struct df_ref *VAR_0, FILE *VAR_1)
{
  FUNC_9 (VAR_1, "%c%d ",
    FUNC_6 (VAR_0) ? 'd' : 'u',
    FUNC_3 (VAR_0));
  FUNC_9 (VAR_1, "reg %d bb %d insn %d flag %x chain ",
    FUNC_5 (VAR_0),
    FUNC_0 (VAR_0),
    FUNC_4 (VAR_0) ? FUNC_7 (FUNC_4 (VAR_0)) : -1,
    FUNC_2 (VAR_0));
  FUNC_8 (FUNC_1 (VAR_0), VAR_1);
  FUNC_9 (VAR_1, "\n");
}
