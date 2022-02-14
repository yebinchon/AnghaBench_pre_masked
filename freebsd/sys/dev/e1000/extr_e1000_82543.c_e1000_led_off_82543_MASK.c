
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ media_type; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_6, VAR_0);

 FUNC_0("e1000_led_off_82543");

 if (VAR_6->mac.type == VAR_4 &&
     VAR_6->phy.media_type == VAR_5) {

  VAR_7 |= VAR_1;
  VAR_7 |= VAR_2;
 } else {
  VAR_7 &= ~VAR_1;
  VAR_7 |= VAR_2;
 }
 FUNC_2(VAR_6, VAR_0, VAR_7);

 return VAR_3;
}
