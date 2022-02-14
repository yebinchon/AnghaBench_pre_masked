
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {int ds_len; int ds_addr; } ;
typedef TYPE_6__ bus_dma_segment_t ;
struct TYPE_15__ {int physical_sg; scalar_t__ data_out; scalar_t__ data_in; } ;
struct TYPE_22__ {TYPE_2__ flags; TYPE_7__* psg; int priv; } ;
struct TYPE_21__ {TYPE_5__* ccb; int timeout; int dma_map; TYPE_3__* vbus_ext; } ;
struct TYPE_14__ {int bus; } ;
struct TYPE_20__ {int eot; int size; TYPE_1__ addr; } ;
struct TYPE_17__ {int timeout_ch; } ;
struct TYPE_18__ {TYPE_4__ ccb_h; } ;
struct TYPE_16__ {int io_dmat; } ;
typedef TYPE_7__* PSG ;
typedef TYPE_8__* POS_CMDEXT ;
typedef TYPE_9__* PCOMMAND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,TYPE_9__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_9__*) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,TYPE_9__*,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_5, bus_dma_segment_t *VAR_6, int VAR_7, int VAR_8)
{
 PCOMMAND VAR_9 = (PCOMMAND)VAR_5;
 POS_CMDEXT VAR_10 = (POS_CMDEXT)VAR_9->priv;
 PSG VAR_11 = VAR_9->psg;
 int VAR_12;

 FUNC_0(VAR_9->flags.physical_sg);

 if (VAR_8)
  FUNC_4("busdma error");

 FUNC_0(VAR_7<=VAR_4);

 if (VAR_7 != 0) {
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++, VAR_11++) {
   VAR_11->addr.bus = VAR_6[VAR_12].ds_addr;
   VAR_11->size = VAR_6[VAR_12].ds_len;
   VAR_11->eot = 0;
  }
  VAR_11[-1].eot = 1;

  if (VAR_9->flags.data_in) {
   FUNC_1(VAR_10->vbus_ext->io_dmat, VAR_10->dma_map,
       VAR_0);
  }
  else if (VAR_9->flags.data_out) {
   FUNC_1(VAR_10->vbus_ext->io_dmat, VAR_10->dma_map,
       VAR_1);
  }
 }



 VAR_10->ccb->ccb_h.timeout_ch = FUNC_5(VAR_3, VAR_9, VAR_2);

 FUNC_3(VAR_9);
}
