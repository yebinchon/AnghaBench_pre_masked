
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ledctl_default; } ;
struct TYPE_4__ {int (* write_reg ) (struct e1000_hw*,int ,int ) ;} ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_4)
{
 FUNC_0("e1000_cleanup_led_ich8lan");

 if (VAR_4->phy.type == VAR_3)
  return VAR_4->phy.ops.write_reg(VAR_4, VAR_2,
          0);

 FUNC_1(VAR_4, VAR_0, VAR_4->mac.ledctl_default);
 return VAR_1;
}
