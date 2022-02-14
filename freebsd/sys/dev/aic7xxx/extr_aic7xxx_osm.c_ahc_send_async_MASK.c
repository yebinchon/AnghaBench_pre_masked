
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int ;
struct ccb_trans_settings_scsi {int valid; int flags; } ;
struct TYPE_4__ {void* target_lun; void* target_id; struct cam_path* path; } ;
struct TYPE_3__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings {TYPE_2__ ccb_h; TYPE_1__ proto_specific; int type; } ;
struct cam_path {int dummy; } ;
struct ahc_softc {int our_id_b; int our_id; } ;
typedef int ahc_queue_alg ;
typedef int ac_code ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahc_softc*,char,void*,void*,struct cam_path**) ;
 int FUNC_1 (struct ahc_softc*,int ,char,struct ccb_trans_settings*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,struct cam_path*,void*) ;
 int FUNC_4 (struct cam_path*) ;

void
FUNC_5(struct ahc_softc *VAR_5, char VAR_6, u_int VAR_7,
  u_int VAR_8, ac_code VAR_9, void *VAR_10)
{
 struct ccb_trans_settings VAR_11;
 struct cam_path *VAR_12;
 void *VAR_13;
 int VAR_14;

 VAR_13 = ((void*)0);
 VAR_14 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_12);

 if (VAR_14 != VAR_1)
  return;

 switch (VAR_9) {
 case 128:
 {
  struct ccb_trans_settings_scsi *VAR_15;

  VAR_11.type = VAR_4;
  VAR_15 = &VAR_11.proto_specific.scsi;
  VAR_11.ccb_h.path = VAR_12;
  VAR_11.ccb_h.target_id = VAR_7;
  VAR_11.ccb_h.target_lun = VAR_8;
  FUNC_1(VAR_5, VAR_6 == 'A' ? VAR_5->our_id
         : VAR_5->our_id_b,
          VAR_6, &VAR_11);
  VAR_13 = &VAR_11;
  VAR_15->valid &= ~VAR_3;
  VAR_15->flags &= ~VAR_2;
  if (VAR_10 == ((void*)0))
   break;
  if (*((ahc_queue_alg *)VAR_10) == VAR_0)
   VAR_15->flags |= ~VAR_2;
  VAR_15->valid |= VAR_3;
  break;
 }
 case 129:
 case 130:
  break;
 default:
  FUNC_2("ahc_send_async: Unexpected async event");
 }
 FUNC_3(VAR_9, VAR_12, VAR_13);
 FUNC_4(VAR_12);
}
