
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_iosched_softc {scalar_t__ trim_goal; scalar_t__ queued_trims; scalar_t__ trim_ticks; scalar_t__ last_trim_tick; int flags; int trim_queue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_1(struct cam_iosched_softc *VAR_2)
{






 if (VAR_2->trim_goal > 0) {
  if (VAR_2->queued_trims >= VAR_2->trim_goal)
   return 1;
  if (VAR_2->queued_trims > 0 &&
      VAR_2->trim_ticks > 0 &&
      VAR_1 - VAR_2->last_trim_tick > VAR_2->trim_ticks)
   return 1;
  return 0;
 }

 return !(VAR_2->flags & VAR_0) &&
     FUNC_0(&VAR_2->trim_queue);
}
