
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_parent; int tcm_ifindex; } ;
struct tcf_proto {scalar_t__ prio; scalar_t__ protocol; TYPE_2__* ops; struct tcf_proto* next; } ;
struct TYPE_8__ {int skip; int count; scalar_t__ stop; int fn; } ;
struct tcf_dump_args {TYPE_3__ w; struct netlink_callback* cb; struct sk_buff* skb; } ;
struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_4__* nlh; int skb; } ;
struct net_device {struct Qdisc* qdisc; } ;
struct net {int dummy; } ;
struct Qdisc_class_ops {unsigned long (* get ) (struct Qdisc*,int ) ;int (* put ) (struct Qdisc*,unsigned long) ;struct tcf_proto** (* tcf_chain ) (struct Qdisc*,unsigned long) ;} ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_10__ {int pid; } ;
struct TYPE_9__ {scalar_t__ nlmsg_len; int nlmsg_seq; } ;
struct TYPE_7__ {int (* walk ) (struct tcf_proto*,TYPE_3__*) ;} ;
struct TYPE_6__ {struct Qdisc_class_ops* cl_ops; } ;


 TYPE_5__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct net_device* FUNC_5 (struct net*,int ) ;
 int FUNC_6 (struct net_device*) ;
 struct net VAR_2 ;
 int FUNC_7 (int*,int ,int) ;
 struct Qdisc* FUNC_8 (struct net_device*,scalar_t__) ;
 struct net* FUNC_9 (int ) ;
 unsigned long FUNC_10 (struct Qdisc*,int ) ;
 struct tcf_proto** FUNC_11 (struct Qdisc*,unsigned long) ;
 int FUNC_12 (struct tcf_proto*,TYPE_3__*) ;
 int FUNC_13 (struct Qdisc*,unsigned long) ;
 scalar_t__ FUNC_14 (struct sk_buff*,struct tcf_proto*,int ,int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_4, struct netlink_callback *VAR_5)
{
 struct net *VAR_6 = FUNC_9(VAR_4->sk);
 int VAR_7;
 int VAR_8;
 struct net_device *VAR_9;
 struct Qdisc *VAR_10;
 struct tcf_proto *VAR_11, **VAR_12;
 struct tcmsg *VAR_13 = (struct tcmsg *)FUNC_1(VAR_5->nlh);
 unsigned long VAR_14 = 0;
 const struct Qdisc_class_ops *VAR_15;
 struct tcf_dump_args VAR_16;

 if (VAR_6 != &VAR_2)
  return 0;

 if (VAR_5->nlh->nlmsg_len < FUNC_2(sizeof(*VAR_13)))
  return VAR_4->len;
 if ((VAR_9 = FUNC_5(&VAR_2, VAR_13->tcm_ifindex)) == ((void*)0))
  return VAR_4->len;

 if (!VAR_13->tcm_parent)
  VAR_10 = VAR_9->qdisc;
 else
  VAR_10 = FUNC_8(VAR_9, FUNC_3(VAR_13->tcm_parent));
 if (!VAR_10)
  goto out;
 if ((VAR_15 = VAR_10->ops->cl_ops) == ((void*)0))
  goto errout;
 if (VAR_15->tcf_chain == ((void*)0))
  goto errout;
 if (FUNC_4(VAR_13->tcm_parent)) {
  VAR_14 = VAR_15->get(VAR_10, VAR_13->tcm_parent);
  if (VAR_14 == 0)
   goto errout;
 }
 VAR_12 = VAR_15->tcf_chain(VAR_10, VAR_14);
 if (VAR_12 == ((void*)0))
  goto errout;

 VAR_8 = VAR_5->args[0];

 for (VAR_11=*VAR_12, VAR_7=0; VAR_11; VAR_11 = VAR_11->next, VAR_7++) {
  if (VAR_7 < VAR_8) continue;
  if (FUNC_3(VAR_13->tcm_info) &&
      FUNC_3(VAR_13->tcm_info) != VAR_11->prio)
   continue;
  if (FUNC_4(VAR_13->tcm_info) &&
      FUNC_4(VAR_13->tcm_info) != VAR_11->protocol)
   continue;
  if (VAR_7 > VAR_8)
   FUNC_7(&VAR_5->args[1], 0, sizeof(VAR_5->args)-sizeof(VAR_5->args[0]));
  if (VAR_5->args[1] == 0) {
   if (FUNC_14(VAR_4, VAR_11, 0, FUNC_0(VAR_5->skb).pid,
       VAR_5->nlh->nlmsg_seq, VAR_0,
       VAR_1) <= 0)
    break;

   VAR_5->args[1] = 1;
  }
  if (VAR_11->ops->walk == ((void*)0))
   continue;
  VAR_16.w.fn = VAR_3;
  VAR_16.skb = VAR_4;
  VAR_16.cb = VAR_5;
  VAR_16.w.stop = 0;
  VAR_16.w.skip = VAR_5->args[1]-1;
  VAR_16.w.count = 0;
  VAR_11->ops->walk(VAR_11, &VAR_16.w);
  VAR_5->args[1] = VAR_16.w.count+1;
  if (VAR_16.w.stop)
   break;
 }

 VAR_5->args[0] = VAR_7;

errout:
 if (VAR_14)
  VAR_15->put(VAR_10, VAR_14);
out:
 FUNC_6(VAR_9);
 return VAR_4->len;
}
