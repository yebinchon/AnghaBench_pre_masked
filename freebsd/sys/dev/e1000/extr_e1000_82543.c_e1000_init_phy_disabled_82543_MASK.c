
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_dev_spec_82543 {int init_phy_disabled; } ;
struct TYPE_3__ {struct e1000_dev_spec_82543 _82543; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ dev_spec; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct e1000_hw *VAR_2)
{
 struct e1000_dev_spec_82543 *VAR_3 = &VAR_2->dev_spec._82543;
 bool VAR_4;

 FUNC_0("e1000_init_phy_disabled_82543");

 if (VAR_2->mac.type != VAR_1) {
  VAR_4 = VAR_0;
  goto out;
 }

 VAR_4 = VAR_3->init_phy_disabled;

out:
 return VAR_4;
}
