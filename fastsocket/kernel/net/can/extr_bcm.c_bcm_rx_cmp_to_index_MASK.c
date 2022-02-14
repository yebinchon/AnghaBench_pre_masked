
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct can_frame {int can_dlc; } ;
struct bcm_op {int flags; struct can_frame const* last_frames; struct can_frame const* frames; } ;


 int VAR_0 ;
 int FUNC_0 (struct can_frame const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bcm_op*,struct can_frame const*,struct can_frame const*) ;

__attribute__((used)) static void FUNC_2(struct bcm_op *VAR_3, unsigned int VAR_4,
    const struct can_frame *VAR_5)
{





 if (!(VAR_3->last_frames[VAR_4].can_dlc & VAR_2)) {

  FUNC_1(VAR_3, &VAR_3->last_frames[VAR_4], VAR_5);
  return;
 }



 if ((FUNC_0(&VAR_3->frames[VAR_4]) & FUNC_0(VAR_5)) !=
     (FUNC_0(&VAR_3->frames[VAR_4]) & FUNC_0(&VAR_3->last_frames[VAR_4]))) {
  FUNC_1(VAR_3, &VAR_3->last_frames[VAR_4], VAR_5);
  return;
 }

 if (VAR_3->flags & VAR_1) {

  if (VAR_5->can_dlc != (VAR_3->last_frames[VAR_4].can_dlc &
     VAR_0)) {
   FUNC_1(VAR_3, &VAR_3->last_frames[VAR_4],
            VAR_5);
   return;
  }
 }
}
