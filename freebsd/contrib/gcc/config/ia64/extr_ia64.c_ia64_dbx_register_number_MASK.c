
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_fp; int n_input_regs; int n_local_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_1__ VAR_1 ;

int
FUNC_6 (int VAR_2)
{



  if (VAR_1.reg_fp)
    {
      if (VAR_2 == VAR_0)
 VAR_2 = VAR_1.reg_fp;
      else if (VAR_2 == VAR_1.reg_fp)
 VAR_2 = VAR_0;
    }

  if (FUNC_1 (VAR_2))
    return 32 + VAR_2 - FUNC_0 (0);
  else if (FUNC_3 (VAR_2))
    return 32 + VAR_1.n_input_regs + VAR_2 - FUNC_2 (0);
  else if (FUNC_5 (VAR_2))
    return (32 + VAR_1.n_input_regs
     + VAR_1.n_local_regs + VAR_2 - FUNC_4 (0));
  else
    return VAR_2;
}
