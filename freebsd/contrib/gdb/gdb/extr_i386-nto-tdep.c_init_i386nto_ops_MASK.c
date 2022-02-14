
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nto_fetch_link_map_offsets; int nto_regset_fill; int nto_register_area; int nto_supply_regset; int nto_supply_altregset; int nto_supply_fpregset; int nto_supply_gregset; int nto_regset_id; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_0.nto_regset_id = VAR_3;
  VAR_0.nto_supply_gregset = VAR_5;
  VAR_0.nto_supply_fpregset = VAR_4;
  VAR_0.nto_supply_altregset = VAR_8;
  VAR_0.nto_supply_regset = VAR_6;
  VAR_0.nto_register_area = VAR_1;
  VAR_0.nto_regset_fill = VAR_2;
  VAR_0.nto_fetch_link_map_offsets =
    VAR_7;
}
