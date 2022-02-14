
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df {int dummy; } ;
typedef int rtx ;
typedef int FILE ;


 int FUNC_0 (struct df*,int ) ;
 scalar_t__ FUNC_1 (struct df*,unsigned int) ;
 scalar_t__ FUNC_2 (struct df*,unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (struct df*,scalar_t__,int *) ;
 int FUNC_6 (int *,char*,...) ;

void
FUNC_7 (struct df *VAR_0, rtx VAR_1, FILE *VAR_2)
{
  unsigned int VAR_3;
  int VAR_4;

  VAR_3 = FUNC_4 (VAR_1);
  if (FUNC_1 (VAR_0, VAR_3))
    VAR_4 = FUNC_3 (FUNC_1 (VAR_0, VAR_3));
  else if (FUNC_2(VAR_0, VAR_3))
    VAR_4 = FUNC_3 (FUNC_2 (VAR_0, VAR_3));
  else
    VAR_4 = -1;

  FUNC_6 (VAR_2, "insn %d bb %d luid %d defs ",
    VAR_3, VAR_4, FUNC_0 (VAR_0, VAR_1));
  FUNC_5 (VAR_0, FUNC_1 (VAR_0, VAR_3), VAR_2);

  FUNC_6 (VAR_2, " uses ");
  FUNC_5 (VAR_0, FUNC_2 (VAR_0, VAR_3), VAR_2);
  FUNC_6 (VAR_2, "\n");
}
