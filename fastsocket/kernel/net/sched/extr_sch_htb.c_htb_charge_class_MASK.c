
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct htb_sched {scalar_t__ wait_pq; int now; } ;
struct TYPE_5__ {int bytes; int packets; } ;
struct TYPE_4__ {int borrows; int lends; } ;
struct htb_class {int level; long tokens; int cmode; struct htb_class* parent; TYPE_2__ bstats; int pq_node; int t_c; TYPE_1__ xstats; int mbuffer; } ;
typedef enum htb_cmode { ____Placeholder_htb_cmode } htb_cmode ;
struct TYPE_6__ {int gso_segs; } ;


 int VAR_0 ;
 int FUNC_0 (struct htb_class*,int,long) ;
 int FUNC_1 (struct htb_class*,int,long) ;
 int FUNC_2 (struct htb_sched*,struct htb_class*,long) ;
 int FUNC_3 (struct htb_sched*,struct htb_class*,long*) ;
 int FUNC_4 (int *,scalar_t__) ;
 long FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 TYPE_3__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct htb_sched *VAR_1, struct htb_class *VAR_2,
        int VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5 = FUNC_6(VAR_4);
 enum htb_cmode VAR_6;
 long VAR_7;

 while (VAR_2) {
  VAR_7 = FUNC_5(VAR_1->now, VAR_2->t_c, VAR_2->mbuffer);
  if (VAR_2->level >= VAR_3) {
   if (VAR_2->level == VAR_3)
    VAR_2->xstats.lends++;
   FUNC_1(VAR_2, VAR_5, VAR_7);
  } else {
   VAR_2->xstats.borrows++;
   VAR_2->tokens += VAR_7;
  }
  FUNC_0(VAR_2, VAR_5, VAR_7);
  VAR_2->t_c = VAR_1->now;

  VAR_6 = VAR_2->cmode;
  VAR_7 = 0;
  FUNC_3(VAR_1, VAR_2, &VAR_7);
  if (VAR_6 != VAR_2->cmode) {
   if (VAR_6 != VAR_0)
    FUNC_4(&VAR_2->pq_node, VAR_1->wait_pq + VAR_2->level);
   if (VAR_2->cmode != VAR_0)
    FUNC_2(VAR_1, VAR_2, VAR_7);
  }


  if (VAR_2->level) {
   VAR_2->bstats.bytes += VAR_5;
   VAR_2->bstats.packets += FUNC_7(VAR_4)?
     FUNC_8(VAR_4)->gso_segs:1;
  }
  VAR_2 = VAR_2->parent;
 }
}
