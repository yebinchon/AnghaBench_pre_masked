
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int (* write_reg ) (struct e1000_hw*,int ,int) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct TYPE_6__ {int ledctl_mode2; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_3__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_7)
{
 u16 VAR_8 = (u16)VAR_7->mac.ledctl_mode2;
 u32 VAR_9, VAR_10;

 FUNC_0("e1000_led_on_pchlan");




 if (!(FUNC_1(VAR_7, VAR_4) & VAR_5)) {
  for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
   VAR_10 = (VAR_8 >> (VAR_9 * 5)) & VAR_2;
   if ((VAR_10 & VAR_3) !=
       VAR_0)
    continue;
   if (VAR_10 & VAR_1)
    VAR_8 &= ~(VAR_1 << (VAR_9 * 5));
   else
    VAR_8 |= (VAR_1 << (VAR_9 * 5));
  }
 }

 return VAR_7->phy.ops.write_reg(VAR_7, VAR_6, VAR_8);
}
