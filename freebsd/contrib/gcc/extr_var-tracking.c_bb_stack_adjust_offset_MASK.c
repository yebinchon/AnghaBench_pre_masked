
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int basic_block ;
struct TYPE_9__ {int stack_adjust; } ;
struct TYPE_6__ {int stack_adjust; } ;
struct TYPE_10__ {int n_mos; TYPE_4__ out; TYPE_3__* mos; TYPE_1__ in; } ;
struct TYPE_7__ {int loc; scalar_t__ adjust; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ u; } ;
typedef int HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3 (basic_block VAR_2)
{
  HOST_WIDE_INT VAR_3;
  int VAR_4;

  VAR_3 = FUNC_1 (VAR_2)->in.stack_adjust;
  for (VAR_4 = 0; VAR_4 < FUNC_1 (VAR_2)->n_mos; VAR_4++)
    {
      if (FUNC_1 (VAR_2)->mos[VAR_4].type == VAR_0)
 VAR_3 += FUNC_1 (VAR_2)->mos[VAR_4].u.adjust;
      else if (FUNC_1 (VAR_2)->mos[VAR_4].type != VAR_1)
 {
   if (FUNC_0 (FUNC_1 (VAR_2)->mos[VAR_4].u.loc))
     {
       FUNC_1 (VAR_2)->mos[VAR_4].u.loc
  = FUNC_2 (FUNC_1 (VAR_2)->mos[VAR_4].u.loc, -VAR_3);
     }
 }
    }
  FUNC_1 (VAR_2)->out.stack_adjust = VAR_3;
}
