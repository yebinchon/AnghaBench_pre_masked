
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct ccb_trans_settings_scsi {int valid; int flags; } ;
struct ccb_trans_settings_ata {int valid; int flags; } ;
struct TYPE_6__ {struct ccb_trans_settings_scsi scsi; struct ccb_trans_settings_ata ata; } ;
struct TYPE_5__ {TYPE_1__* path; } ;
struct ccb_trans_settings {scalar_t__ type; int transport_version; int transport; TYPE_3__ proto_specific; int protocol; int protocol_version; TYPE_2__ ccb_h; } ;
struct cam_ed {int flags; int inq_flags; int transport_version; int transport; int protocol_version; int protocol; } ;
struct TYPE_4__ {struct cam_ed* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (union ccb*) ;

__attribute__((used)) static void
FUNC_1(struct ccb_trans_settings *VAR_13)
{
 struct ccb_trans_settings_ata *VAR_14;
 struct ccb_trans_settings_scsi *VAR_15;
 struct cam_ed *VAR_16;

 VAR_16 = VAR_13->ccb_h.path->device;
 FUNC_0((union ccb *)VAR_13);

 if (VAR_13->protocol == VAR_8 ||
     VAR_13->protocol == VAR_9) {
  VAR_13->protocol = VAR_16->protocol;
  VAR_13->protocol_version = VAR_16->protocol_version;
 }

 if (VAR_13->protocol == VAR_6) {
  VAR_14 = &VAR_13->proto_specific.ata;
  if ((VAR_14->valid & VAR_2) == 0) {
   VAR_14->valid |= VAR_2;
   if (VAR_13->type == VAR_5 ||
       (VAR_16->flags & VAR_0) != 0 ||
       (VAR_16->inq_flags & VAR_10) != 0)
    VAR_14->flags |= VAR_1;
  }
 }
 if (VAR_13->protocol == VAR_7) {
  VAR_15 = &VAR_13->proto_specific.scsi;
  if ((VAR_15->valid & VAR_4) == 0) {
   VAR_15->valid |= VAR_4;
   if (VAR_13->type == VAR_5 ||
       (VAR_16->flags & VAR_0) != 0 ||
       (VAR_16->inq_flags & VAR_10) != 0)
    VAR_15->flags |= VAR_3;
  }
 }

 if (VAR_13->transport == VAR_11 ||
     VAR_13->transport == VAR_12) {
  VAR_13->transport = VAR_16->transport;
  VAR_13->transport_version = VAR_16->transport_version;
 }
}
