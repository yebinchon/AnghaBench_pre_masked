
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct real_format {int b; int emax; int log2_b; int p; int pnan; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_8__ {int sign; struct TYPE_8__* sig; int cl; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 struct real_format* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (struct real_format const*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int VAR_2 ;

void
FUNC_7 (REAL_VALUE_TYPE *VAR_3, int VAR_4, enum machine_mode VAR_5)
{
  const struct real_format *VAR_6;
  int VAR_7;

  VAR_6 = FUNC_0 (VAR_5);
  FUNC_5 (VAR_6);
  FUNC_6 (VAR_3, 0, sizeof (*VAR_3));

  if (VAR_6->b == 10)
    FUNC_4 (VAR_3, VAR_4, VAR_5);
  else
    {
      VAR_3->cl = VAR_2;
      VAR_3->sign = VAR_4;
      FUNC_1 (VAR_3, VAR_6->emax * VAR_6->log2_b);

      VAR_7 = VAR_0 - VAR_6->p * VAR_6->log2_b;
      FUNC_6 (VAR_3->sig, -1, VAR_1 * sizeof (unsigned long));
      FUNC_2 (VAR_3, VAR_7);

      if (VAR_6->pnan < VAR_6->p)






        FUNC_3 (VAR_3, VAR_0 - VAR_6->pnan);
    }
}
