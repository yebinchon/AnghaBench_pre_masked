
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc_ops {int owner; int (* destroy ) (struct Qdisc*) ;int (* reset ) (struct Qdisc*) ;} ;
struct Qdisc {int flags; int padded; int gso_skb; int rate_est; int bstats; int stab; int refcnt; struct Qdisc_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*) ;

void FUNC_11(struct Qdisc *VAR_1)
{
 const struct Qdisc_ops *VAR_2 = VAR_1->ops;

 if (VAR_1->flags & VAR_0 ||
     !FUNC_0(&VAR_1->refcnt))
  return;






 FUNC_2(&VAR_1->bstats, &VAR_1->rate_est);
 if (VAR_2->reset)
  VAR_2->reset(VAR_1);
 if (VAR_2->destroy)
  VAR_2->destroy(VAR_1);

 FUNC_5(VAR_2->owner);
 FUNC_1(FUNC_6(VAR_1));

 FUNC_4(VAR_1->gso_skb);
 FUNC_3((char *) VAR_1 - VAR_1->padded);
}
