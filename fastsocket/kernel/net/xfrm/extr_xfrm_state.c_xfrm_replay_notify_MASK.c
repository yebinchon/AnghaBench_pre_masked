
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ oseq; int bitmap; scalar_t__ seq; } ;
struct TYPE_5__ {scalar_t__ oseq; int bitmap; scalar_t__ seq; } ;
struct xfrm_state {int xflags; scalar_t__ replay_maxage; int rtimer; TYPE_3__ replay; TYPE_2__ preplay; scalar_t__ replay_maxdiff; } ;
struct xfrm_replay_state {int dummy; } ;
struct TYPE_4__ {int aevent; } ;
struct km_event {TYPE_1__ data; int event; } ;


 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xfrm_state*,struct km_event*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_2 (int *,scalar_t__) ;

void FUNC_3(struct xfrm_state *VAR_3, int VAR_4)
{
 struct km_event VAR_5;
 switch (VAR_4) {
 case 128:
  if (VAR_3->replay_maxdiff &&
      (VAR_3->replay.seq - VAR_3->preplay.seq < VAR_3->replay_maxdiff) &&
      (VAR_3->replay.oseq - VAR_3->preplay.oseq < VAR_3->replay_maxdiff)) {
   if (VAR_3->xflags & VAR_1)
    VAR_4 = 129;
   else
    return;
  }

  break;

 case 129:
  if ((VAR_3->replay.seq == VAR_3->preplay.seq) &&
      (VAR_3->replay.bitmap == VAR_3->preplay.bitmap) &&
      (VAR_3->replay.oseq == VAR_3->preplay.oseq)) {
   VAR_3->xflags |= VAR_1;
   return;
  }

  break;
 }

 FUNC_1(&VAR_3->preplay, &VAR_3->replay, sizeof(struct xfrm_replay_state));
 VAR_5.event = VAR_0;
 VAR_5.data.aevent = VAR_4;
 FUNC_0(VAR_3, &VAR_5);

 if (VAR_3->replay_maxage &&
     !FUNC_2(&VAR_3->rtimer, VAR_2 + VAR_3->replay_maxage))
  VAR_3->xflags &= ~VAR_1;
}
