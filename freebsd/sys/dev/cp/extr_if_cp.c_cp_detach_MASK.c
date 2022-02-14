
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_20__ {int ifq_mtx; } ;
struct TYPE_19__ {int ifq_mtx; } ;
struct TYPE_21__ {int dmamem; int timeout_handle; TYPE_10__* chan; int devt; TYPE_1__ hi_queue; TYPE_15__ queue; int * node; int ifp; scalar_t__ running; } ;
typedef TYPE_2__ drv_t ;
typedef int device_t ;
struct TYPE_22__ {int num; scalar_t__ sys; } ;
typedef TYPE_3__ cp_chan_t ;
struct TYPE_23__ {size_t num; TYPE_3__* chan; int * sys; } ;
typedef TYPE_4__ cp_board_t ;
struct TYPE_24__ {int cp_mtx; int dmamem; int cp_res; int cp_irq; int cp_intrhand; TYPE_4__* board; } ;
typedef TYPE_5__ bdrv_t ;
struct TYPE_18__ {int type; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_15__*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int ** VAR_6 ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*,int ,int ) ;
 int FUNC_15 (TYPE_10__*,int ) ;
 int FUNC_16 (TYPE_10__*,int ) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (int ) ;
 TYPE_5__* FUNC_20 (int ) ;
 int FUNC_21 (TYPE_4__*,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int * VAR_8 ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 () ;
 int FUNC_28 (int) ;
 int FUNC_29 (int ) ;

__attribute__((used)) static int FUNC_30 (device_t VAR_9)
{
 bdrv_t *VAR_10 = FUNC_20 (VAR_9);
 cp_board_t *VAR_11 = VAR_10->board;
 cp_chan_t *VAR_12;
 int VAR_13;

 FUNC_3 (FUNC_25 (&VAR_10->cp_mtx), ("cp mutex not initialized"));
 VAR_13 = FUNC_27 ();
 FUNC_0 (VAR_10);

 for (VAR_12 = VAR_11->chan; VAR_12 < VAR_11->chan + VAR_2; ++VAR_12) {
  drv_t *VAR_14 = (drv_t*) VAR_12->sys;

  if (! VAR_14 || ! VAR_14->chan->type)
   continue;
  if (VAR_14->running) {
   FUNC_1 (VAR_10);
   FUNC_28 (VAR_13);
   return VAR_0;
  }
 }



 for (VAR_12 = VAR_11->chan; VAR_12 < VAR_11->chan + VAR_2; ++VAR_12) {
  drv_t *VAR_15 = (drv_t*) VAR_12->sys;

  if (! VAR_15 || ! VAR_15->chan->type)
   continue;

  FUNC_17 (VAR_12);
  FUNC_18 (VAR_12);
  FUNC_15 (VAR_15->chan, 0);
  FUNC_16 (VAR_15->chan, 0);
 }


 VAR_7 = 1;
 FUNC_12 (VAR_11, 1);
 FUNC_13 (VAR_11);
 FUNC_14 (VAR_11, 0 ,0);
 FUNC_10 (&VAR_8[VAR_11->num]);


 FUNC_8 (VAR_9, VAR_10->cp_irq, VAR_10->cp_intrhand);

 for (VAR_12=VAR_11->chan; VAR_12<VAR_11->chan+VAR_2; ++VAR_12) {
  drv_t *VAR_16 = (drv_t*) VAR_12->sys;

  if (! VAR_16 || ! VAR_16->chan->type)
   continue;
  FUNC_10 (&VAR_16->timeout_handle);


  FUNC_6 (VAR_16->ifp);


  FUNC_29 (VAR_16->ifp);


  FUNC_22 (VAR_16->ifp);
  FUNC_23 (VAR_16->ifp);
  FUNC_2 (&VAR_16->queue);
  FUNC_24 (&VAR_16->queue.ifq_mtx);
  FUNC_19 (VAR_16->devt);
 }

 VAR_11->sys = ((void*)0);
 FUNC_1 (VAR_10);

 FUNC_7 (VAR_9, VAR_3, 0, VAR_10->cp_irq);
 FUNC_7 (VAR_9, VAR_4, FUNC_5(0), VAR_10->cp_res);

 FUNC_0 (VAR_10);
 FUNC_13 (VAR_11);
 FUNC_1 (VAR_10);
 FUNC_9 (&VAR_8[VAR_11->num]);
 FUNC_28 (VAR_13);

 for (VAR_12 = VAR_11->chan; VAR_12 < VAR_11->chan + VAR_2; ++VAR_12) {
  drv_t *VAR_17 = (drv_t*) VAR_12->sys;

  if (! VAR_17 || ! VAR_17->chan->type)
   continue;
  FUNC_9 (&VAR_17->timeout_handle);
  VAR_6 [VAR_11->num*VAR_2 + VAR_12->num] = ((void*)0);

  FUNC_11 (&VAR_17->dmamem);
 }
 VAR_5 [VAR_11->num] = ((void*)0);
 FUNC_11 (&VAR_10->dmamem);
 FUNC_21 (VAR_11, VAR_1);
 FUNC_24 (&VAR_10->cp_mtx);
 return 0;
}
