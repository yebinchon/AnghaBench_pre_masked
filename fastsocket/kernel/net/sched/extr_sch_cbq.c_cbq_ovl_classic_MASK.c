
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cbq_sched_data {scalar_t__ now; scalar_t__ wd_expires; scalar_t__ toplevel; } ;
struct TYPE_2__ {int overactions; } ;
struct cbq_class {scalar_t__ undertime; int delayed; int avgidle; int ewma_log; int minidle; struct cbq_class* borrow; TYPE_1__ xstats; scalar_t__ offtime; int qdisc; } ;
typedef scalar_t__ psched_tdiff_t ;


 scalar_t__ VAR_0 ;
 struct cbq_sched_data* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct cbq_class *VAR_1)
{
 struct cbq_sched_data *VAR_2 = FUNC_0(VAR_1->qdisc);
 psched_tdiff_t VAR_3 = VAR_1->undertime - VAR_2->now;

 if (!VAR_1->delayed) {
  VAR_3 += VAR_1->offtime;
  if (VAR_1->avgidle < 0)
   VAR_3 -= (-VAR_1->avgidle) - ((-VAR_1->avgidle) >> VAR_1->ewma_log);
  if (VAR_1->avgidle < VAR_1->minidle)
   VAR_1->avgidle = VAR_1->minidle;
  if (VAR_3 <= 0)
   VAR_3 = 1;
  VAR_1->undertime = VAR_2->now + VAR_3;

  VAR_1->xstats.overactions++;
  VAR_1->delayed = 1;
 }
 if (VAR_2->wd_expires == 0 || VAR_2->wd_expires > VAR_3)
  VAR_2->wd_expires = VAR_3;





 if (VAR_2->toplevel == VAR_0) {
  struct cbq_class *VAR_4;
  psched_tdiff_t VAR_5 = VAR_2->wd_expires;

  for (VAR_4 = VAR_1->borrow; VAR_4; VAR_4 = VAR_4->borrow) {
   VAR_3 = VAR_4->undertime - VAR_2->now;
   if (VAR_3 < VAR_5) {
    if (VAR_3 <= 0)
     VAR_3 = 1;
    VAR_5 = VAR_3;
   }
  }

  VAR_2->wd_expires = VAR_5;
 }
}
