
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_5__ {TYPE_3__* q; } ;
struct atm_qdisc_data {TYPE_2__ link; } ;
struct Qdisc {int dummy; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_4__ {struct sk_buff* (* peek ) (TYPE_3__*) ;} ;


 int FUNC_0 (char*,struct Qdisc*,struct atm_qdisc_data*) ;
 struct atm_qdisc_data* FUNC_1 (struct Qdisc*) ;
 struct sk_buff* FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct Qdisc *VAR_0)
{
 struct atm_qdisc_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("atm_tc_peek(sch %p,[qdisc %p])\n", VAR_0, VAR_1);

 return VAR_1->link.q->ops->peek(VAR_1->link.q);
}
