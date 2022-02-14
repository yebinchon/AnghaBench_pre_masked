
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_bus_info {int func; } ;
struct e1000_hw {struct e1000_bus_info bus; } ;


 int FUNC_0 (struct e1000_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int ,int*) ;

void FUNC_2(struct e1000_hw *VAR_5)
{
 struct e1000_bus_info *VAR_6 = &VAR_5->bus;
 u16 VAR_7;
 u32 VAR_8;

 FUNC_1(VAR_5, VAR_4, &VAR_7);
 if (VAR_7 & VAR_3) {
  VAR_8 = FUNC_0(VAR_5, VAR_0);
  VAR_6->func = (VAR_8 & VAR_1)
       >> VAR_2;
 } else {
  VAR_6->func = 0;
 }
}
