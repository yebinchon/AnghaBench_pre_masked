
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ledctl_default; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;

s32 FUNC_2(struct e1000_hw *VAR_2)
{
 FUNC_0("e1000_cleanup_led_generic");

 FUNC_1(VAR_2, VAR_0, VAR_2->mac.ledctl_default);
 return VAR_1;
}
