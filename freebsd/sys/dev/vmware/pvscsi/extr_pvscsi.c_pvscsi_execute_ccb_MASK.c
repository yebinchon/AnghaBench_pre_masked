
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; int timeout; int status; struct pvscsi_softc* ccb_pvscsi_sc; } ;
union ccb {TYPE_2__ ccb_h; } ;
typedef int uint8_t ;
struct pvscsi_softc {int buffer_dmat; int dev; int lock; struct pvscsi_rings_state* rings_state; } ;
struct pvscsi_sg_element {scalar_t__ flags; int length; scalar_t__ addr; } ;
struct pvscsi_rings_state {int req_prod_idx; } ;
struct pvscsi_ring_req_desc {int * cdb; scalar_t__ data_addr; int flags; } ;
struct pvscsi_hcb {int callout; int dma_map; scalar_t__ sg_list_paddr; TYPE_1__* sg_list; struct pvscsi_ring_req_desc* e; union ccb* ccb; } ;
typedef scalar_t__ bus_dmasync_op_t ;
struct TYPE_7__ {scalar_t__ ds_addr; int ds_len; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_5__ {struct pvscsi_sg_element* sge; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *,int,int ,int ,struct pvscsi_hcb*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct pvscsi_softc*,struct pvscsi_hcb*) ;
 int FUNC_7 (struct pvscsi_softc*,int ) ;
 int VAR_15 ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_16, bus_dma_segment_t *VAR_17, int VAR_18, int VAR_19)
{
 struct pvscsi_hcb *VAR_20;
 struct pvscsi_ring_req_desc *VAR_21;
 union ccb *VAR_22;
 struct pvscsi_softc *VAR_23;
 struct pvscsi_rings_state *VAR_24;
 uint8_t VAR_25;
 bus_dmasync_op_t VAR_26;

 VAR_20 = VAR_16;
 VAR_22 = VAR_20->ccb;
 VAR_21 = VAR_20->e;
 VAR_23 = VAR_22->ccb_h.ccb_pvscsi_sc;
 VAR_24 = VAR_23->rings_state;

 FUNC_5(&VAR_23->lock, VAR_8);

 if (VAR_19) {
  FUNC_3(VAR_23->dev, "pvscsi_execute_ccb error %d\n", VAR_19);

  if (VAR_19 == VAR_7) {
   VAR_22->ccb_h.status = VAR_4;
  } else {
   VAR_22->ccb_h.status = VAR_3;
  }

  FUNC_6(VAR_23, VAR_20);
  FUNC_8(VAR_22);
  return;
 }

 VAR_21->flags = 0;
 VAR_26 = 0;
 switch (VAR_22->ccb_h.flags & VAR_2) {
 case 129:
  VAR_21->flags |= VAR_9;
  break;
 case 130:
  VAR_21->flags |= VAR_11;
  VAR_26 = VAR_0;
  break;
 case 128:
  VAR_21->flags |= VAR_10;
  VAR_26 = VAR_1;
  break;
 case 131:

  break;
 }

 if (VAR_18 != 0) {
  if (VAR_18 > 1) {
   int VAR_27;
   struct pvscsi_sg_element *VAR_28;

   FUNC_0(VAR_18 <= VAR_13,
       ("too many sg segments"));

   VAR_28 = VAR_20->sg_list->sge;
   VAR_21->flags |= VAR_12;

   for (VAR_27 = 0; VAR_27 < VAR_18; ++VAR_27) {
    VAR_28[VAR_27].addr = VAR_17[VAR_27].ds_addr;
    VAR_28[VAR_27].length = VAR_17[VAR_27].ds_len;
    VAR_28[VAR_27].flags = 0;
   }

   VAR_21->data_addr = VAR_20->sg_list_paddr;
  } else {
   VAR_21->data_addr = VAR_17->ds_addr;
  }

  FUNC_1(VAR_23->buffer_dmat, VAR_20->dma_map, VAR_26);
 } else {
  VAR_21->data_addr = 0;
 }

 VAR_25 = VAR_21->cdb[0];
 VAR_22->ccb_h.status |= VAR_5;

 if (VAR_22->ccb_h.timeout != VAR_6) {
  FUNC_2(&VAR_20->callout, VAR_22->ccb_h.timeout * VAR_14,
      0, VAR_15, VAR_20, 0);
 }

 FUNC_4();
 VAR_24->req_prod_idx++;
 FUNC_7(VAR_23, VAR_25);
}
