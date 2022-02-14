
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cbq_sched_data {scalar_t__ tx_len; int activemask; struct cbq_class** active; struct cbq_class* tx_borrowed; struct cbq_class* tx_class; } ;
struct TYPE_4__ {scalar_t__ borrows; } ;
struct cbq_class {scalar_t__ deficit; scalar_t__ quantum; int cpriority; struct cbq_class* next_alive; TYPE_3__* q; TYPE_1__ xstats; } ;
struct Qdisc {int dummy; } ;
struct TYPE_5__ {scalar_t__ qlen; } ;
struct TYPE_6__ {TYPE_2__ q; struct sk_buff* (* dequeue ) (TYPE_3__*) ;} ;


 int FUNC_0 (struct cbq_class*) ;
 struct cbq_class* FUNC_1 (struct cbq_class*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct cbq_sched_data* FUNC_3 (struct Qdisc*) ;
 struct sk_buff* FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static __inline__ struct sk_buff *
FUNC_5(struct Qdisc *VAR_0, int VAR_1)
{
 struct cbq_sched_data *VAR_2 = FUNC_3(VAR_0);
 struct cbq_class *VAR_3, *VAR_4, *VAR_5;
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_3 = VAR_4 = VAR_2->active[VAR_1];
 VAR_5 = VAR_4->next_alive;

 do {
  VAR_7 = 0;


  do {
   struct cbq_class *VAR_8 = VAR_5;

   if (VAR_5->q->q.qlen &&
       (VAR_8 = FUNC_1(VAR_5)) == ((void*)0))
    goto skip_class;

   if (VAR_5->deficit <= 0) {



    VAR_7 = 1;
    VAR_5->deficit += VAR_5->quantum;
    goto next_class;
   }

   VAR_6 = VAR_5->q->dequeue(VAR_5->q);





   if (VAR_6 == ((void*)0))
    goto skip_class;

   VAR_5->deficit -= FUNC_2(VAR_6);
   VAR_2->tx_class = VAR_5;
   VAR_2->tx_borrowed = VAR_8;
   if (VAR_8 != VAR_5) {

    VAR_8->xstats.borrows++;
    VAR_5->xstats.borrows++;




   }
   VAR_2->tx_len = FUNC_2(VAR_6);

   if (VAR_5->deficit <= 0) {
    VAR_2->active[VAR_1] = VAR_5;
    VAR_5 = VAR_5->next_alive;
    VAR_5->deficit += VAR_5->quantum;
   }
   return VAR_6;

skip_class:
   if (VAR_5->q->q.qlen == 0 || VAR_1 != VAR_5->cpriority) {



    VAR_4->next_alive = VAR_5->next_alive;
    VAR_5->next_alive = ((void*)0);


    if (VAR_5 == VAR_3) {

     VAR_3 = VAR_4;


     if (VAR_5 == VAR_3) {

      VAR_2->active[VAR_1] = ((void*)0);
      VAR_2->activemask &= ~(1<<VAR_1);
      if (VAR_5->q->q.qlen)
       FUNC_0(VAR_5);
      return ((void*)0);
     }

     VAR_2->active[VAR_1] = VAR_3;
    }
    if (VAR_5->q->q.qlen)
     FUNC_0(VAR_5);

    VAR_5 = VAR_4;
   }

next_class:
   VAR_4 = VAR_5;
   VAR_5 = VAR_5->next_alive;
  } while (VAR_4 != VAR_3);
 } while (VAR_7);

 VAR_2->active[VAR_1] = VAR_4;

 return ((void*)0);
}
