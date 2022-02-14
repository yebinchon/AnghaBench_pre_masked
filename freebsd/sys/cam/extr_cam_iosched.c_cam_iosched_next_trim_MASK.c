
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending; int total; int queued; } ;
struct cam_iosched_softc {TYPE_1__ trim_stats; int last_trim_tick; int queued_trims; int trim_queue; } ;
struct bio {int dummy; } ;


 struct bio* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bio*) ;
 int VAR_0 ;

struct bio *
FUNC_2(struct cam_iosched_softc *VAR_1)
{
 struct bio *VAR_2;

 VAR_2 = FUNC_0(&VAR_1->trim_queue);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_1(&VAR_1->trim_queue, VAR_2);
 VAR_1->queued_trims--;
 VAR_1->last_trim_tick = VAR_0;





 return VAR_2;
}
