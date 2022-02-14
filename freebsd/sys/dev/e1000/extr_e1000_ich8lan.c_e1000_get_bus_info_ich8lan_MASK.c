
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_bus_info {scalar_t__ width; } ;
struct e1000_hw {struct e1000_bus_info bus; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_2)
{
 struct e1000_bus_info *VAR_3 = &VAR_2->bus;
 s32 VAR_4;

 FUNC_0("e1000_get_bus_info_ich8lan");

 VAR_4 = FUNC_1(VAR_2);






 if (VAR_3->width == VAR_1)
  VAR_3->width = VAR_0;

 return VAR_4;
}
