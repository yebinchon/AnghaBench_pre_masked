
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int ledctl_mode2; int ledctl_default; } ;
struct TYPE_3__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_8 ;

s32 FUNC_2(struct e1000_hw *VAR_9)
{
 u32 VAR_10 = 0;
 u32 VAR_11;

 FUNC_0("e1000_blink_led_generic");

 if (VAR_9->phy.media_type == VAR_8) {

  VAR_10 = VAR_1 |
       (VAR_6 << VAR_4);
 } else {






  VAR_10 = VAR_9->mac.ledctl_mode2;
  for (VAR_11 = 0; VAR_11 < 32; VAR_11 += 8) {
   u32 VAR_12 = (VAR_9->mac.ledctl_mode2 >> VAR_11) &
       VAR_3;
   u32 VAR_13 = VAR_9->mac.ledctl_default >> VAR_11;

   if ((!(VAR_13 & VAR_2) &&
        (VAR_12 == VAR_6)) ||
       ((VAR_13 & VAR_2) &&
        (VAR_12 == VAR_5))) {
    VAR_10 &=
        ~(VAR_3 << VAR_11);
    VAR_10 |= (VAR_1 |
       VAR_6) << VAR_11;
   }
  }
 }

 FUNC_1(VAR_9, VAR_0, VAR_10);

 return VAR_7;
}
