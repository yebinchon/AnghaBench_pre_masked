
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_admin_ena_hw_hints {int dummy; } ;
struct TYPE_2__ {scalar_t__ group; int syndrom; } ;
struct ena_admin_aenq_entry {TYPE_1__ aenq_common_desc; int inline_data_w4; } ;
struct ena_adapter {int pdev; } ;


 scalar_t__ VAR_0 ;

 int FUNC_0 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ena_adapter*,struct ena_admin_ena_hw_hints*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1,
    struct ena_admin_aenq_entry *VAR_2)
{
 struct ena_adapter *VAR_3 = (struct ena_adapter *)VAR_1;
 struct ena_admin_ena_hw_hints *VAR_4;

 FUNC_0(VAR_2->aenq_common_desc.group != VAR_0,
     "Invalid group(%x) expected %x\n", VAR_2->aenq_common_desc.group,
     VAR_0);

 switch (VAR_2->aenq_common_desc.syndrom) {
 case 128:
  VAR_4 =
      (struct ena_admin_ena_hw_hints *)(&VAR_2->inline_data_w4);
  FUNC_2(VAR_3, VAR_4);
  break;
 default:
  FUNC_1(VAR_3->pdev,
      "Invalid aenq notification link state %d\n",
      VAR_2->aenq_common_desc.syndrom);
 }
}
