
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_dev_spec_82541 {int phy_init_script; } ;
struct TYPE_3__ {struct e1000_dev_spec_82541 _82541; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ dev_spec; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;

void FUNC_2(struct e1000_hw *VAR_1, bool VAR_2)
{
 struct e1000_dev_spec_82541 *VAR_3 = &VAR_1->dev_spec._82541;

 FUNC_0("e1000_init_script_state_82541");

 if (VAR_1->phy.type != VAR_0) {
  FUNC_1("Initialization script not necessary.\n");
  goto out;
 }

 VAR_3->phy_init_script = VAR_2;

out:
 return;
}
