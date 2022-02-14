
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct TYPE_16__ {int ifq_mtx; } ;
struct TYPE_18__ {int ifq_mtx; } ;
struct TYPE_17__ {int ifq_mtx; } ;
struct TYPE_20__ {int open_dev; int dmamem; TYPE_3__* chan; int timeout_handle; int dcd_timeout_handle; int devt; TYPE_13__ queue; int ifp; TYPE_2__ hi_queue; TYPE_1__ lo_queue; int * node; TYPE_8__* tty; scalar_t__ running; scalar_t__ lock; } ;
typedef TYPE_4__ drv_t ;
typedef int device_t ;
struct TYPE_21__ {scalar_t__ mode; TYPE_4__* sys; } ;
typedef TYPE_5__ cx_chan_t ;
struct TYPE_22__ {size_t num; TYPE_5__* chan; } ;
typedef TYPE_6__ cx_board_t ;
struct TYPE_23__ {int cx_mtx; TYPE_6__* board; int base_res; int base_rid; int drq_res; int drq_rid; int irq_res; int irq_rid; int intrhand; } ;
typedef TYPE_7__ bdrv_t ;
struct TYPE_24__ {int t_state; } ;
struct TYPE_19__ {scalar_t__ type; } ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_13__*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int ** VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (int ) ;
 TYPE_7__* FUNC_14 (int ) ;
 int FUNC_15 (TYPE_6__*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int * VAR_10 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (TYPE_8__*) ;

__attribute__((used)) static int FUNC_25 (device_t VAR_11)
{
 bdrv_t *VAR_12 = FUNC_14 (VAR_11);
 cx_board_t *VAR_13 = VAR_12->board;
 cx_chan_t *VAR_14;
 int VAR_15;

 FUNC_3 (FUNC_19 (&VAR_12->cx_mtx), ("cx mutex not initialized"));

 VAR_15 = FUNC_21 ();
 FUNC_0 (VAR_12);

 for (VAR_14 = VAR_13->chan; VAR_14 < VAR_13->chan + VAR_3; ++VAR_14) {
  drv_t *VAR_16 = (drv_t*) VAR_14->sys;

  if (!VAR_16 || VAR_16->chan->type == VAR_8)
   continue;
  if (VAR_16->lock) {
   FUNC_1 (VAR_12);
   FUNC_22 (VAR_15);
   return VAR_0;
  }
  if (VAR_14->mode == VAR_1 && VAR_16->tty && (VAR_16->tty->t_state & VAR_7) &&
      (VAR_16->open_dev|0x2)) {
   FUNC_1 (VAR_12);
   FUNC_22 (VAR_15);
   return VAR_0;
  }
  if (VAR_16->running) {
   FUNC_1 (VAR_12);
   FUNC_22 (VAR_15);
   return VAR_0;
  }
 }


 FUNC_9 (&VAR_10[VAR_13->num]);

 for (VAR_14 = VAR_13->chan; VAR_14 < VAR_13->chan + VAR_3; ++VAR_14) {
  drv_t *VAR_17 = VAR_14->sys;

  if (!VAR_17 || VAR_17->chan->type == VAR_8)
   continue;

  FUNC_9 (&VAR_17->dcd_timeout_handle);
 }
 FUNC_1 (VAR_12);
 FUNC_7 (VAR_11, VAR_12->irq_res, VAR_12->intrhand);
 FUNC_6 (VAR_11, VAR_6, VAR_12->irq_rid, VAR_12->irq_res);

 FUNC_6 (VAR_11, VAR_4, VAR_12->drq_rid, VAR_12->drq_res);

 FUNC_6 (VAR_11, VAR_5, VAR_12->base_rid, VAR_12->base_res);

 FUNC_0 (VAR_12);
 FUNC_11 (VAR_13);


 for (VAR_14 = VAR_13->chan; VAR_14 < VAR_13->chan + VAR_3; ++VAR_14) {
  drv_t *VAR_18 = (drv_t*) VAR_14->sys;

  if (!VAR_18 || VAR_18->chan->type == VAR_8)
   continue;

  if (VAR_18->tty) {
   FUNC_24 (VAR_18->tty);
   VAR_18->tty = ((void*)0);
  }

  FUNC_9 (&VAR_18->timeout_handle);
  FUNC_5 (VAR_18->ifp);

  FUNC_23 (VAR_18->ifp);

  FUNC_16 (VAR_18->ifp);
  FUNC_17(VAR_18->ifp);

  FUNC_2 (&VAR_18->queue);
  FUNC_18 (&VAR_18->queue.ifq_mtx);

  FUNC_13 (VAR_18->devt);
 }

 FUNC_12 (VAR_13);
 FUNC_1 (VAR_12);
 FUNC_8 (&VAR_10[VAR_13->num]);
 for (VAR_14 = VAR_13->chan; VAR_14 < VAR_13->chan + VAR_3; ++VAR_14) {
  drv_t *VAR_19 = VAR_14->sys;

  if (!VAR_19 || VAR_19->chan->type == VAR_8)
   continue;

  FUNC_8 (&VAR_19->dcd_timeout_handle);
  FUNC_8 (&VAR_19->timeout_handle);
 }
 FUNC_22 (VAR_15);

 VAR_15 = FUNC_21 ();
 for (VAR_14 = VAR_13->chan; VAR_14 < VAR_13->chan + VAR_3; ++VAR_14) {
  drv_t *VAR_20 = (drv_t*) VAR_14->sys;

  if (!VAR_20 || VAR_20->chan->type == VAR_8)
   continue;


  FUNC_10 (&VAR_20->dmamem);
 }
 VAR_12->board = ((void*)0);
 VAR_9 [VAR_13->num] = ((void*)0);
 FUNC_15 (VAR_13, VAR_2);
 FUNC_22 (VAR_15);

 FUNC_18 (&VAR_12->cx_mtx);

 return 0;
}
