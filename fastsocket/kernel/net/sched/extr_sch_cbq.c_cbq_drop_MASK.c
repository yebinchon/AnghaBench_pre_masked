
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cbq_sched_data {struct cbq_class** active; } ;
struct cbq_class {TYPE_4__* q; struct cbq_class* next_alive; } ;
struct TYPE_6__ {int qlen; } ;
struct Qdisc {TYPE_2__ q; } ;
struct TYPE_7__ {int qlen; } ;
struct TYPE_8__ {TYPE_3__ q; TYPE_1__* ops; } ;
struct TYPE_5__ {unsigned int (* drop ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cbq_class*) ;
 struct cbq_sched_data* FUNC_1 (struct Qdisc*) ;
 unsigned int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static unsigned int FUNC_3(struct Qdisc* VAR_1)
{
 struct cbq_sched_data *VAR_2 = FUNC_1(VAR_1);
 struct cbq_class *VAR_3, *VAR_4;
 int VAR_5;
 unsigned int VAR_6;

 for (VAR_5 = VAR_0; VAR_5 >= 0; VAR_5--) {
  if ((VAR_4 = VAR_2->active[VAR_5]) == ((void*)0))
   continue;

  VAR_3 = VAR_4;
  do {
   if (VAR_3->q->ops->drop && (VAR_6 = VAR_3->q->ops->drop(VAR_3->q))) {
    VAR_1->q.qlen--;
    if (!VAR_3->q->q.qlen)
     FUNC_0(VAR_3);
    return VAR_6;
   }
  } while ((VAR_3 = VAR_3->next_alive) != VAR_4);
 }
 return 0;
}
