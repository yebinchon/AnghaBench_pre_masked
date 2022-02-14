
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_4, VAR_0);

 FUNC_0("e1000_led_on_82542");

 VAR_5 |= VAR_1;
 VAR_5 |= VAR_2;
 FUNC_2(VAR_4, VAR_0, VAR_5);

 return VAR_3;
}
