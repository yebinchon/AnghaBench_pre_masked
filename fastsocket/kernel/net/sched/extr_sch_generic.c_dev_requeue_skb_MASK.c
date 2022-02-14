
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_3__ {int requeues; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__ qstats; struct sk_buff* gso_skb; } ;


 int FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static inline int FUNC_1(struct sk_buff *VAR_0, struct Qdisc *VAR_1)
{
 VAR_1->gso_skb = VAR_0;
 VAR_1->qstats.requeues++;
 VAR_1->q.qlen++;
 FUNC_0(VAR_1);

 return 0;
}
