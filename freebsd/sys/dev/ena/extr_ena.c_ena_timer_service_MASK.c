
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ena_admin_host_info {int dummy; } ;
struct ena_adapter {int timer_service; int reset_task; int reset_tq; int pdev; int ifp; TYPE_2__* ena_dev; } ;
struct TYPE_3__ {struct ena_admin_host_info* host_info; } ;
struct TYPE_4__ {TYPE_1__ host_attr; } ;


 int FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct ena_adapter*) ;
 int FUNC_3 (struct ena_adapter*) ;
 int FUNC_4 (struct ena_adapter*) ;
 int FUNC_5 (struct ena_adapter*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct ena_admin_host_info*,int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_2)
{
 struct ena_adapter *VAR_3 = (struct ena_adapter *)VAR_2;
 struct ena_admin_host_info *VAR_4 =
     VAR_3->ena_dev->host_attr.host_info;

 FUNC_5(VAR_3);

 FUNC_2(VAR_3);

 FUNC_4(VAR_3);

 FUNC_3(VAR_3);

 if (VAR_4 != ((void*)0))
  FUNC_7(VAR_4, VAR_3->ifp);

 if (FUNC_9(FUNC_0(VAR_0, VAR_3))) {
  FUNC_6(VAR_3->pdev, "Trigger reset is on\n");
  FUNC_8(VAR_3->reset_tq, &VAR_3->reset_task);
  return;
 }




 FUNC_1(&VAR_3->timer_service, VAR_1, VAR_1, 0);
}
