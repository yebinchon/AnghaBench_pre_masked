
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct bio* ccb_bp; int ccb_state; } ;
union ccb {TYPE_2__ ccb_h; int csio; } ;
struct pt_softc {int bio_queue; int pending_ccbs; int io_timeout; int device_stats; } ;
struct cam_periph {int path; scalar_t__ softc; } ;
struct bio {scalar_t__ bio_cmd; int bio_data; int bio_bcount; } ;
struct TYPE_3__ {int le; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bio* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct bio*) ;
 int FUNC_4 (int ,struct bio*) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,int,int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_9(struct cam_periph *VAR_8, union ccb *VAR_9)
{
 struct pt_softc *VAR_10;
 struct bio *VAR_11;

 VAR_10 = (struct pt_softc *)VAR_8->softc;

 FUNC_0(VAR_8->path, VAR_1, ("ptstart\n"));




 VAR_11 = FUNC_2(&VAR_10->bio_queue);
 if (VAR_11 == ((void*)0)) {
  FUNC_7(VAR_9);
 } else {
  FUNC_3(&VAR_10->bio_queue, VAR_11);

  FUNC_4(VAR_10->device_stats, VAR_11);

  FUNC_5(&VAR_9->csio,
                 4,
      VAR_7,
      VAR_3,
      VAR_11->bio_cmd == VAR_0,
               0,
      VAR_11->bio_bcount,
      VAR_11->bio_data,
                   VAR_5,
                 VAR_10->io_timeout);

  VAR_9->ccb_h.ccb_state = VAR_4;





  FUNC_1(&VAR_10->pending_ccbs, &VAR_9->ccb_h,
     VAR_6.le);

  VAR_9->ccb_h.ccb_bp = VAR_11;
  VAR_11 = FUNC_2(&VAR_10->bio_queue);

  FUNC_6(VAR_9);

  if (VAR_11 != ((void*)0)) {

   FUNC_8(VAR_8, VAR_2);
  }
 }
}
