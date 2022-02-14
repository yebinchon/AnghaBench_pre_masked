
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int mmxsse_to_integer; int fp_move; int sse_move; int mmx_move; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int,int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_8 (int,int,int,int ) ;

int
FUNC_9 (enum machine_mode VAR_1, enum reg_class VAR_2,
    enum reg_class VAR_3)
{




  if (FUNC_8 (VAR_2, VAR_3, VAR_1, 0))
    {
      int VAR_4 = 1;

      VAR_4 += FUNC_1 (FUNC_5 (VAR_1, VAR_2, 0),
     FUNC_5 (VAR_1, VAR_2, 1));
      VAR_4 += FUNC_1 (FUNC_5 (VAR_1, VAR_3, 0),
     FUNC_5 (VAR_1, VAR_3, 1));




      if (FUNC_0 (VAR_2, VAR_1) > FUNC_0 (VAR_3, VAR_1))
 VAR_4 += 20;



      if ((FUNC_6 (VAR_2) && FUNC_2 (VAR_3))
          || (FUNC_6 (VAR_3) && FUNC_2 (VAR_2)))
 VAR_4 += 20;

      return VAR_4;
    }


  if (FUNC_6 (VAR_2) != FUNC_6 (VAR_3)
      || FUNC_7 (VAR_2) != FUNC_7 (VAR_3))
    return VAR_0->mmxsse_to_integer;
  if (FUNC_2 (VAR_2))
    return VAR_0->fp_move;
  if (FUNC_4 (VAR_2))
    return VAR_0->sse_move;
  if (FUNC_3 (VAR_2))
    return VAR_0->mmx_move;
  return 2;
}
