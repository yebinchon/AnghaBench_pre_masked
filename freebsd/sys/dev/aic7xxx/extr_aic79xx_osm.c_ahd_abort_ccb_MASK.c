
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccb_hdr {int func_code; void* status; int path; } ;
struct TYPE_3__ {union ccb* abort_ccb; } ;
union ccb {struct ccb_hdr ccb_h; TYPE_1__ cab; } ;
struct ccb_hdr_slist {int dummy; } ;
struct cam_sim {int dummy; } ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_tmode_lstate {struct ccb_hdr_slist immed_notifies; struct ccb_hdr_slist accept_tios; } ;
struct ahd_softc {int dummy; } ;
typedef void* cam_status ;
struct TYPE_4__ {int sle; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 struct ccb_hdr* FUNC_0 (struct ccb_hdr_slist*) ;
 struct ccb_hdr* FUNC_1 (struct ccb_hdr*,int ) ;
 int FUNC_2 (struct ccb_hdr_slist*,int ) ;
 int VAR_5 ;




 void* FUNC_3 (struct ahd_softc*,struct cam_sim*,union ccb*,struct ahd_tmode_tstate**,struct ahd_tmode_lstate**,int ) ;
 int FUNC_4 (char*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct ahd_softc *VAR_7, struct cam_sim *VAR_8, union ccb *VAR_9)
{
 union ccb *VAR_10;

 VAR_10 = VAR_9->cab.abort_ccb;
 switch (VAR_10->ccb_h.func_code) {
 case 128:

  VAR_9->ccb_h.status = VAR_4;
  break;
 default:
  VAR_9->ccb_h.status = VAR_3;
  break;
 }
 FUNC_5(VAR_9);
}
