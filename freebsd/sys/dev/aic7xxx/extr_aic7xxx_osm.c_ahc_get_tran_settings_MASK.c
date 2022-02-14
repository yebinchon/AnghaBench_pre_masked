
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ccb_trans_settings_spi {int valid; int ppr_options; int bus_width; int sync_offset; int sync_period; int flags; } ;
struct ccb_trans_settings_scsi {scalar_t__ valid; int flags; } ;
struct TYPE_6__ {int status; int target_lun; int target_id; } ;
struct TYPE_5__ {struct ccb_trans_settings_spi spi; } ;
struct TYPE_4__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings {scalar_t__ type; TYPE_3__ ccb_h; int transport; int protocol; int transport_version; int protocol_version; TYPE_2__ xport_specific; TYPE_1__ proto_specific; } ;
struct ahc_transinfo {int ppr_options; int width; int offset; int period; int transport_version; int protocol_version; } ;
struct ahc_tmode_tstate {int discenable; int tagenable; } ;
struct ahc_softc {int user_discenable; int user_tagenable; } ;
struct ahc_initiator_tinfo {struct ahc_transinfo user; struct ahc_transinfo curr; } ;
struct ahc_devinfo {int target_mask; int target; int our_scsiid; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ahc_devinfo*,int,int ,int ,char,int ) ;
 struct ahc_initiator_tinfo* FUNC_1 (struct ahc_softc*,int ,int ,int ,struct ahc_tmode_tstate**) ;

__attribute__((used)) static void
FUNC_2(struct ahc_softc *VAR_15, int VAR_16, char VAR_17,
        struct ccb_trans_settings *VAR_18)
{
 struct ahc_devinfo VAR_19;
 struct ccb_trans_settings_scsi *VAR_20;
 struct ccb_trans_settings_spi *VAR_21;
 struct ahc_initiator_tinfo *VAR_22;
 struct ahc_tmode_tstate *VAR_23;
 struct ahc_transinfo *VAR_24;

 VAR_20 = &VAR_18->proto_specific.scsi;
 VAR_21 = &VAR_18->xport_specific.spi;
 FUNC_0(&VAR_19, VAR_16,
       VAR_18->ccb_h.target_id,
       VAR_18->ccb_h.target_lun,
       VAR_17, VAR_13);
 VAR_22 = FUNC_1(VAR_15, VAR_19.channel,
     VAR_19.our_scsiid,
     VAR_19.target, &VAR_23);

 if (VAR_18->type == VAR_10)
  VAR_24 = &VAR_22->curr;
 else
  VAR_24 = &VAR_22->user;

 VAR_20->flags &= ~VAR_2;
 VAR_21->flags &= ~VAR_4;
 if (VAR_18->type == VAR_11) {
  if ((VAR_15->user_discenable & VAR_19.target_mask) != 0)
   VAR_21->flags |= VAR_4;

  if ((VAR_15->user_tagenable & VAR_19.target_mask) != 0)
   VAR_20->flags |= VAR_2;
 } else {
  if ((VAR_23->discenable & VAR_19.target_mask) != 0)
   VAR_21->flags |= VAR_4;

  if ((VAR_23->tagenable & VAR_19.target_mask) != 0)
   VAR_20->flags |= VAR_2;
 }
 VAR_18->protocol_version = VAR_24->protocol_version;
 VAR_18->transport_version = VAR_24->transport_version;

 VAR_21->sync_period = VAR_24->period;
 VAR_21->sync_offset = VAR_24->offset;
 VAR_21->bus_width = VAR_24->width;
 VAR_21->ppr_options = VAR_24->ppr_options;

 VAR_18->protocol = VAR_12;
 VAR_18->transport = VAR_14;
 VAR_21->valid = VAR_9
     | VAR_8
     | VAR_5
     | VAR_7;

 if (VAR_18->ccb_h.target_lun != VAR_0) {
  VAR_20->valid = VAR_3;
  VAR_21->valid |= VAR_6;
 } else {
  VAR_20->valid = 0;
 }

 VAR_18->ccb_h.status = VAR_1;
}
