
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_dev_spec_82543 {int tbi_compatibility; } ;
struct TYPE_3__ {struct e1000_dev_spec_82543 _82543; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ dev_spec; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_2(struct e1000_hw *VAR_2, bool VAR_3)
{
 struct e1000_dev_spec_82543 *VAR_4 = &VAR_2->dev_spec._82543;

 FUNC_0("e1000_set_tbi_compatibility_82543");

 if (VAR_2->mac.type != VAR_1) {
  FUNC_1("TBI compatibility workaround for 82543 only.\n");
  goto out;
 }

 if (VAR_3)
  VAR_4->tbi_compatibility |= VAR_0;
 else
  VAR_4->tbi_compatibility &= ~VAR_0;

out:
 return;
}
