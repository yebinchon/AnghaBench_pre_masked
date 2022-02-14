
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcmsg {scalar_t__ tcm_parent; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ stop; scalar_t__ count; scalar_t__ skip; int fn; } ;
struct qdisc_dump_args {TYPE_3__ w; struct netlink_callback* cb; struct sk_buff* skb; } ;
struct netlink_callback {scalar_t__* args; } ;
struct Qdisc {scalar_t__ handle; TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* cl_ops; } ;
struct TYPE_4__ {int (* walk ) (struct Qdisc*,TYPE_3__*) ;} ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct Qdisc*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_1, struct sk_buff *VAR_2,
    struct tcmsg *VAR_3, struct netlink_callback *VAR_4,
    int *VAR_5, int VAR_6)
{
 struct qdisc_dump_args VAR_7;

 if (FUNC_3(VAR_1) ||
     *VAR_5 < VAR_6 || !VAR_1->ops->cl_ops ||
     (VAR_3->tcm_parent &&
      FUNC_0(VAR_3->tcm_parent) != VAR_1->handle)) {
  (*VAR_5)++;
  return 0;
 }
 if (*VAR_5 > VAR_6)
  FUNC_1(&VAR_4->args[1], 0, sizeof(VAR_4->args)-sizeof(VAR_4->args[0]));
 VAR_7.w.fn = VAR_0;
 VAR_7.skb = VAR_2;
 VAR_7.cb = VAR_4;
 VAR_7.w.stop = 0;
 VAR_7.w.skip = VAR_4->args[1];
 VAR_7.w.count = 0;
 VAR_1->ops->cl_ops->walk(VAR_1, &VAR_7.w);
 VAR_4->args[1] = VAR_7.w.count;
 if (VAR_7.w.stop)
  return -1;
 (*VAR_5)++;
 return 0;
}
