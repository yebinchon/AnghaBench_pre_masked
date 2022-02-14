
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int status; int path; scalar_t__ ccb_bp; } ;
struct TYPE_4__ {int ccb_state; } ;
struct ccb_scsiio {int resid; TYPE_1__ ccb_h; } ;
union ccb {TYPE_3__ ccb_h; struct ccb_scsiio csio; } ;
struct pt_softc {int device_stats; int bio_queue; int flags; } ;
struct cam_periph {int path; scalar_t__ softc; } ;
struct bio {int bio_error; int bio_flags; int bio_resid; int bio_bcount; } ;
struct TYPE_5__ {int le; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_3__*,int ) ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct bio*,int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 TYPE_2__ VAR_12 ;
 int FUNC_5 (union ccb*,int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static void
FUNC_8(struct cam_periph *VAR_13, union ccb *VAR_14)
{
 struct pt_softc *VAR_15;
 struct ccb_scsiio *VAR_16;

 VAR_15 = (struct pt_softc *)VAR_13->softc;

 FUNC_0(VAR_13->path, VAR_1, ("ptdone\n"));

 VAR_16 = &VAR_14->csio;
 switch (VAR_16->ccb_h.ccb_state) {
 case 129:
 case 128:
 {
  struct bio *VAR_17;

  VAR_17 = (struct bio *)VAR_14->ccb_h.ccb_bp;
  if ((VAR_14->ccb_h.status & VAR_5) != VAR_3) {
   int VAR_18;
   int VAR_19;

   if ((VAR_16->ccb_h.ccb_state & VAR_9) != 0)
    VAR_19 = VAR_11;
   else
    VAR_19 = 0;

   VAR_18 = FUNC_5(VAR_14, VAR_4, VAR_19);
   if (VAR_18 == VAR_8) {




    return;
   }
   if (VAR_18 != 0) {
    if (VAR_18 == VAR_7) {




     FUNC_6(VAR_13->path,
         "Invalidating device\n");
     VAR_15->flags |= VAR_10;
    }






    FUNC_3(&VAR_15->bio_queue, ((void*)0), VAR_6);
    VAR_17->bio_error = VAR_18;
    VAR_17->bio_resid = VAR_17->bio_bcount;
    VAR_17->bio_flags |= VAR_0;
   } else {
    VAR_17->bio_resid = VAR_16->resid;
    VAR_17->bio_error = 0;
    if (VAR_17->bio_resid != 0) {

     VAR_17->bio_flags |= VAR_0;
    }
   }
   if ((VAR_14->ccb_h.status & VAR_2) != 0)
    FUNC_4(VAR_14->ccb_h.path,
                       0,
                    0,
                  0,
                        0);
  } else {
   VAR_17->bio_resid = VAR_16->resid;
   if (VAR_17->bio_resid != 0)
    VAR_17->bio_flags |= VAR_0;
  }





  FUNC_1(&VAR_14->ccb_h, VAR_12.le);

  FUNC_2(VAR_17, VAR_15->device_stats, 0);
  break;
 }
 }
 FUNC_7(VAR_14);
}
