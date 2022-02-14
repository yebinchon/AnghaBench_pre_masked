
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ena_stats_dev {int dummy; } ;
struct ena_hw_stats {int dummy; } ;
struct ena_com_dev {struct ena_com_dev* bus; } ;
struct ena_adapter {TYPE_1__* ifp; int ioctl_sx; int global_mtx; int pdev; int dev_stats; int hw_stats; int reset_tq; int reset_task; int timer_service; struct ena_com_dev* ena_dev; } ;
typedef int device_t ;
typedef int counter_u64_t ;
struct TYPE_4__ {int * if_vlantrunk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct ena_adapter* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ena_com_dev*) ;
 int FUNC_6 (struct ena_com_dev*) ;
 int FUNC_7 (struct ena_adapter*,int) ;
 int FUNC_8 (struct ena_adapter*) ;
 int FUNC_9 (struct ena_adapter*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct ena_adapter*) ;
 int FUNC_12 (struct ena_adapter*) ;
 int FUNC_13 (struct ena_adapter*) ;
 int FUNC_14 (struct ena_adapter*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (struct ena_com_dev*,int ) ;
 int FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int ,int *,int *) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_3)
{
 struct ena_adapter *VAR_4 = FUNC_3(VAR_3);
 struct ena_com_dev *VAR_5 = VAR_4->ena_dev;
 int VAR_6;


 if (VAR_4->ifp->if_vlantrunk != ((void*)0)) {
  FUNC_4(VAR_4->pdev ,"VLAN is in use, detach first\n");
  return (VAR_0);
 }

 FUNC_15(VAR_4->ifp);


 FUNC_2(&VAR_4->timer_service);
 while (FUNC_24(VAR_4->reset_tq, &VAR_4->reset_task, ((void*)0)))
  FUNC_25(VAR_4->reset_tq, &VAR_4->reset_task);
 FUNC_26(VAR_4->reset_tq);

 FUNC_23(&VAR_4->ioctl_sx);
 FUNC_8(VAR_4);
 FUNC_7(VAR_4, 1);
 FUNC_22(&VAR_4->ioctl_sx);





 FUNC_9(VAR_4);

 FUNC_10((counter_u64_t *)&VAR_4->hw_stats,
     sizeof(struct ena_hw_stats));
 FUNC_10((counter_u64_t *)&VAR_4->dev_stats,
     sizeof(struct ena_stats_dev));

 VAR_6 = FUNC_13(VAR_4);
 if (FUNC_27(VAR_6 != 0))
  FUNC_4(VAR_4->pdev,
      "Unmapped RX DMA tag associations\n");

 VAR_6 = FUNC_14(VAR_4);
 if (FUNC_27(VAR_6 != 0))
  FUNC_4(VAR_4->pdev,
      "Unmapped TX DMA tag associations\n");

 FUNC_11(VAR_4);

 FUNC_12(VAR_4);

 if (FUNC_18(FUNC_0(VAR_1, VAR_4)))
  FUNC_6(VAR_5);

 FUNC_5(VAR_5);

 FUNC_19(&VAR_4->global_mtx);
 FUNC_21(&VAR_4->ioctl_sx);

 FUNC_17(VAR_4->ifp);

 if (VAR_5->bus != ((void*)0))
  FUNC_16(VAR_5->bus, VAR_2);

 if (VAR_5 != ((void*)0))
  FUNC_16(VAR_5, VAR_2);

 return (FUNC_1(VAR_3));
}
