
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_bus_info {int speed; int type; } ;
struct e1000_hw {struct e1000_bus_info bus; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_2)
{
 struct e1000_bus_info *VAR_3 = &VAR_2->bus;

 FUNC_0("e1000_get_bus_info_pcie_vf");


 VAR_3->type = VAR_1;
 VAR_3->speed = VAR_0;

 return 0;
}
