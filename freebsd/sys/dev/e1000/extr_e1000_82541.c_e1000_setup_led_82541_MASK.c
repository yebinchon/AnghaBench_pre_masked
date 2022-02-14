
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int ledctl_mode1; } ;
struct TYPE_7__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct e1000_dev_spec_82541 {int spd_default; } ;
struct TYPE_6__ {struct e1000_dev_spec_82541 _82541; } ;
struct e1000_hw {TYPE_1__ mac; TYPE_4__ phy; TYPE_2__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_3)
{
 struct e1000_dev_spec_82541 *VAR_4 = &VAR_3->dev_spec._82541;
 s32 VAR_5;

 FUNC_0("e1000_setup_led_82541");

 VAR_5 = VAR_3->phy.ops.read_reg(VAR_3, VAR_1,
           &VAR_4->spd_default);
 if (VAR_5)
  goto out;

 VAR_5 = VAR_3->phy.ops.write_reg(VAR_3, VAR_1,
     (u16)(VAR_4->spd_default &
     ~VAR_2));
 if (VAR_5)
  goto out;

 FUNC_1(VAR_3, VAR_0, VAR_3->mac.ledctl_mode1);

out:
 return VAR_5;
}
