
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ total_size; scalar_t__ push_p; scalar_t__ parm_size; scalar_t__ vars_size; scalar_t__ fixed_size; } ;
typedef TYPE_1__ rs6000_stack_t ;
typedef scalar_t__ HOST_WIDE_INT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;

HOST_WIDE_INT
FUNC_2 (int VAR_6, int VAR_7)
{
  rs6000_stack_t *VAR_8 = FUNC_1 ();
  HOST_WIDE_INT VAR_9;

  if (VAR_6 == VAR_3 && VAR_7 == VAR_5)
    VAR_9 = VAR_8->push_p ? 0 : -VAR_8->total_size;
  else if (VAR_6 == VAR_2 && VAR_7 == VAR_5)
    {
      VAR_9 = VAR_8->push_p ? 0 : -VAR_8->total_size;
      if (VAR_1)
 VAR_9 += VAR_8->fixed_size + VAR_8->vars_size + VAR_8->parm_size;
    }
  else if (VAR_6 == VAR_2 && VAR_7 == VAR_3)
    VAR_9 = VAR_1
      ? VAR_8->fixed_size + VAR_8->vars_size + VAR_8->parm_size
      : 0;
  else if (VAR_6 == VAR_0 && VAR_7 == VAR_3)
    VAR_9 = VAR_8->total_size;
  else if (VAR_6 == VAR_0 && VAR_7 == VAR_5)
    VAR_9 = VAR_8->push_p ? VAR_8->total_size : 0;
  else if (VAR_6 == VAR_4)
    VAR_9 = 0;
  else
    FUNC_0 ();

  return VAR_9;
}
