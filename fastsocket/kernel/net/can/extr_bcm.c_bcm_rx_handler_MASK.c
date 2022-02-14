
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; int tstamp; scalar_t__ data; } ;
struct can_frame {scalar_t__ can_id; } ;
struct bcm_op {scalar_t__ can_id; int flags; int nframes; struct can_frame const* frames; int * last_frames; int frames_abs; int rx_ifindex; int rx_stamp; int timer; } ;
struct TYPE_2__ {int ifindex; } ;


 int FUNC_0 (struct can_frame const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bcm_op*) ;
 int FUNC_2 (struct bcm_op*,unsigned int,struct can_frame const*) ;
 int FUNC_3 (struct bcm_op*) ;
 int FUNC_4 (struct bcm_op*,int *,struct can_frame const*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_2, void *VAR_3)
{
 struct bcm_op *VAR_4 = (struct bcm_op *)VAR_3;
 const struct can_frame *VAR_5 = (struct can_frame *)VAR_2->data;
 unsigned int VAR_6;


 FUNC_5(&VAR_4->timer);

 if (VAR_4->can_id != VAR_5->can_id)
  return;


 VAR_4->rx_stamp = VAR_2->tstamp;

 VAR_4->rx_ifindex = VAR_2->dev->ifindex;

 VAR_4->frames_abs++;

 if (VAR_4->flags & VAR_1) {

  FUNC_1(VAR_4);
  return;
 }

 if (VAR_4->flags & VAR_0) {

  FUNC_4(VAR_4, &VAR_4->last_frames[0], VAR_5);
  goto rx_starttimer;
 }

 if (VAR_4->nframes == 1) {

  FUNC_2(VAR_4, 0, VAR_5);
  goto rx_starttimer;
 }

 if (VAR_4->nframes > 1) {







  for (VAR_6 = 1; VAR_6 < VAR_4->nframes; VAR_6++) {
   if ((FUNC_0(&VAR_4->frames[0]) & FUNC_0(VAR_5)) ==
       (FUNC_0(&VAR_4->frames[0]) &
        FUNC_0(&VAR_4->frames[VAR_6]))) {
    FUNC_2(VAR_4, VAR_6, VAR_5);
    break;
   }
  }
 }

rx_starttimer:
 FUNC_3(VAR_4);
}
