
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ undertime; } ;
struct cbq_sched_data {scalar_t__ now_rt; scalar_t__ wd_expires; scalar_t__ toplevel; int watchdog; TYPE_3__ link; int now; int tx_len; scalar_t__ tx_class; } ;
struct TYPE_5__ {int overlimits; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_2__ qstats; TYPE_1__ q; int flags; } ;
typedef scalar_t__ psched_time_t ;
typedef scalar_t__ psched_tdiff_t ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct cbq_sched_data*) ;
 scalar_t__ FUNC_3 () ;
 struct cbq_sched_data* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct Qdisc *VAR_3)
{
 struct sk_buff *VAR_4;
 struct cbq_sched_data *VAR_5 = FUNC_4(VAR_3);
 psched_time_t VAR_6;
 psched_tdiff_t VAR_7;

 VAR_6 = FUNC_3();
 VAR_7 = VAR_6 - VAR_5->now_rt;

 if (VAR_5->tx_class) {
  psched_tdiff_t VAR_8;







  VAR_8 = FUNC_0(&VAR_5->link, VAR_5->tx_len);
  VAR_5->now += VAR_8;
  FUNC_2(VAR_5);
  if ((VAR_7 -= VAR_8) < 0)
   VAR_7 = 0;
 }
 VAR_5->now += VAR_7;
 VAR_5->now_rt = VAR_6;

 for (;;) {
  VAR_5->wd_expires = 0;

  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4) {
   VAR_3->q.qlen--;
   VAR_3->flags &= ~VAR_1;
   return VAR_4;
  }
  if (VAR_5->toplevel == VAR_2 &&
      VAR_5->link.undertime == VAR_0)
   break;

  VAR_5->toplevel = VAR_2;
  VAR_5->link.undertime = VAR_0;
 }




 if (VAR_3->q.qlen) {
  VAR_3->qstats.overlimits++;
  if (VAR_5->wd_expires)
   FUNC_5(&VAR_5->watchdog,
      VAR_6 + VAR_5->wd_expires);
 }
 return ((void*)0);
}
