
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {unsigned int num_tx_queues; int flags; struct Qdisc* qdisc; struct netdev_queue rx_queue; } ;
struct Qdisc_class_ops {int (* graft ) (struct Qdisc*,unsigned long,struct Qdisc*,struct Qdisc**) ;unsigned long (* get ) (struct Qdisc*,int ) ;int (* put ) (struct Qdisc*,unsigned long) ;} ;
struct Qdisc {int flags; TYPE_1__* ops; int refcnt; } ;
struct TYPE_2__ {struct Qdisc_class_ops* cl_ops; int (* attach ) (struct Qdisc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct Qdisc* FUNC_3 (struct netdev_queue*,struct Qdisc*) ;
 struct netdev_queue* FUNC_4 (struct net_device*,unsigned int) ;
 struct Qdisc VAR_4 ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*,int ,struct Qdisc*,struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*) ;
 unsigned long FUNC_8 (struct Qdisc*,int ) ;
 int FUNC_9 (struct Qdisc*,unsigned long,struct Qdisc*,struct Qdisc**) ;
 int FUNC_10 (struct Qdisc*,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5, struct Qdisc *VAR_6,
         struct sk_buff *VAR_7, struct nlmsghdr *VAR_8, u32 VAR_9,
         struct Qdisc *VAR_10, struct Qdisc *VAR_11)
{
 struct Qdisc *VAR_12 = VAR_11;
 int VAR_13 = 0;

 if (VAR_6 == ((void*)0)) {
  unsigned int VAR_14, VAR_15, VAR_16;

  VAR_16 = 0;
  VAR_15 = VAR_5->num_tx_queues;
  if ((VAR_12 && VAR_12->flags & VAR_3) ||
      (VAR_10 && VAR_10->flags & VAR_3)) {
   VAR_15 = 1;
   VAR_16 = 1;
  }

  if (VAR_5->flags & VAR_2)
   FUNC_2(VAR_5);

  if (VAR_10 && VAR_10->ops->attach) {
   VAR_10->ops->attach(VAR_10);
   VAR_15 = 0;
  }

  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   struct netdev_queue *VAR_17 = &VAR_5->rx_queue;

   if (!VAR_16)
    VAR_17 = FUNC_4(VAR_5, VAR_14);

   VAR_11 = FUNC_3(VAR_17, VAR_10);
   if (VAR_10 && VAR_14 > 0)
    FUNC_0(&VAR_10->refcnt);

   if (!VAR_16)
    FUNC_6(VAR_11);
  }

  if (!VAR_16) {
   FUNC_5(VAR_7, VAR_8, VAR_9, VAR_5->qdisc, VAR_10);
   if (VAR_10 && !VAR_10->ops->attach)
    FUNC_0(&VAR_10->refcnt);
   VAR_5->qdisc = VAR_10 ? : &VAR_4;
  } else {
   FUNC_5(VAR_7, VAR_8, VAR_9, VAR_11, VAR_10);
  }

  if (VAR_5->flags & VAR_2)
   FUNC_1(VAR_5);
 } else {
  const struct Qdisc_class_ops *VAR_18 = VAR_6->ops->cl_ops;

  VAR_13 = -VAR_1;
  if (VAR_18 && VAR_18->graft) {
   unsigned long VAR_19 = VAR_18->get(VAR_6, VAR_9);
   if (VAR_19) {
    VAR_13 = VAR_18->graft(VAR_6, VAR_19, VAR_10, &VAR_11);
    VAR_18->put(VAR_6, VAR_19);
   } else
    VAR_13 = -VAR_0;
  }
  if (!VAR_13)
   FUNC_5(VAR_7, VAR_8, VAR_9, VAR_11, VAR_10);
 }
 return VAR_13;
}
