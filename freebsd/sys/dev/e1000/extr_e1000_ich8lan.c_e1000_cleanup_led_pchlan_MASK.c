
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {scalar_t__ ledctl_default; } ;
struct TYPE_4__ {int (* write_reg ) (struct e1000_hw*,int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_1)
{
 FUNC_0("e1000_cleanup_led_pchlan");

 return VAR_1->phy.ops.write_reg(VAR_1, VAR_0,
         (u16)VAR_1->mac.ledctl_default);
}
