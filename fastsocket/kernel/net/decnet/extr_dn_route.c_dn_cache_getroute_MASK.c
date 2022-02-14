
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; int protocol; int sk; } ;
struct rtmsg {int rtm_flags; } ;
struct rtattr {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct net_device {int dn_ptr; } ;
struct net {int dummy; } ;
struct flowi {int fld_src; int fld_dst; int iif; int src; int dst; int oif; int proto; } ;
struct dst_entry {int dummy; } ;
struct dn_skb_cb {int fld_src; int fld_dst; int iif; int src; int dst; int oif; int proto; } ;
struct TYPE_5__ {int error; } ;
struct TYPE_4__ {TYPE_2__ dst; } ;
struct dn_route {int rt_flags; TYPE_1__ u; } ;
typedef int fl ;
struct TYPE_6__ {int pid; } ;


 int VAR_0 ;
 struct flowi* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ FUNC_1 (struct sk_buff*) ;
 struct rtmsg* FUNC_2 (struct nlmsghdr*) ;
 int VAR_7 ;
 int FUNC_3 (struct rtattr*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 struct net_device* FUNC_5 (struct net*,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct dst_entry**,struct flowi*,int ) ;
 int FUNC_9 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 struct net VAR_15 ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int*,int ,int) ;
 int FUNC_15 (struct flowi*,int ,int) ;
 int FUNC_16 (struct sk_buff*,struct net*,int ) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_19 (struct sk_buff*) ;
 struct net* FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(struct sk_buff *VAR_16, struct nlmsghdr *VAR_17, void *VAR_18)
{
 struct net *VAR_19 = FUNC_20(VAR_16->sk);
 struct rtattr **VAR_20 = VAR_18;
 struct rtmsg *VAR_21 = FUNC_2(VAR_17);
 struct dn_route *VAR_22 = ((void*)0);
 struct dn_skb_cb *VAR_23;
 int VAR_24;
 struct sk_buff *VAR_25;
 struct flowi VAR_26;

 if (VAR_19 != &VAR_15)
  return -VAR_1;

 FUNC_15(&VAR_26, 0, sizeof(VAR_26));
 VAR_26.proto = VAR_0;

 VAR_25 = FUNC_4(VAR_7, VAR_6);
 if (VAR_25 == ((void*)0))
  return -VAR_3;
 FUNC_19(VAR_25);
 VAR_23 = FUNC_0(VAR_25);

 if (VAR_20[VAR_11-1])
  FUNC_14(&VAR_26.fld_src, FUNC_3(VAR_20[VAR_11-1]), 2);
 if (VAR_20[VAR_8-1])
  FUNC_14(&VAR_26.fld_dst, FUNC_3(VAR_20[VAR_8-1]), 2);
 if (VAR_20[VAR_9-1])
  FUNC_14(&VAR_26.iif, FUNC_3(VAR_20[VAR_9-1]), sizeof(int));

 if (VAR_26.iif) {
  struct net_device *VAR_27;
  if ((VAR_27 = FUNC_5(&VAR_15, VAR_26.iif)) == ((void*)0)) {
   FUNC_11(VAR_25);
   return -VAR_4;
  }
  if (!VAR_27->dn_ptr) {
   FUNC_6(VAR_27);
   FUNC_11(VAR_25);
   return -VAR_4;
  }
  VAR_25->protocol = FUNC_10(VAR_5);
  VAR_25->dev = VAR_27;
  VAR_23->src = VAR_26.fld_src;
  VAR_23->dst = VAR_26.fld_dst;
  FUNC_12();
  VAR_24 = FUNC_7(VAR_25);
  FUNC_13();
  FUNC_15(VAR_23, 0, sizeof(struct dn_skb_cb));
  VAR_22 = (struct dn_route *)FUNC_17(VAR_25);
  if (!VAR_24 && -VAR_22->u.dst.error)
   VAR_24 = VAR_22->u.dst.error;
 } else {
  int VAR_28 = 0;
  if (VAR_20[VAR_10 - 1])
   FUNC_14(&VAR_28, FUNC_3(VAR_20[VAR_10 - 1]), sizeof(int));
  VAR_26.oif = VAR_28;
  VAR_24 = FUNC_8((struct dst_entry **)&VAR_22, &VAR_26, 0);
 }

 if (VAR_25->dev)
  FUNC_6(VAR_25->dev);
 VAR_25->dev = ((void*)0);
 if (VAR_24)
  goto out_free;
 FUNC_18(VAR_25, &VAR_22->u.dst);
 if (VAR_21->rtm_flags & VAR_13)
  VAR_22->rt_flags |= VAR_12;

 VAR_24 = FUNC_9(VAR_25, FUNC_1(VAR_16).pid, VAR_17->nlmsg_seq, VAR_14, 0, 0);

 if (VAR_24 == 0)
  goto out_free;
 if (VAR_24 < 0) {
  VAR_24 = -VAR_2;
  goto out_free;
 }

 return FUNC_16(VAR_25, &VAR_15, FUNC_1(VAR_16).pid);

out_free:
 FUNC_11(VAR_25);
 return VAR_24;
}
