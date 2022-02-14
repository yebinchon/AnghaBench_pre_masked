
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cbq_class {scalar_t__ refcnt; scalar_t__ defmap; int tparent; scalar_t__ next_alive; TYPE_2__* q; scalar_t__ children; scalar_t__ filters; } ;
struct cbq_sched_data {struct cbq_class* rx_class; struct cbq_class* tx_borrowed; struct cbq_class* tx_class; struct cbq_class link; } ;
struct Qdisc {int dummy; } ;
struct TYPE_4__ {unsigned int qlen; } ;
struct TYPE_5__ {TYPE_1__ q; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cbq_class*) ;
 int FUNC_3 (struct cbq_sched_data*,struct cbq_class*) ;
 int FUNC_4 (struct cbq_class*) ;
 int FUNC_5 (struct cbq_class*) ;
 struct cbq_sched_data* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,unsigned int) ;
 int FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_11(struct Qdisc *VAR_1, unsigned long VAR_2)
{
 struct cbq_sched_data *VAR_3 = FUNC_6(VAR_1);
 struct cbq_class *VAR_4 = (struct cbq_class*)VAR_2;
 unsigned int VAR_5;

 if (VAR_4->filters || VAR_4->children || VAR_4 == &VAR_3->link)
  return -VAR_0;

 FUNC_9(VAR_1);

 VAR_5 = VAR_4->q->q.qlen;
 FUNC_7(VAR_4->q);
 FUNC_8(VAR_4->q, VAR_5);

 if (VAR_4->next_alive)
  FUNC_2(VAR_4);

 if (VAR_3->tx_borrowed == VAR_4)
  VAR_3->tx_borrowed = VAR_3->tx_class;
 if (VAR_3->tx_class == VAR_4) {
  VAR_3->tx_class = ((void*)0);
  VAR_3->tx_borrowed = ((void*)0);
 }





 FUNC_5(VAR_4);
 FUNC_1(VAR_4->tparent);
 VAR_4->defmap = 0;
 FUNC_4(VAR_4);

 FUNC_3(VAR_3, VAR_4);
 FUNC_10(VAR_1);

 FUNC_0(--VAR_4->refcnt == 0);





 return 0;
}
