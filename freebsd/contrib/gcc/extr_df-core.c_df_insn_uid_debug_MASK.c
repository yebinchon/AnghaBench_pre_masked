
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df {int dummy; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (struct df*,unsigned int) ;
 int FUNC_1 (struct df*,unsigned int) ;
 scalar_t__ FUNC_2 (struct df*,unsigned int) ;
 scalar_t__ FUNC_3 (struct df*,unsigned int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (scalar_t__,int,int *) ;
 int FUNC_7 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_8 (struct df *VAR_0, unsigned int VAR_1,
     bool VAR_2, FILE *VAR_3)
{
  int VAR_4;

  if (FUNC_0 (VAR_0, VAR_1))
    VAR_4 = FUNC_4 (FUNC_0 (VAR_0, VAR_1));
  else if (FUNC_3(VAR_0, VAR_1))
    VAR_4 = FUNC_4 (FUNC_3 (VAR_0, VAR_1));
  else
    VAR_4 = -1;

  FUNC_7 (VAR_3, "insn %d bb %d luid %d",
    VAR_1, VAR_4, FUNC_1 (VAR_0, VAR_1));

  if (FUNC_0 (VAR_0, VAR_1))
    {
      FUNC_7 (VAR_3, " defs ");
      FUNC_6 (FUNC_0 (VAR_0, VAR_1), VAR_2, VAR_3);
    }

  if (FUNC_3 (VAR_0, VAR_1))
    {
      FUNC_7 (VAR_3, " uses ");
      FUNC_6 (FUNC_3 (VAR_0, VAR_1), VAR_2, VAR_3);
    }

  if (FUNC_2 (VAR_0, VAR_1))
    {
      FUNC_7 (VAR_3, " mws ");
      FUNC_5 (FUNC_2 (VAR_0, VAR_1), VAR_3);
    }
  FUNC_7 (VAR_3, "\n");
}
