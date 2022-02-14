
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* machine; } ;
struct TYPE_5__ {int save_return_addr_p; } ;
struct TYPE_4__ {scalar_t__ base_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

bool
FUNC_2 (int VAR_12, int VAR_13)
{
  if (VAR_12 == VAR_1 && VAR_13 == VAR_1)
    {
      if (VAR_7)
 {
   FUNC_1 ();
   return VAR_8->machine->base_reg == VAR_4;
 }

      return 0;
    }


  FUNC_0 (VAR_13 == VAR_6
       || VAR_13 == VAR_3);

  FUNC_0 (VAR_12 == VAR_2
       || VAR_12 == VAR_0
       || VAR_12 == VAR_5);


  if (VAR_12 == VAR_5)
    if (!VAR_10
 && !VAR_11
 && !VAR_9.save_return_addr_p)
      return 0;

  return 1;
}
