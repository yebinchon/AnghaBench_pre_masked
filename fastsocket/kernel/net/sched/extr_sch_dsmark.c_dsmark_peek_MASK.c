
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct dsmark_qdisc_data {TYPE_2__* q; } ;
struct Qdisc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {struct sk_buff* (* peek ) (TYPE_2__*) ;} ;


 int FUNC_0 (char*,struct Qdisc*,struct dsmark_qdisc_data*) ;
 struct dsmark_qdisc_data* FUNC_1 (struct Qdisc*) ;
 struct sk_buff* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct Qdisc *VAR_0)
{
 struct dsmark_qdisc_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("dsmark_peek(sch %p,[qdisc %p])\n", VAR_0, VAR_1);

 return VAR_1->q->ops->peek(VAR_1->q);
}
