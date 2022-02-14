
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
struct ccb_trans_settings_spi {int valid; int flags; scalar_t__ bus_width; scalar_t__ sync_offset; int ppr_options; scalar_t__ sync_period; } ;
struct ccb_trans_settings_scsi {int valid; int flags; } ;
struct TYPE_10__ {int status; int target_lun; int target_id; } ;
struct TYPE_8__ {struct ccb_trans_settings_spi spi; } ;
struct TYPE_7__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings {scalar_t__ type; TYPE_4__ ccb_h; int transport_version; int protocol_version; TYPE_2__ xport_specific; TYPE_1__ proto_specific; } ;
struct ahd_tmode_tstate {int discenable; int tagenable; } ;
struct ahd_softc {int user_discenable; int user_tagenable; } ;
struct TYPE_12__ {scalar_t__ offset; scalar_t__ period; int ppr_options; int transport_version; int protocol_version; } ;
struct TYPE_11__ {scalar_t__ offset; scalar_t__ period; int ppr_options; int transport_version; int protocol_version; } ;
struct TYPE_9__ {int transport_version; int protocol_version; } ;
struct ahd_initiator_tinfo {TYPE_6__ goal; TYPE_5__ user; TYPE_3__ curr; } ;
struct ahd_devinfo {int target_mask; int target; int our_scsiid; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*,int ) ;
 int FUNC_2 (struct ahd_devinfo*,int ,int ,int ,int ,int ) ;
 struct ahd_initiator_tinfo* FUNC_3 (struct ahd_softc*,int ,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_4 (struct ahd_softc*,scalar_t__*,int *,int ) ;
 int FUNC_5 (struct ahd_softc*,struct ahd_devinfo*,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_6 (struct ahd_softc*,struct ahd_devinfo*,scalar_t__,int ,int ) ;
 int FUNC_7 (struct ahd_softc*,int *,scalar_t__,scalar_t__*,scalar_t__,int ) ;
 int FUNC_8 (struct ahd_softc*,int *,scalar_t__*,int ) ;
 int VAR_20 ;

__attribute__((used)) static void
FUNC_9(struct ahd_softc *VAR_21, int VAR_22, char VAR_23,
        struct ccb_trans_settings *VAR_24)
{
 struct ahd_devinfo VAR_25;
 struct ccb_trans_settings_scsi *VAR_26;
 struct ccb_trans_settings_spi *VAR_27;
 struct ahd_initiator_tinfo *VAR_28;
 struct ahd_tmode_tstate *VAR_29;
 uint16_t *VAR_30;
 uint16_t *VAR_31;
 u_int VAR_32;

 VAR_26 = &VAR_24->proto_specific.scsi;
 VAR_27 = &VAR_24->xport_specific.spi;
 FUNC_2(&VAR_25, FUNC_1(VAR_21, VAR_20),
       VAR_24->ccb_h.target_id,
       VAR_24->ccb_h.target_lun,
       FUNC_0(VAR_21, VAR_20),
       VAR_19);
 VAR_28 = FUNC_3(VAR_21, VAR_25.channel,
        VAR_25.our_scsiid,
        VAR_25.target, &VAR_29);
 VAR_32 = 0;
 if (VAR_24->type == VAR_13) {
  VAR_32 |= VAR_1;
  VAR_30 = &VAR_29->discenable;
  VAR_31 = &VAR_29->tagenable;
  VAR_28->curr.protocol_version = VAR_24->protocol_version;
  VAR_28->curr.transport_version = VAR_24->transport_version;
  VAR_28->goal.protocol_version = VAR_24->protocol_version;
  VAR_28->goal.transport_version = VAR_24->transport_version;
 } else if (VAR_24->type == VAR_14) {
  VAR_32 |= VAR_2;
  VAR_30 = &VAR_21->user_discenable;
  VAR_31 = &VAR_21->user_tagenable;
  VAR_28->user.protocol_version = VAR_24->protocol_version;
  VAR_28->user.transport_version = VAR_24->transport_version;
 } else {
  VAR_24->ccb_h.status = VAR_4;
  return;
 }

 if ((VAR_27->valid & VAR_9) != 0) {
  if ((VAR_27->flags & VAR_7) != 0)
   *VAR_30 |= VAR_25.target_mask;
  else
   *VAR_30 &= ~VAR_25.target_mask;
 }

 if ((VAR_26->valid & VAR_6) != 0) {
  if ((VAR_26->flags & VAR_5) != 0)
   *VAR_31 |= VAR_25.target_mask;
  else
   *VAR_31 &= ~VAR_25.target_mask;
 }

 if ((VAR_27->valid & VAR_8) != 0) {
  FUNC_8(VAR_21, ((void*)0),
       &VAR_27->bus_width, VAR_19);
  FUNC_6(VAR_21, &VAR_25, VAR_27->bus_width,
         VAR_32, VAR_15);
 }

 if ((VAR_27->valid & VAR_10) == 0) {
  if (VAR_32 == VAR_2)
   VAR_27->ppr_options = VAR_28->user.ppr_options;
  else
   VAR_27->ppr_options = VAR_28->goal.ppr_options;
 }

 if ((VAR_27->valid & VAR_11) == 0) {
  if (VAR_32 == VAR_2)
   VAR_27->sync_offset = VAR_28->user.offset;
  else
   VAR_27->sync_offset = VAR_28->goal.offset;
 }

 if ((VAR_27->valid & VAR_12) == 0) {
  if (VAR_32 == VAR_2)
   VAR_27->sync_period = VAR_28->user.period;
  else
   VAR_27->sync_period = VAR_28->goal.period;
 }

 if (((VAR_27->valid & VAR_12) != 0)
  || ((VAR_27->valid & VAR_11) != 0)) {
  u_int VAR_33;

  VAR_33 = VAR_0;

  if (VAR_27->bus_width != VAR_18)
   VAR_27->ppr_options &= ~VAR_16;

  if ((*VAR_30 & VAR_25.target_mask) == 0)
   VAR_27->ppr_options &= ~VAR_17;

  FUNC_4(VAR_21, &VAR_27->sync_period,
      &VAR_27->ppr_options, VAR_33);
  FUNC_7(VAR_21, ((void*)0),
        VAR_27->sync_period, &VAR_27->sync_offset,
        VAR_27->bus_width, VAR_19);


  if (VAR_27->sync_offset == 0) {
   VAR_27->sync_period = 0;
   VAR_27->ppr_options = 0;
  }

  FUNC_5(VAR_21, &VAR_25, VAR_27->sync_period,
     VAR_27->sync_offset, VAR_27->ppr_options,
     VAR_32, VAR_15);
 }
 VAR_24->ccb_h.status = VAR_3;
}
