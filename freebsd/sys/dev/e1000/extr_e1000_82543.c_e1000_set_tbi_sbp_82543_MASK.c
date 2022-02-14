
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e1000_dev_spec_82543 {int tbi_compatibility; } ;
struct TYPE_2__ {struct e1000_dev_spec_82543 _82543; } ;
struct e1000_hw {TYPE_1__ dev_spec; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;

__attribute__((used)) static void FUNC_2(struct e1000_hw *VAR_1, bool VAR_2)
{
 struct e1000_dev_spec_82543 *VAR_3 = &VAR_1->dev_spec._82543;

 FUNC_0("e1000_set_tbi_sbp_82543");

 if (VAR_2 && FUNC_1(VAR_1))
  VAR_3->tbi_compatibility |= VAR_0;
 else
  VAR_3->tbi_compatibility &= ~VAR_0;

 return;
}
