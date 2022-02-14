
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct scsi_inquiry_data {int dummy; } ;
struct ccb_trans_settings_scsi {int flags; int valid; } ;
struct ccb_trans_settings_ata {int flags; int valid; } ;
struct TYPE_4__ {struct ccb_trans_settings_scsi scsi; struct ccb_trans_settings_ata ata; } ;
struct TYPE_3__ {int status; } ;
struct ccb_trans_settings {scalar_t__ protocol; scalar_t__ protocol_version; scalar_t__ transport; scalar_t__ transport_version; scalar_t__ type; TYPE_2__ proto_specific; TYPE_1__ ccb_h; } ;
struct ccb_pathinq {int hba_inquiry; } ;
struct cam_path {struct cam_ed* device; } ;
struct ata_params {int satacapabilities; } ;
struct cam_ed {scalar_t__ protocol; scalar_t__ protocol_version; scalar_t__ transport; scalar_t__ transport_version; int queue_flags; scalar_t__ mintags; int flags; int inq_flags; int tag_delay_count; struct scsi_inquiry_data inq_data; struct ata_params ident_data; } ;


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
 scalar_t__ FUNC_0 (struct scsi_inquiry_data*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (union ccb*) ;
 int FUNC_3 (struct ccb_pathinq*,struct cam_path*) ;
 int FUNC_4 (struct cam_path*,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct cam_path*) ;

__attribute__((used)) static void
FUNC_6(struct ccb_trans_settings *VAR_24, struct cam_path *VAR_25,
      int VAR_26)
{
 struct ccb_pathinq VAR_27;
 struct ccb_trans_settings_ata *VAR_28;
 struct ccb_trans_settings_scsi *VAR_29;
 struct ata_params *VAR_30;
 struct scsi_inquiry_data *VAR_31;
 struct cam_ed *VAR_32;

 if (VAR_25 == ((void*)0) || (VAR_32 = VAR_25->device) == ((void*)0)) {
  VAR_24->ccb_h.status = VAR_2;
  FUNC_2((union ccb *)VAR_24);
  return;
 }

 if (VAR_24->protocol == VAR_13
  || VAR_24->protocol == VAR_14) {
  VAR_24->protocol = VAR_32->protocol;
  VAR_24->protocol_version = VAR_32->protocol_version;
 }

 if (VAR_24->protocol_version == VAR_15
  || VAR_24->protocol_version == VAR_16)
  VAR_24->protocol_version = VAR_32->protocol_version;

 if (VAR_24->protocol != VAR_32->protocol) {
  FUNC_4(VAR_25, "Uninitialized Protocol %x:%x?\n",
         VAR_24->protocol, VAR_32->protocol);
  VAR_24->protocol = VAR_32->protocol;
 }

 if (VAR_24->protocol_version > VAR_32->protocol_version) {
  if (VAR_23) {
   FUNC_4(VAR_25, "Down reving Protocol "
       "Version from %d to %d?\n", VAR_24->protocol_version,
       VAR_32->protocol_version);
  }
  VAR_24->protocol_version = VAR_32->protocol_version;
 }

 if (VAR_24->transport == VAR_19
  || VAR_24->transport == VAR_20) {
  VAR_24->transport = VAR_32->transport;
  VAR_24->transport_version = VAR_32->transport_version;
 }

 if (VAR_24->transport_version == VAR_21
  || VAR_24->transport_version == VAR_22)
  VAR_24->transport_version = VAR_32->transport_version;

 if (VAR_24->transport != VAR_32->transport) {
  FUNC_4(VAR_25, "Uninitialized Transport %x:%x?\n",
      VAR_24->transport, VAR_32->transport);
  VAR_24->transport = VAR_32->transport;
 }

 if (VAR_24->transport_version > VAR_32->transport_version) {
  if (VAR_23) {
   FUNC_4(VAR_25, "Down reving Transport "
       "Version from %d to %d?\n", VAR_24->transport_version,
       VAR_32->transport_version);
  }
  VAR_24->transport_version = VAR_32->transport_version;
 }

 VAR_30 = &VAR_32->ident_data;
 VAR_31 = &VAR_32->inq_data;
 if (VAR_24->protocol == VAR_11)
  VAR_28 = &VAR_24->proto_specific.ata;
 else
  VAR_28 = ((void*)0);
 if (VAR_24->protocol == VAR_12)
  VAR_29 = &VAR_24->proto_specific.scsi;
 else
  VAR_29 = ((void*)0);
 FUNC_3(&VAR_27, VAR_25);


 if ((VAR_27.hba_inquiry & VAR_10) == 0
  || (VAR_28 && (VAR_30->satacapabilities & VAR_0) == 0)
  || (VAR_29 && (FUNC_0(VAR_31)) == 0)
  || (VAR_32->queue_flags & VAR_17) != 0
  || (VAR_32->mintags == 0)) {




  if (VAR_28)
   VAR_28->flags &= ~VAR_4;
  if (VAR_29)
   VAR_29->flags &= ~VAR_6;
 }


 if (VAR_24->type == VAR_8 &&
     ((VAR_28 && (VAR_28->valid & VAR_5) != 0) ||
      (VAR_29 && (VAR_29->valid & VAR_7) != 0))) {
  int VAR_33, VAR_34 = 0;

  VAR_33 = ((VAR_32->flags & VAR_1) != 0 ||
   (VAR_32->inq_flags & VAR_18) != 0);
  if (VAR_28)
   VAR_34 = (VAR_28->flags & VAR_4) != 0;
  if (VAR_29)
   VAR_34 = (VAR_29->flags & VAR_6) != 0;

  if (VAR_34 && !VAR_33) {







   VAR_32->tag_delay_count = VAR_3;
   VAR_32->flags |= VAR_1;
  } else if (VAR_33 && !VAR_34)
   FUNC_5(VAR_25);
 }

 if (VAR_26 == VAR_9)
  FUNC_1((union ccb *)VAR_24);
}
