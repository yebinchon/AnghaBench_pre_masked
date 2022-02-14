
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; } ;
struct ccb_trans_settings_scsi {int flags; int valid; } ;
struct TYPE_4__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings {scalar_t__ transport_version; int transport; int protocol_version; int protocol; TYPE_2__ proto_specific; } ;
union ccb {TYPE_1__ ccb_h; struct ccb_trans_settings cts; } ;
struct vtscsi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (union ccb*) ;

__attribute__((used)) static void
FUNC_1(struct vtscsi_softc *VAR_6, union ccb *VAR_7)
{
 struct ccb_trans_settings *VAR_8;
 struct ccb_trans_settings_scsi *VAR_9;

 VAR_8 = &VAR_7->cts;
 VAR_9 = &VAR_8->proto_specific.scsi;

 VAR_8->protocol = VAR_3;
 VAR_8->protocol_version = VAR_4;
 VAR_8->transport = VAR_5;
 VAR_8->transport_version = 0;

 VAR_9->valid = VAR_2;
 VAR_9->flags = VAR_1;

 VAR_7->ccb_h.status = VAR_0;
 FUNC_0(VAR_7);
}
