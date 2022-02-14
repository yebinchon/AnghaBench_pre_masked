
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_bus_info {scalar_t__ func; } ;
struct e1000_hw {struct e1000_bus_info bus; } ;



void FUNC_0(struct e1000_hw *VAR_0)
{
 struct e1000_bus_info *VAR_1 = &VAR_0->bus;

 VAR_1->func = 0;
}
