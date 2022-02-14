
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int flags; scalar_t__ func_code; int status; } ;
union ccb {TYPE_5__ ccb_h; } ;
typedef int u_int ;
struct target_data {int data_phase; int target_phases; } ;
struct scb {int flags; TYPE_4__* hscb; int dmamap; void* sg_list; scalar_t__ sg_count; struct ahd_softc* ahd_softc; union ccb* io_ctx; } ;
struct ahd_tmode_tstate {int discenable; int auto_negotiate; } ;
struct TYPE_14__ {struct scb** scbindex; } ;
struct ahd_softc {TYPE_6__ scb_data; int pending_scbs; int buffer_dmat; } ;
struct TYPE_11__ {scalar_t__ width; scalar_t__ period; scalar_t__ ppr_options; } ;
struct TYPE_10__ {int ppr_options; } ;
struct ahd_initiator_tinfo {TYPE_3__ goal; TYPE_2__ curr; } ;
typedef int bus_dmasync_op_t ;
struct TYPE_15__ {int ds_len; int ds_addr; } ;
typedef TYPE_7__ bus_dma_segment_t ;
struct TYPE_9__ {struct target_data tdata; } ;
struct TYPE_12__ {scalar_t__ task_management; int control; int scsiid; TYPE_1__ shared_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,struct scb*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t FUNC_1 (struct scb*) ;
 int FUNC_2 (struct ahd_softc*,struct scb*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (struct ahd_softc*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ahd_softc*,int ) ;
 scalar_t__ VAR_24 ;
 struct ahd_initiator_tinfo* FUNC_6 (struct ahd_softc*,int ,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_7 (struct ahd_softc*,struct scb*) ;
 int FUNC_8 (struct ahd_softc*,int ,int ) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (struct ahd_softc*,struct scb*) ;
 int FUNC_11 (struct ahd_softc*,size_t) ;
 void* FUNC_12 (struct ahd_softc*,struct scb*,void*,int ,int ,int) ;
 int FUNC_13 (struct ahd_softc*) ;
 scalar_t__ FUNC_14 (struct scb*) ;
 int FUNC_15 (struct scb*) ;
 int FUNC_16 (struct scb*,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int VAR_25 ;
 int FUNC_19 (union ccb*) ;

__attribute__((used)) static void
FUNC_20(void *VAR_26, bus_dma_segment_t *VAR_27, int VAR_28,
  int VAR_29)
{
 struct scb *VAR_30;
 union ccb *VAR_31;
 struct ahd_softc *VAR_32;
 struct ahd_initiator_tinfo *VAR_33;
 struct ahd_tmode_tstate *VAR_34;
 u_int VAR_35;

 VAR_30 = (struct scb *)VAR_26;
 VAR_31 = VAR_30->io_ctx;
 VAR_32 = VAR_30->ahd_softc;

 if (VAR_29 != 0) {
  if (VAR_29 == VAR_14)
   FUNC_16(VAR_30, VAR_9);
  else
   FUNC_16(VAR_30, VAR_7);
  if (VAR_28 != 0)
   FUNC_18(VAR_32->buffer_dmat, VAR_30->dmamap);
  FUNC_7(VAR_32, VAR_30);
  FUNC_19(VAR_31);
  return;
 }
 VAR_30->sg_count = 0;
 if (VAR_28 != 0) {
  void *VAR_36;
  bus_dmasync_op_t VAR_37;
  u_int VAR_38;


  for (VAR_38 = VAR_28, VAR_36 = VAR_30->sg_list; VAR_38 > 0; VAR_38--) {

   VAR_36 = FUNC_12(VAR_32, VAR_30, VAR_36, VAR_27->ds_addr,
       VAR_27->ds_len,
               VAR_38 == 1);
   VAR_27++;
  }

  if ((VAR_31->ccb_h.flags & VAR_3) == VAR_2)
   VAR_37 = VAR_0;
  else
   VAR_37 = VAR_1;

  FUNC_17(VAR_32->buffer_dmat, VAR_30->dmamap, VAR_37);

  if (VAR_31->ccb_h.func_code == VAR_24) {
   struct target_data *VAR_39;

   VAR_39 = &VAR_30->hscb->shared_data.tdata;
   VAR_39->target_phases |= VAR_13;
   if ((VAR_31->ccb_h.flags & VAR_3) == VAR_4)
    VAR_39->data_phase = VAR_18;
   else
    VAR_39->data_phase = VAR_17;
  }
 }





 if (FUNC_14(VAR_30) != VAR_8) {
  if (VAR_28 != 0)
   FUNC_18(VAR_32->buffer_dmat,
       VAR_30->dmamap);
  FUNC_7(VAR_32, VAR_30);
  FUNC_19(VAR_31);
  return;
 }

 VAR_33 = FUNC_6(VAR_32, FUNC_3(VAR_32, VAR_30->hscb->scsiid),
        FUNC_4(VAR_30->hscb->scsiid),
        FUNC_5(VAR_32, VAR_30->hscb->scsiid),
        &VAR_34);

 VAR_35 = FUNC_2(VAR_32, VAR_30);

 if ((VAR_34->discenable & VAR_35) != 0
  && (VAR_31->ccb_h.flags & VAR_5) == 0)
  VAR_30->hscb->control |= VAR_12;

 if ((VAR_33->curr.ppr_options & VAR_16) != 0) {
  VAR_30->flags |= VAR_22;
  if (VAR_30->hscb->task_management != 0)
   VAR_30->hscb->control &= ~VAR_15;
 }

 if ((VAR_31->ccb_h.flags & VAR_6) != 0
  && (VAR_33->goal.width != 0
   || VAR_33->goal.period != 0
   || VAR_33->goal.ppr_options != 0)) {
  VAR_30->flags |= VAR_21;
  VAR_30->hscb->control |= VAR_15;
 } else if ((VAR_34->auto_negotiate & VAR_35) != 0) {
  VAR_30->flags |= VAR_20;
  VAR_30->hscb->control |= VAR_15;
 }

 FUNC_0(&VAR_32->pending_scbs, VAR_30, VAR_25);

 VAR_31->ccb_h.status |= VAR_10;

 FUNC_15(VAR_30);

 if ((VAR_30->flags & VAR_23) != 0) {

  VAR_32->scb_data.scbindex[FUNC_1(VAR_30)] = VAR_30;
  FUNC_9(VAR_32);
  FUNC_11(VAR_32, FUNC_1(VAR_30));
  FUNC_8(VAR_32, VAR_19, VAR_11);
  FUNC_13(VAR_32);
 } else {
  FUNC_10(VAR_32, VAR_30);
 }

}
