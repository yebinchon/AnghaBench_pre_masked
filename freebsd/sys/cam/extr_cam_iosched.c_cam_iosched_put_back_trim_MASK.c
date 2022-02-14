
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending; int total; int queued; } ;
struct cam_iosched_softc {scalar_t__ queued_trims; TYPE_1__ trim_stats; int last_trim_tick; int trim_queue; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *,struct bio*) ;
 int VAR_0 ;

void
FUNC_1(struct cam_iosched_softc *VAR_1, struct bio *VAR_2)
{
 FUNC_0(&VAR_1->trim_queue, VAR_2);
 if (VAR_1->queued_trims == 0)
  VAR_1->last_trim_tick = VAR_0;
 VAR_1->queued_trims++;





}
