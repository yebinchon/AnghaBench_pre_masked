
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* insn_mo; } ;
struct TYPE_7__ {int delay_slot_p; int sizes; } ;
struct TYPE_6__ {scalar_t__ noreorder; } ;
struct TYPE_5__ {int pinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 (&VAR_4.sizes, 0, sizeof (VAR_4.sizes));
  VAR_4.delay_slot_p = (VAR_5.noreorder
         && (VAR_3[0].insn_mo->pinfo
      & (VAR_2
         | VAR_0
         | VAR_1)) != 0);
}
