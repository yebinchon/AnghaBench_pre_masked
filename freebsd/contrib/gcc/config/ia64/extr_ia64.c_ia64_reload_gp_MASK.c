
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {scalar_t__ total_size; scalar_t__ spill_size; scalar_t__ spill_cfa_off; scalar_t__ reg_save_gp; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_7 (void)
{
  rtx VAR_6;

  if (VAR_1.reg_save_gp)
    VAR_6 = FUNC_6 (VAR_0, VAR_1.reg_save_gp);
  else
    {
      HOST_WIDE_INT VAR_7;

      VAR_7 = (VAR_1.spill_cfa_off
         + VAR_1.spill_size);
      if (VAR_2)
        {
          VAR_6 = VAR_3;
          VAR_7 = -VAR_7;
        }
      else
        {
          VAR_6 = VAR_5;
          VAR_7 = VAR_1.total_size - VAR_7;
        }

      if (FUNC_0 (VAR_7))
        FUNC_2 (FUNC_4 (VAR_4,
          VAR_6, FUNC_1 (VAR_7)));
      else
        {
          FUNC_3 (VAR_4, FUNC_1 (VAR_7));
          FUNC_2 (FUNC_4 (VAR_4,
            VAR_4, VAR_6));
        }

      VAR_6 = FUNC_5 (VAR_0, VAR_4);
    }

  FUNC_3 (VAR_4, VAR_6);
}
