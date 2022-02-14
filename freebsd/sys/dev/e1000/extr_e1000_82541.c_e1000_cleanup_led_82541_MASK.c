
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ledctl_default; } ;
struct TYPE_6__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct e1000_dev_spec_82541 {int spd_default; } ;
struct TYPE_5__ {struct e1000_dev_spec_82541 _82541; } ;
struct e1000_hw {TYPE_4__ mac; TYPE_3__ phy; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_2)
{
 struct e1000_dev_spec_82541 *VAR_3 = &VAR_2->dev_spec._82541;
 s32 VAR_4;

 FUNC_0("e1000_cleanup_led_82541");

 VAR_4 = VAR_2->phy.ops.write_reg(VAR_2, VAR_1,
     VAR_3->spd_default);
 if (VAR_4)
  goto out;

 FUNC_1(VAR_2, VAR_0, VAR_2->mac.ledctl_default);

out:
 return VAR_4;
}
