
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct neighbour {int nud_state; unsigned long updated; int lock; int arp_queue; int tbl; TYPE_1__* parms; int probes; } ;
struct TYPE_2__ {unsigned long delay_probe_time; scalar_t__ queue_len; int ucast_probes; scalar_t__ app_probes; scalar_t__ mcast_probes; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,struct neighbour*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *,int ) ;
 unsigned long VAR_6 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct neighbour*,unsigned long) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_7 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct neighbour *VAR_8, struct sk_buff *VAR_9)
{
 int VAR_10;
 unsigned long VAR_11;

 FUNC_8(&VAR_8->lock);

 VAR_10 = 0;
 if (VAR_8->nud_state & (VAR_0 | VAR_1 | VAR_4))
  goto out_unlock_bh;

 VAR_11 = VAR_6;

 if (!(VAR_8->nud_state & (VAR_5 | VAR_3))) {
  if (VAR_8->parms->mcast_probes + VAR_8->parms->app_probes) {
   FUNC_4(&VAR_8->probes, VAR_8->parms->ucast_probes);
   VAR_8->nud_state = VAR_3;
   VAR_8->updated = VAR_6;
   FUNC_6(VAR_8, VAR_11 + 1);
  } else {
   VAR_8->nud_state = VAR_2;
   VAR_8->updated = VAR_6;
   FUNC_9(&VAR_8->lock);

   FUNC_5(VAR_9);
   return 1;
  }
 } else if (VAR_8->nud_state & VAR_5) {
  FUNC_1("neigh %p is delayed.\n", VAR_8);
  VAR_8->nud_state = VAR_1;
  VAR_8->updated = VAR_6;
  FUNC_6(VAR_8,
    VAR_6 + VAR_8->parms->delay_probe_time);
 }

 if (VAR_8->nud_state == VAR_3) {
  if (VAR_9) {
   if (FUNC_7(&VAR_8->arp_queue) >=
       VAR_8->parms->queue_len) {
    struct sk_buff *VAR_12;
    VAR_12 = FUNC_2(&VAR_8->arp_queue);
    FUNC_5(VAR_12);
    FUNC_0(VAR_8->tbl, VAR_7);
   }
   FUNC_3(&VAR_8->arp_queue, VAR_9);
  }
  VAR_10 = 1;
 }
out_unlock_bh:
 FUNC_9(&VAR_8->lock);
 return VAR_10;
}
