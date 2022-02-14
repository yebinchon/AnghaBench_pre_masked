
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cbq_sched_data {scalar_t__ toplevel; } ;
struct cbq_class {scalar_t__ level; scalar_t__ undertime; struct cbq_class* borrow; TYPE_2__* q; } ;
struct TYPE_3__ {int qlen; } ;
struct TYPE_4__ {TYPE_1__ q; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __inline__ void
FUNC_0(struct cbq_sched_data *VAR_2, struct cbq_class *VAR_3,
      struct cbq_class *VAR_4)
{
 if (VAR_3 && VAR_2->toplevel >= VAR_4->level) {
  if (VAR_3->q->q.qlen > 1) {
   do {
    if (VAR_4->undertime == VAR_0) {
     VAR_2->toplevel = VAR_4->level;
     return;
    }
   } while ((VAR_4=VAR_4->borrow) != ((void*)0));
  }






 }
}
