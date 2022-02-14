
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int dying; int parent_dmat; TYPE_9__* ifp; int driver_mtx; int cmd_mtx; int mem_res; int cmd_dma; int zeropad_dma; int dmabench_dma; int media; int co_hdl; int * tq; int watchdog_task; int dev; } ;
typedef TYPE_1__ mxge_softc_t ;
typedef int device_t ;
struct TYPE_13__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_4)
{
 mxge_softc_t *VAR_5 = FUNC_3(VAR_4);

 if (FUNC_18(VAR_5)) {
  FUNC_4(VAR_5->dev,
         "Detach vlans before removing module\n");
  return VAR_0;
 }
 FUNC_9(&VAR_5->driver_mtx);
 VAR_5->dying = 1;
 if (VAR_5->ifp->if_drv_flags & VAR_1)
  FUNC_11(VAR_5, 0);
 FUNC_10(&VAR_5->driver_mtx);
 FUNC_5(VAR_5->ifp);
 if (VAR_5->tq != ((void*)0)) {
  FUNC_20(VAR_5->tq, &VAR_5->watchdog_task);
  FUNC_21(VAR_5->tq);
  VAR_5->tq = ((void*)0);
 }
 FUNC_2(&VAR_5->co_hdl);
 FUNC_7(&VAR_5->media);
 FUNC_13(VAR_5, 0);
 FUNC_17(VAR_5);
 FUNC_16(VAR_5);
 FUNC_14(VAR_5);
 FUNC_15(VAR_5);
 FUNC_12(&VAR_5->dmabench_dma);
 FUNC_12(&VAR_5->zeropad_dma);
 FUNC_12(&VAR_5->cmd_dma);
 FUNC_1(VAR_4, VAR_3, VAR_2, VAR_5->mem_res);
 FUNC_19(VAR_4);
 FUNC_8(&VAR_5->cmd_mtx);
 FUNC_8(&VAR_5->driver_mtx);
 FUNC_6(VAR_5->ifp);
 FUNC_0(VAR_5->parent_dmat);
 return 0;
}
