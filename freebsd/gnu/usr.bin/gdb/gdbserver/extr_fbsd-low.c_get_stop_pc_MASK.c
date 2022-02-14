
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stepping; } ;
struct TYPE_3__ {scalar_t__ decr_pc_after_break; scalar_t__ (* get_pc ) () ;} ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (void)
{
  CORE_ADDR VAR_2 = (*VAR_1.get_pc) ();

  if (FUNC_0 (VAR_0)->stepping)
    return VAR_2;
  else
    return VAR_2 - VAR_1.decr_pc_after_break;
}
