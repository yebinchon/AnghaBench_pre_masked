
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cbq_sched_data {int toplevel; scalar_t__ now_rt; scalar_t__ now; } ;
struct cbq_class {int level; scalar_t__ undertime; struct cbq_class* borrow; TYPE_1__* q; } ;
typedef scalar_t__ psched_time_t ;
typedef scalar_t__ psched_tdiff_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct cbq_sched_data *VAR_1, struct cbq_class *VAR_2)
{
 int VAR_3 = VAR_1->toplevel;

 if (VAR_3 > VAR_2->level && !(VAR_2->q->flags&VAR_0)) {
  psched_time_t VAR_4;
  psched_tdiff_t VAR_5;

  VAR_4 = FUNC_0();
  VAR_5 = VAR_4 - VAR_1->now_rt;
  VAR_4 = VAR_1->now + VAR_5;

  do {
   if (VAR_2->undertime < VAR_4) {
    VAR_1->toplevel = VAR_2->level;
    return;
   }
  } while ((VAR_2=VAR_2->borrow) != ((void*)0) && VAR_3 > VAR_2->level);
 }
}
