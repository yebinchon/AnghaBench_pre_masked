
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct htb_sched {scalar_t__ now; scalar_t__* near_ev_cache; int* row_mask; int work; int watchdog; int direct_queue; } ;
struct TYPE_4__ {int overlimits; } ;
struct TYPE_3__ {int qlen; } ;
struct Qdisc {TYPE_2__ qstats; int flags; TYPE_1__ q; } ;
typedef scalar_t__ psched_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (struct htb_sched*,int,int) ;
 scalar_t__ FUNC_3 (struct htb_sched*,int,unsigned long) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 struct htb_sched* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct Qdisc *VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 struct htb_sched *VAR_6 = FUNC_6(VAR_4);
 int VAR_7;
 psched_time_t VAR_8;
 unsigned long VAR_9;


 VAR_5 = FUNC_0(&VAR_6->direct_queue);
 if (VAR_5 != ((void*)0)) {
  VAR_4->flags &= ~VAR_1;
  VAR_4->q.qlen--;
  return VAR_5;
 }

 if (!VAR_4->q.qlen)
  goto fin;
 VAR_6->now = FUNC_5();
 VAR_9 = VAR_3;

 VAR_8 = VAR_6->now + 5 * VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {

  int VAR_10;
  psched_time_t VAR_11;

  if (VAR_6->now >= VAR_6->near_ev_cache[VAR_7]) {
   VAR_11 = FUNC_3(VAR_6, VAR_7, VAR_9);
   if (!VAR_11)
    VAR_11 = VAR_6->now + VAR_0;
   VAR_6->near_ev_cache[VAR_7] = VAR_11;
  } else
   VAR_11 = VAR_6->near_ev_cache[VAR_7];

  if (VAR_8 > VAR_11)
   VAR_8 = VAR_11;

  VAR_10 = ~VAR_6->row_mask[VAR_7];
  while (VAR_10 != (int)(-1)) {
   int VAR_12 = FUNC_1(VAR_10);
   VAR_10 |= 1 << VAR_12;
   VAR_5 = FUNC_2(VAR_6, VAR_12, VAR_7);
   if (FUNC_4(VAR_5 != ((void*)0))) {
    VAR_4->q.qlen--;
    VAR_4->flags &= ~VAR_1;
    goto fin;
   }
  }
 }
 VAR_4->qstats.overlimits++;
 if (FUNC_4(VAR_8 > VAR_6->now))
  FUNC_7(&VAR_6->watchdog, VAR_8);
 else
  FUNC_8(&VAR_6->work);
fin:
 return VAR_5;
}
