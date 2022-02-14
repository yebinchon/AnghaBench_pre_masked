
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Qdisc_ops {int (* reset ) (struct Qdisc*) ;} ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_1__ q; int * gso_skb; struct Qdisc_ops* ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct Qdisc*) ;

void FUNC_2(struct Qdisc *VAR_0)
{
 const struct Qdisc_ops *VAR_1 = VAR_0->ops;

 if (VAR_1->reset)
  VAR_1->reset(VAR_0);

 if (VAR_0->gso_skb) {
  FUNC_0(VAR_0->gso_skb);
  VAR_0->gso_skb = ((void*)0);
  VAR_0->q.qlen = 0;
 }
}
