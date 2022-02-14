
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_dev_spec_ich8lan {int kmrn_lock_loss_workaround_enabled; } ;
struct TYPE_3__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ dev_spec; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;

void FUNC_2(struct e1000_hw *VAR_1,
       bool VAR_2)
{
 struct e1000_dev_spec_ich8lan *VAR_3 = &VAR_1->dev_spec.ich8lan;

 FUNC_0("e1000_set_kmrn_lock_loss_workaround_ich8lan");

 if (VAR_1->mac.type != VAR_0) {
  FUNC_1("Workaround applies to ICH8 only.\n");
  return;
 }

 VAR_3->kmrn_lock_loss_workaround_enabled = VAR_2;

 return;
}
