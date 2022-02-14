
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct sg_rdwr* ccb_rdwr; } ;
struct TYPE_3__ {int ccb_type; int flags; } ;
struct ccb_scsiio {int tag_action; TYPE_1__ ccb_h; int dxfer_len; } ;
union ccb {TYPE_2__ ccb_h; struct ccb_scsiio csio; } ;
struct sg_softc {int device_stats; } ;
struct sg_rdwr {int state; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int ,int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sg_rdwr*) ;

__attribute__((used)) static void
FUNC_3(struct cam_periph *VAR_7, union ccb *VAR_8)
{
 struct sg_softc *VAR_9;
 struct ccb_scsiio *VAR_10;

 VAR_9 = (struct sg_softc *)VAR_7->softc;
 VAR_10 = &VAR_8->csio;
 switch (VAR_10->ccb_h.ccb_type) {
 case 128:
 {
  struct sg_rdwr *VAR_11;
  int VAR_12;

  FUNC_0(VAR_9->device_stats,
     VAR_10->dxfer_len,
     VAR_10->tag_action & 0xf,
     ((VAR_10->ccb_h.flags & VAR_0) ==
     VAR_1) ? VAR_3 :
     (VAR_10->ccb_h.flags & VAR_2) ?
     VAR_5 : VAR_4,
     ((void*)0), ((void*)0));

  VAR_11 = VAR_8->ccb_h.ccb_rdwr;
  VAR_12 = VAR_11->state;
  VAR_11->state = VAR_6;
  FUNC_2(VAR_11);
  break;
 }
 default:
  FUNC_1("unknown sg CCB type");
 }
}
