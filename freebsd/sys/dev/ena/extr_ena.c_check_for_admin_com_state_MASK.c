
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int admin_q_pause; } ;
struct ena_adapter {int reset_reason; TYPE_1__ dev_stats; int pdev; int ena_dev; } ;


 int FUNC_0 (int ,struct ena_adapter*) ;
 int FUNC_1 (int ,struct ena_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ena_adapter *VAR_2)
{
 if (FUNC_6(FUNC_4(VAR_2->ena_dev) ==
     0)) {
  FUNC_3(VAR_2->pdev,
      "ENA admin queue is not in running state!\n");
  FUNC_2(VAR_2->dev_stats.admin_q_pause, 1);
  if (FUNC_5(!FUNC_0(VAR_0, VAR_2))) {
   VAR_2->reset_reason = VAR_1;
   FUNC_1(VAR_0, VAR_2);
  }
 }
}
