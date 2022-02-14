
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ida_softc {int flags; int qcb_queue; int hwqcb_dmamap; int hwqcb_dmat; int buffer_dmat; int lock; } ;
struct ida_sgb {int dummy; } ;
struct ida_req {int dummy; } ;
struct ida_qcb {int error; int flags; int dmamap; struct ida_hardware_qcb* hwqcb; struct ida_softc* ida; } ;
struct TYPE_9__ {int sgcount; } ;
struct TYPE_7__ {int size; } ;
struct ida_hardware_qcb {TYPE_3__ req; TYPE_2__* seg; TYPE_1__ hdr; } ;
typedef int bus_dmasync_op_t ;
struct TYPE_10__ {int ds_len; int ds_addr; } ;
typedef TYPE_4__ bus_dma_segment_t ;
struct TYPE_11__ {int stqe; } ;
struct TYPE_8__ {void* length; void* addr; } ;


 int VAR_0 ;
 int VAR_1 ;

 int const VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 int FUNC_1 (int *,struct ida_qcb*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct ida_softc*,struct ida_qcb*) ;
 int FUNC_6 (struct ida_softc*) ;
 TYPE_5__ VAR_7 ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_8, bus_dma_segment_t *VAR_9, int VAR_10, int VAR_11)
{
 struct ida_hardware_qcb *VAR_12;
 struct ida_softc *VAR_13;
 struct ida_qcb *VAR_14;
 bus_dmasync_op_t VAR_15;
 int VAR_16;

 VAR_14 = VAR_8;
 VAR_13 = VAR_14->ida;
 if (!VAR_6)
  FUNC_7(&VAR_13->lock, VAR_5);
 if (VAR_11) {
  VAR_14->error = VAR_11;
  FUNC_5(VAR_13, VAR_14);
  return;
 }

 VAR_12 = VAR_14->hwqcb;
 VAR_12->hdr.size = FUNC_3((sizeof(struct ida_req) +
     sizeof(struct ida_sgb) * VAR_3) >> 2);

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_12->seg[VAR_16].addr = FUNC_4(VAR_9[VAR_16].ds_addr);
  VAR_12->seg[VAR_16].length = FUNC_4(VAR_9[VAR_16].ds_len);
 }
 VAR_12->req.sgcount = VAR_10;
 if (VAR_14->flags & 128) {
  switch (VAR_14->flags & 128) {
  case 128:
   VAR_15 = VAR_0 | VAR_1;
   break;
  case 129:
   VAR_15 = VAR_0;
   break;
  default:
   FUNC_0((VAR_14->flags & 128) ==
       VAR_2, ("bad DMA data flags"));
   VAR_15 = VAR_1;
   break;
  }
  FUNC_2(VAR_13->buffer_dmat, VAR_14->dmamap, VAR_15);
 }
 FUNC_2(VAR_13->hwqcb_dmat, VAR_13->hwqcb_dmamap,
     VAR_1 | VAR_0);

 FUNC_1(&VAR_13->qcb_queue, VAR_14, VAR_7.stqe);
 FUNC_6(VAR_13);
 VAR_13->flags &= ~VAR_4;
}
