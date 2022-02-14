
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_int ;
struct scsi_inquiry_data {int flags; int spi3data; } ;
struct ccb_trans_settings_spi {int valid; int bus_width; int flags; int ppr_options; scalar_t__ sync_offset; scalar_t__ sync_period; } ;
struct ccb_trans_settings_scsi {int flags; int valid; } ;
struct TYPE_7__ {struct ccb_trans_settings_spi spi; } ;
struct TYPE_6__ {struct ccb_trans_settings_scsi scsi; } ;
struct TYPE_10__ {int func_code; int status; } ;
struct ccb_trans_settings {scalar_t__ protocol; scalar_t__ protocol_version; scalar_t__ transport; scalar_t__ transport_version; scalar_t__ type; TYPE_2__ xport_specific; TYPE_1__ proto_specific; TYPE_5__ ccb_h; } ;
struct TYPE_8__ {int ppr_options; } ;
struct TYPE_9__ {TYPE_3__ spi; } ;
struct ccb_pathinq {int hba_inquiry; TYPE_4__ xport_specific; TYPE_5__ ccb_h; } ;
struct cam_path {struct cam_ed* device; } ;
struct cam_ed {scalar_t__ protocol; scalar_t__ protocol_version; scalar_t__ transport; scalar_t__ transport_version; int queue_flags; scalar_t__ mintags; int flags; int inq_flags; int tag_delay_count; struct scsi_inquiry_data inq_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct scsi_inquiry_data*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;



 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ FUNC_1 (union ccb*) ;
 int FUNC_2 (struct cam_path*) ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (struct cam_path*,char*,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_5__*,struct cam_path*,int ) ;
 int FUNC_8 (struct cam_path*) ;

__attribute__((used)) static void
FUNC_9(struct ccb_trans_settings *VAR_46, struct cam_path *VAR_47,
      int VAR_48)
{
 struct ccb_pathinq VAR_49;
 struct ccb_trans_settings VAR_50;
 struct ccb_trans_settings_scsi *VAR_51;
 struct ccb_trans_settings_scsi *VAR_52;
 struct scsi_inquiry_data *VAR_53;
 struct cam_ed *VAR_54;

 if (VAR_47 == ((void*)0) || (VAR_54 = VAR_47->device) == ((void*)0)) {
  VAR_46->ccb_h.status = VAR_2;
  FUNC_5((union ccb *)VAR_46);
  return;
 }

 if (VAR_46->protocol == VAR_25
  || VAR_46->protocol == VAR_26) {
  VAR_46->protocol = VAR_54->protocol;
  VAR_46->protocol_version = VAR_54->protocol_version;
 }

 if (VAR_46->protocol_version == VAR_27
  || VAR_46->protocol_version == VAR_28)
  VAR_46->protocol_version = VAR_54->protocol_version;

 if (VAR_46->protocol != VAR_54->protocol) {
  FUNC_6(VAR_47, "Uninitialized Protocol %x:%x?\n",
         VAR_46->protocol, VAR_54->protocol);
  VAR_46->protocol = VAR_54->protocol;
 }

 if (VAR_46->protocol_version > VAR_54->protocol_version) {
  if (VAR_45) {
   FUNC_6(VAR_47, "Down reving Protocol "
       "Version from %d to %d?\n", VAR_46->protocol_version,
       VAR_54->protocol_version);
  }
  VAR_46->protocol_version = VAR_54->protocol_version;
 }

 if (VAR_46->transport == VAR_39
  || VAR_46->transport == VAR_40) {
  VAR_46->transport = VAR_54->transport;
  VAR_46->transport_version = VAR_54->transport_version;
 }

 if (VAR_46->transport_version == VAR_41
  || VAR_46->transport_version == VAR_42)
  VAR_46->transport_version = VAR_54->transport_version;

 if (VAR_46->transport != VAR_54->transport) {
  FUNC_6(VAR_47, "Uninitialized Transport %x:%x?\n",
      VAR_46->transport, VAR_54->transport);
  VAR_46->transport = VAR_54->transport;
 }

 if (VAR_46->transport_version > VAR_54->transport_version) {
  if (VAR_45) {
   FUNC_6(VAR_47, "Down reving Transport "
       "Version from %d to %d?\n", VAR_46->transport_version,
       VAR_54->transport_version);
  }
  VAR_46->transport_version = VAR_54->transport_version;
 }






 if (VAR_46->protocol != VAR_24) {
  if (VAR_48 == VAR_16)
   FUNC_4((union ccb *)VAR_46);
  return;
 }

 VAR_53 = &VAR_54->inq_data;
 VAR_51 = &VAR_46->proto_specific.scsi;
 FUNC_7(&VAR_49.ccb_h, VAR_47, VAR_3);
 VAR_49.ccb_h.func_code = VAR_44;
 FUNC_3((union ccb *)&VAR_49);


 if ((VAR_49.hba_inquiry & VAR_21) == 0
  || (FUNC_0(VAR_53)) == 0
  || (VAR_54->queue_flags & VAR_29) != 0
  || (VAR_54->mintags == 0)) {




  VAR_51->flags &= ~VAR_6;
 }

 if (VAR_48 == VAR_16) {




  FUNC_7(&VAR_50.ccb_h, VAR_47, VAR_3);
  VAR_50.ccb_h.func_code = VAR_43;
  VAR_50.type = VAR_46->type;
  FUNC_3((union ccb *)&VAR_50);
  if (FUNC_1((union ccb *)&VAR_50) != VAR_4) {
   return;
  }
  VAR_52 = &VAR_50.proto_specific.scsi;
  if ((VAR_51->valid & VAR_7) == 0) {
   VAR_51->flags &= ~VAR_6;
   VAR_51->flags |= VAR_52->flags & VAR_6;
  }
  if ((VAR_52->valid & VAR_7) == 0)
   VAR_51->flags &= ~VAR_6;
 }


 if (VAR_46->transport == VAR_38 && VAR_48 == VAR_16) {
  u_int VAR_55;
  struct ccb_trans_settings_spi *VAR_56;
  struct ccb_trans_settings_spi *VAR_57;

  VAR_56 = &VAR_46->xport_specific.spi;

  VAR_57 = &VAR_50.xport_specific.spi;


  if ((VAR_56->valid & VAR_13) == 0)
   VAR_56->sync_period = VAR_57->sync_period;
  if ((VAR_57->valid & VAR_13) == 0)
   VAR_56->sync_period = 0;
  if ((VAR_56->valid & VAR_12) == 0)
   VAR_56->sync_offset = VAR_57->sync_offset;
  if ((VAR_57->valid & VAR_12) == 0)
   VAR_56->sync_offset = 0;
  if ((VAR_56->valid & VAR_11) == 0)
   VAR_56->ppr_options = VAR_57->ppr_options;
  if ((VAR_57->valid & VAR_11) == 0)
   VAR_56->ppr_options = 0;
  if ((VAR_56->valid & VAR_9) == 0)
   VAR_56->bus_width = VAR_57->bus_width;
  if ((VAR_57->valid & VAR_9) == 0)
   VAR_56->bus_width = 0;
  if ((VAR_56->valid & VAR_10) == 0) {
   VAR_56->flags &= ~VAR_8;
   VAR_56->flags |= VAR_57->flags & VAR_8;
  }
  if ((VAR_57->valid & VAR_10) == 0)
   VAR_56->flags &= ~VAR_8;
  if (((VAR_54->flags & VAR_0) != 0
    && (VAR_53->flags & VAR_34) == 0
    && VAR_46->type == VAR_14)
   || ((VAR_49.hba_inquiry & VAR_20) == 0)) {

   VAR_56->sync_period = 0;
   VAR_56->sync_offset = 0;
  }

  switch (VAR_56->bus_width) {
  case 129:
   if (((VAR_54->flags & VAR_0) == 0
     || (VAR_53->flags & VAR_36) != 0
     || VAR_46->type == VAR_15)
    && (VAR_49.hba_inquiry & VAR_23) != 0)
    break;

  case 130:
   if (((VAR_54->flags & VAR_0) == 0
     || (VAR_53->flags & VAR_35) != 0
     || VAR_46->type == VAR_15)
    && (VAR_49.hba_inquiry & VAR_22) != 0) {
    VAR_56->bus_width = 130;
    break;
   }

  default:
  case 128:

   VAR_56->bus_width = 128;
   break;
  }

  VAR_55 = VAR_49.xport_specific.spi.ppr_options;
  if ((VAR_54->flags & VAR_0) != 0
   && VAR_46->type == VAR_14)
   VAR_55 &= VAR_53->spi3data;

  if ((VAR_55 & VAR_31) == 0)
   VAR_56->ppr_options &= ~VAR_17;

  if ((VAR_55 & VAR_32) == 0)
   VAR_56->ppr_options &= ~VAR_18;

  if ((VAR_55 & VAR_33) == 0)
   VAR_56->ppr_options &= ~VAR_19;


  if (VAR_56->bus_width == 0)
   VAR_56->ppr_options = 0;

  if ((VAR_56->valid & VAR_10)
   && ((VAR_56->flags & VAR_8) == 0)) {



   VAR_51->flags &= ~VAR_6;
   VAR_51->valid |= VAR_7;
  }







  if (VAR_46->type == VAR_14
   && (VAR_54->inq_flags & VAR_30) != 0
   && (VAR_51->flags & VAR_6) != 0
   && (VAR_56->flags & (VAR_13|
       VAR_12|
       VAR_9)) != 0)
   FUNC_2(VAR_47);
 }

 if (VAR_46->type == VAR_14
  && (VAR_51->valid & VAR_7) != 0) {
  int VAR_58;
  if ((VAR_54->flags & VAR_1) != 0
   || (VAR_54->inq_flags & VAR_30) != 0)
   VAR_58 = VAR_37;
  else
   VAR_58 = VAR_16;

  if (((VAR_51->flags & VAR_6) != 0
    && VAR_58 == VAR_16)
   || ((VAR_51->flags & VAR_6) == 0
    && VAR_58 == VAR_37)) {

   if ((VAR_51->flags & VAR_6) != 0) {







    VAR_54->tag_delay_count = VAR_5;
    VAR_54->flags |= VAR_1;
   } else {
    FUNC_8(VAR_47);
   }
  }
 }
 if (VAR_48 == VAR_16)
  FUNC_4((union ccb *)VAR_46);
}
