
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcmsg {scalar_t__ tcm_parent; scalar_t__ tcm_handle; int tcm_ifindex; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {struct Qdisc* qdisc_sleeping; } ;
struct net_device {struct Qdisc* qdisc; TYPE_1__ rx_queue; } ;
struct net {int dummy; } ;
struct Qdisc {scalar_t__ handle; TYPE_2__* ops; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tcmsg* FUNC_0 (struct nlmsghdr*) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 struct net_device* FUNC_2 (struct net*,int ) ;
 struct net VAR_8 ;
 scalar_t__ FUNC_3 (struct nlattr*,int ) ;
 int FUNC_4 (struct nlmsghdr*,int,struct nlattr**,int ,int *) ;
 int FUNC_5 (struct net_device*,struct Qdisc*,struct sk_buff*,struct nlmsghdr*,scalar_t__,int *,struct Qdisc*) ;
 struct Qdisc* FUNC_6 (struct Qdisc*,scalar_t__) ;
 struct Qdisc* FUNC_7 (struct net_device*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*,scalar_t__,int *,struct Qdisc*) ;
 struct net* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_9, struct nlmsghdr *VAR_10, void *VAR_11)
{
 struct net *VAR_12 = FUNC_9(VAR_9->sk);
 struct tcmsg *VAR_13 = FUNC_0(VAR_10);
 struct nlattr *VAR_14[VAR_5 + 1];
 struct net_device *VAR_15;
 u32 VAR_16 = VAR_13->tcm_parent;
 struct Qdisc *VAR_17 = ((void*)0);
 struct Qdisc *VAR_18 = ((void*)0);
 int VAR_19;

 if (VAR_12 != &VAR_8)
  return -VAR_0;

 if ((VAR_15 = FUNC_2(&VAR_8, VAR_13->tcm_ifindex)) == ((void*)0))
  return -VAR_1;

 VAR_19 = FUNC_4(VAR_10, sizeof(*VAR_13), VAR_14, VAR_5, ((void*)0));
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_16) {
  if (VAR_16 != VAR_7) {
   if (FUNC_1(VAR_16) != FUNC_1(VAR_6)) {
    if ((VAR_18 = FUNC_7(VAR_15, FUNC_1(VAR_16))) == ((void*)0))
     return -VAR_2;
    VAR_17 = FUNC_6(VAR_18, VAR_16);
   } else {
    VAR_17 = VAR_15->rx_queue.qdisc_sleeping;
   }
  } else {
   VAR_17 = VAR_15->qdisc;
  }
  if (!VAR_17)
   return -VAR_2;

  if (VAR_13->tcm_handle && VAR_17->handle != VAR_13->tcm_handle)
   return -VAR_0;
 } else {
  if ((VAR_17 = FUNC_7(VAR_15, VAR_13->tcm_handle)) == ((void*)0))
   return -VAR_2;
 }

 if (VAR_14[VAR_4] && FUNC_3(VAR_14[VAR_4], VAR_17->ops->id))
  return -VAR_0;

 if (VAR_10->nlmsg_type == VAR_3) {
  if (!VAR_16)
   return -VAR_0;
  if (VAR_17->handle == 0)
   return -VAR_2;
  if ((VAR_19 = FUNC_5(VAR_15, VAR_18, VAR_9, VAR_10, VAR_16, ((void*)0), VAR_17)) != 0)
   return VAR_19;
 } else {
  FUNC_8(VAR_9, VAR_10, VAR_16, ((void*)0), VAR_17);
 }
 return 0;
}
