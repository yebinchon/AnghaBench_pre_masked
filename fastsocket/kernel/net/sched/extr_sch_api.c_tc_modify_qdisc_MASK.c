
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcmsg {scalar_t__ tcm_parent; scalar_t__ tcm_handle; int tcm_ifindex; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct net_device {struct netdev_queue rx_queue; struct Qdisc* qdisc; } ;
struct net {int dummy; } ;
struct Qdisc {scalar_t__ handle; struct netdev_queue* dev_queue; TYPE_2__* ops; int refcnt; } ;
struct TYPE_4__ {TYPE_1__* cl_ops; int id; } ;
struct TYPE_3__ {struct netdev_queue* (* select_queue ) (struct Qdisc*,struct tcmsg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tcmsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 struct net_device* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct Qdisc*,struct Qdisc*,int ) ;
 struct net VAR_13 ;
 struct netdev_queue* FUNC_6 (struct net_device*,int ) ;
 scalar_t__ FUNC_7 (struct nlattr*,int ) ;
 int FUNC_8 (struct nlmsghdr*,int,struct nlattr**,int ,int *) ;
 int FUNC_9 (struct Qdisc*,struct nlattr**) ;
 struct Qdisc* FUNC_10 (struct net_device*,struct netdev_queue*,struct Qdisc*,scalar_t__,scalar_t__,struct nlattr**,int*) ;
 int FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (struct net_device*,struct Qdisc*,struct sk_buff*,struct nlmsghdr*,scalar_t__,struct Qdisc*,int *) ;
 struct Qdisc* FUNC_13 (struct Qdisc*,scalar_t__) ;
 struct Qdisc* FUNC_14 (struct net_device*,scalar_t__) ;
 int FUNC_15 (struct sk_buff*,struct nlmsghdr*,scalar_t__,int *,struct Qdisc*) ;
 struct net* FUNC_16 (int ) ;
 struct netdev_queue* FUNC_17 (struct Qdisc*,struct tcmsg*) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_14, struct nlmsghdr *VAR_15, void *VAR_16)
{
 struct net *VAR_17 = FUNC_16(VAR_14->sk);
 struct tcmsg *VAR_18;
 struct nlattr *VAR_19[VAR_10 + 1];
 struct net_device *VAR_20;
 u32 VAR_21;
 struct Qdisc *VAR_22, *VAR_23;
 int VAR_24;

 if (VAR_17 != &VAR_13)
  return -VAR_2;

replay:

 VAR_18 = FUNC_0(VAR_15);
 VAR_21 = VAR_18->tcm_parent;
 VAR_22 = VAR_23 = ((void*)0);

 if ((VAR_20 = FUNC_3(&VAR_13, VAR_18->tcm_ifindex)) == ((void*)0))
  return -VAR_4;

 VAR_24 = FUNC_8(VAR_15, sizeof(*VAR_18), VAR_19, VAR_10, ((void*)0));
 if (VAR_24 < 0)
  return VAR_24;

 if (VAR_21) {
  if (VAR_21 != VAR_12) {
   if (VAR_21 != VAR_11) {
    if ((VAR_23 = FUNC_14(VAR_20, FUNC_1(VAR_21))) == ((void*)0))
     return -VAR_5;
    VAR_22 = FUNC_13(VAR_23, VAR_21);
   } else {
    VAR_22 = VAR_20->rx_queue.qdisc_sleeping;
   }
  } else {
   VAR_22 = VAR_20->qdisc;
  }


  if (VAR_22 && VAR_22->handle == 0)
   VAR_22 = ((void*)0);

  if (!VAR_22 || !VAR_18->tcm_handle || VAR_22->handle != VAR_18->tcm_handle) {
   if (VAR_18->tcm_handle) {
    if (VAR_22 && !(VAR_15->nlmsg_flags&VAR_8))
     return -VAR_1;
    if (FUNC_2(VAR_18->tcm_handle))
     return -VAR_2;
    if ((VAR_22 = FUNC_14(VAR_20, VAR_18->tcm_handle)) == ((void*)0))
     goto create_n_graft;
    if (VAR_15->nlmsg_flags&VAR_7)
     return -VAR_1;
    if (VAR_19[VAR_9] && FUNC_7(VAR_19[VAR_9], VAR_22->ops->id))
     return -VAR_2;
    if (VAR_22 == VAR_23 ||
        (VAR_23 && FUNC_5(VAR_22, VAR_23, 0)))
     return -VAR_3;
    FUNC_4(&VAR_22->refcnt);
    goto graft;
   } else {
    if (VAR_22 == ((void*)0))
     goto create_n_graft;
    if ((VAR_15->nlmsg_flags&VAR_6) &&
        (VAR_15->nlmsg_flags&VAR_8) &&
        ((VAR_15->nlmsg_flags&VAR_7) ||
         (VAR_19[VAR_9] &&
          FUNC_7(VAR_19[VAR_9], VAR_22->ops->id))))
     goto create_n_graft;
   }
  }
 } else {
  if (!VAR_18->tcm_handle)
   return -VAR_2;
  VAR_22 = FUNC_14(VAR_20, VAR_18->tcm_handle);
 }


 if (VAR_22 == ((void*)0))
  return -VAR_5;
 if (VAR_15->nlmsg_flags&VAR_7)
  return -VAR_1;
 if (VAR_19[VAR_9] && FUNC_7(VAR_19[VAR_9], VAR_22->ops->id))
  return -VAR_2;
 VAR_24 = FUNC_9(VAR_22, VAR_19);
 if (VAR_24 == 0)
  FUNC_15(VAR_14, VAR_15, VAR_21, ((void*)0), VAR_22);
 return VAR_24;

create_n_graft:
 if (!(VAR_15->nlmsg_flags&VAR_6))
  return -VAR_5;
 if (VAR_21 == VAR_11)
  VAR_22 = FUNC_10(VAR_20, &VAR_20->rx_queue, VAR_23,
     VAR_18->tcm_parent, VAR_18->tcm_parent,
     VAR_19, &VAR_24);
 else {
  struct netdev_queue *VAR_25;

  if (VAR_23 && VAR_23->ops->cl_ops && VAR_23->ops->cl_ops->select_queue)
   VAR_25 = VAR_23->ops->cl_ops->select_queue(VAR_23, VAR_18);
  else if (VAR_23)
   VAR_25 = VAR_23->dev_queue;
  else
   VAR_25 = FUNC_6(VAR_20, 0);

  VAR_22 = FUNC_10(VAR_20, VAR_25, VAR_23,
     VAR_18->tcm_parent, VAR_18->tcm_handle,
     VAR_19, &VAR_24);
 }
 if (VAR_22 == ((void*)0)) {
  if (VAR_24 == -VAR_0)
   goto replay;
  return VAR_24;
 }

graft:
 VAR_24 = FUNC_12(VAR_20, VAR_23, VAR_14, VAR_15, VAR_21, VAR_22, ((void*)0));
 if (VAR_24) {
  if (VAR_22)
   FUNC_11(VAR_22);
  return VAR_24;
 }

 return 0;
}
