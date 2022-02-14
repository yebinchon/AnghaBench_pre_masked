
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ledctl_mode2; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 FUNC_0("e1000_led_on_82574");

 VAR_7 = VAR_6->mac.ledctl_mode2;
 if (!(VAR_4 & FUNC_1(VAR_6, VAR_3))) {



  for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
   if (((VAR_6->mac.ledctl_mode2 >> (VAR_8 * 8)) & 0xFF) ==
       VAR_2)
    VAR_7 |= (VAR_1 << (VAR_8 * 8));
 }
 FUNC_2(VAR_6, VAR_0, VAR_7);

 return VAR_5;
}
