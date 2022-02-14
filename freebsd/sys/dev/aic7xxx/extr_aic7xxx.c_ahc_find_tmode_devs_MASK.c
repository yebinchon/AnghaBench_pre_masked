
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_id; size_t target_lun; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int u_int ;
struct cam_sim {int dummy; } ;
struct ahc_tmode_tstate {struct ahc_tmode_lstate** enabled_luns; } ;
struct ahc_tmode_lstate {int dummy; } ;
struct ahc_softc {int features; struct ahc_tmode_tstate** enabled_targets; struct ahc_tmode_lstate* black_hole; } ;
typedef int cam_status ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

cam_status
FUNC_0(struct ahc_softc *VAR_10, struct cam_sim *VAR_11, union ccb *VAR_12,
      struct ahc_tmode_tstate **VAR_13,
      struct ahc_tmode_lstate **VAR_14,
      int VAR_15)
{

 if ((VAR_10->features & VAR_1) == 0)
  return (VAR_7);





 if (VAR_12->ccb_h.target_id == VAR_8
  && VAR_12->ccb_h.target_lun == VAR_4) {
  *VAR_13 = ((void*)0);
  *VAR_14 = VAR_10->black_hole;
 } else {
  u_int VAR_16;

  VAR_16 = (VAR_10->features & VAR_2) ? 15 : 7;
  if (VAR_12->ccb_h.target_id > VAR_16)
   return (VAR_9);

  if (VAR_12->ccb_h.target_lun >= VAR_0)
   return (VAR_3);

  *VAR_13 = VAR_10->enabled_targets[VAR_12->ccb_h.target_id];
  *VAR_14 = ((void*)0);
  if (*VAR_13 != ((void*)0))
   *VAR_14 =
       (*VAR_13)->enabled_luns[VAR_12->ccb_h.target_lun];
 }

 if (VAR_15 != 0 && *VAR_14 == ((void*)0))
  return (VAR_5);

 return (VAR_6);
}
