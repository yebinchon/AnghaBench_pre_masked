
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_14__ {int ifq_mtx; } ;
struct TYPE_15__ {int ifq_mtx; } ;
struct TYPE_17__ {int dmamem; int timeout_handle; TYPE_2__* chan; int devt; TYPE_11__ queue; int ifp; TYPE_1__ hi_queue; int * node; scalar_t__ running; } ;
typedef TYPE_3__ drv_t ;
typedef int device_t ;
struct TYPE_18__ {scalar_t__ sys; } ;
typedef TYPE_4__ ct_chan_t ;
struct TYPE_19__ {size_t num; TYPE_4__* chan; } ;
typedef TYPE_5__ ct_board_t ;
struct TYPE_20__ {int ct_mtx; TYPE_5__* board; int base_res; int base_rid; int drq_res; int drq_rid; int irq_res; int irq_rid; int intrhand; } ;
typedef TYPE_6__ bdrv_t ;
struct TYPE_16__ {int type; } ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int ** VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int ) ;
 TYPE_6__* FUNC_14 (int ) ;
 int FUNC_15 (TYPE_5__*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int * VAR_7 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ) ;

__attribute__((used)) static int FUNC_24 (device_t VAR_8)
{
 bdrv_t *VAR_9 = FUNC_14 (VAR_8);
 ct_board_t *VAR_10 = VAR_9->board;
 ct_chan_t *VAR_11;
 int VAR_12;

 FUNC_3 (FUNC_19 (&VAR_9->ct_mtx), ("ct mutex not initialized"));

 VAR_12 = FUNC_21 ();
 FUNC_0 (VAR_9);

 for (VAR_11 = VAR_10->chan; VAR_11 < VAR_10->chan + VAR_2; ++VAR_11) {
  drv_t *VAR_13 = (drv_t*) VAR_11->sys;

  if (!VAR_13 || !VAR_13->chan->type)
   continue;

  if (VAR_13->running) {
   FUNC_1 (VAR_9);
   FUNC_22 (VAR_12);
   return VAR_0;
  }
 }


 FUNC_9 (&VAR_7[VAR_10->num]);

 FUNC_1 (VAR_9);

 FUNC_7 (VAR_8, VAR_9->irq_res, VAR_9->intrhand);
 FUNC_6 (VAR_8, VAR_5, VAR_9->irq_rid, VAR_9->irq_res);

 FUNC_6 (VAR_8, VAR_3, VAR_9->drq_rid, VAR_9->drq_res);

 FUNC_6 (VAR_8, VAR_4, VAR_9->base_rid, VAR_9->base_res);

 FUNC_0 (VAR_9);
 FUNC_11 (VAR_10);
 FUNC_1 (VAR_9);


 for (VAR_11 = VAR_10->chan; VAR_11 < VAR_10->chan + VAR_2; ++VAR_11) {
  drv_t *VAR_14 = (drv_t*) VAR_11->sys;

  if (!VAR_14 || !VAR_14->chan->type)
   continue;

  FUNC_9 (&VAR_14->timeout_handle);
  FUNC_5 (VAR_14->ifp);


  FUNC_23 (VAR_14->ifp);

  FUNC_16 (VAR_14->ifp);
  FUNC_17 (VAR_14->ifp);
  FUNC_2 (&VAR_14->queue);
  FUNC_18 (&VAR_14->queue.ifq_mtx);

  FUNC_13 (VAR_14->devt);
 }

 FUNC_0 (VAR_9);
 FUNC_12 (VAR_10);
 FUNC_1 (VAR_9);
 FUNC_8 (&VAR_7[VAR_10->num]);
 FUNC_22 (VAR_12);

 for (VAR_11 = VAR_10->chan; VAR_11 < VAR_10->chan + VAR_2; ++VAR_11) {
  drv_t *VAR_15 = (drv_t*) VAR_11->sys;

  if (!VAR_15 || !VAR_15->chan->type)
   continue;
  FUNC_8(&VAR_15->timeout_handle);


  FUNC_10 (&VAR_15->dmamem);
 }
 VAR_9->board = ((void*)0);
 VAR_6 [VAR_10->num] = ((void*)0);
 FUNC_15 (VAR_10, VAR_1);

 FUNC_18 (&VAR_9->ct_mtx);

 return 0;
}
