
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int queued; int in; } ;
struct TYPE_5__ {int queued; int in; } ;
struct TYPE_4__ {int queued; int in; } ;
struct cam_iosched_softc {scalar_t__ trim_ticks; scalar_t__ queued_trims; TYPE_3__ write_stats; TYPE_2__ read_stats; int bio_queue; int write_queue; TYPE_1__ trim_stats; void* last_trim_tick; int trim_queue; } ;
struct bio {scalar_t__ bio_cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (int *,struct bio*) ;
 scalar_t__ FUNC_2 (struct cam_iosched_softc*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,struct bio*,scalar_t__) ;
 void* VAR_6 ;

void
FUNC_4(struct cam_iosched_softc *VAR_7, struct bio *VAR_8)
{






 if (VAR_8->bio_cmd == VAR_1 && VAR_7->trim_ticks > 0)
  VAR_7->last_trim_tick = VAR_6 - VAR_7->trim_ticks - 1;





 if (VAR_8->bio_cmd == VAR_0) {
  FUNC_1(&VAR_7->trim_queue, VAR_8);
  if (VAR_7->queued_trims == 0)
   VAR_7->last_trim_tick = VAR_6;
  VAR_7->queued_trims++;




 }
 else {
  if (FUNC_2(VAR_7))
   FUNC_0(&VAR_7->bio_queue, VAR_8);
  else
   FUNC_1(&VAR_7->bio_queue, VAR_8);
 }
}
