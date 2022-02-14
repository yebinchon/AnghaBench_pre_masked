
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_ifindex; } ;
struct sk_buff {int len; int sk; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; } ;
struct netdev_queue {int qdisc_sleeping; } ;
struct net_device {struct netdev_queue rx_queue; int qdisc; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ nlmsg_len; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 struct net_device* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net_device*) ;
 struct net VAR_0 ;
 struct net* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct sk_buff*,struct tcmsg*,struct netlink_callback*,int*,int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1, struct netlink_callback *VAR_2)
{
 struct tcmsg *VAR_3 = (struct tcmsg*)FUNC_0(VAR_2->nlh);
 struct net *VAR_4 = FUNC_4(VAR_1->sk);
 struct netdev_queue *VAR_5;
 struct net_device *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_4 != &VAR_0)
  return 0;

 if (VAR_2->nlh->nlmsg_len < FUNC_1(sizeof(*VAR_3)))
  return 0;
 if ((VAR_6 = FUNC_2(&VAR_0, VAR_3->tcm_ifindex)) == ((void*)0))
  return 0;

 VAR_8 = VAR_2->args[0];
 VAR_7 = 0;

 if (FUNC_5(VAR_6->qdisc, VAR_1, VAR_3, VAR_2, &VAR_7, VAR_8) < 0)
  goto done;

 VAR_5 = &VAR_6->rx_queue;
 if (FUNC_5(VAR_5->qdisc_sleeping, VAR_1, VAR_3, VAR_2, &VAR_7, VAR_8) < 0)
  goto done;

done:
 VAR_2->args[0] = VAR_7;

 FUNC_3(VAR_6);
 return VAR_1->len;
}
