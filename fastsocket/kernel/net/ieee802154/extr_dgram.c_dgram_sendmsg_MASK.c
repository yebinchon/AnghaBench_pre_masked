
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int protocol; struct sock* sk; struct net_device* dev; } ;
struct net_device {unsigned int mtu; size_t name; } ;
struct msghdr {int msg_flags; int msg_iov; } ;
struct kiocb {int dummy; } ;
struct dgram_sock {int src_addr; scalar_t__ bound; int dst_addr; scalar_t__ want_ack; } ;
struct TYPE_4__ {int (* get_dsn ) (struct net_device*) ;} ;
struct TYPE_3__ {int seq; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct net_device* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,int ,int *,int *,size_t) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct dgram_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (int ) ;
 struct net_device* FUNC_8 (int ,int *) ;
 TYPE_2__* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int ,int ,size_t) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (struct sk_buff*,size_t) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 struct sk_buff* FUNC_19 (struct sock*,scalar_t__,int,int*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct net_device*) ;

__attribute__((used)) static int FUNC_22(struct kiocb *VAR_9, struct sock *VAR_10,
  struct msghdr *VAR_11, size_t VAR_12)
{
 struct net_device *VAR_13;
 unsigned VAR_14;
 struct sk_buff *VAR_15;
 struct dgram_sock *VAR_16 = FUNC_6(VAR_10);
 int VAR_17;

 if (VAR_11->msg_flags & VAR_8) {
  FUNC_14("msg->msg_flags = 0x%x\n", VAR_11->msg_flags);
  return -VAR_3;
 }

 if (!VAR_16->bound)
  VAR_13 = FUNC_2(FUNC_20(VAR_10), VAR_0);
 else
  VAR_13 = FUNC_8(FUNC_20(VAR_10), &VAR_16->src_addr);

 if (!VAR_13) {
  FUNC_14("no dev\n");
  VAR_17 = -VAR_2;
  goto out;
 }
 VAR_14 = VAR_13->mtu;
 FUNC_14("name = %s, mtu = %u\n", VAR_13->name, VAR_14);

 VAR_15 = FUNC_19(VAR_10, FUNC_0(VAR_13) + VAR_12,
   VAR_11->msg_flags & VAR_7,
   &VAR_17);
 if (!VAR_15)
  goto out_dev;

 FUNC_16(VAR_15, FUNC_1(VAR_13));

 FUNC_18(VAR_15);

 FUNC_11(VAR_15)->flags = VAR_5;
 if (VAR_16->want_ack)
  FUNC_11(VAR_15)->flags |= VAR_6;

 FUNC_11(VAR_15)->seq = FUNC_9(VAR_13)->get_dsn(VAR_13);
 VAR_17 = FUNC_3(VAR_15, VAR_13, VAR_4, &VAR_16->dst_addr,
   VAR_16->bound ? &VAR_16->src_addr : ((void*)0), VAR_12);
 if (VAR_17 < 0)
  goto out_skb;

 FUNC_17(VAR_15);

 VAR_17 = FUNC_12(FUNC_15(VAR_15, VAR_12), VAR_11->msg_iov, VAR_12);
 if (VAR_17 < 0)
  goto out_skb;

 if (VAR_12 > VAR_14) {
  FUNC_14("size = %Zu, mtu = %u\n", VAR_12, VAR_14);
  VAR_17 = -VAR_1;
  goto out_skb;
 }

 VAR_15->dev = VAR_13;
 VAR_15->sk = VAR_10;
 VAR_15->protocol = FUNC_7(VAR_4);

 FUNC_4(VAR_13);

 VAR_17 = FUNC_5(VAR_15);
 if (VAR_17 > 0)
  VAR_17 = FUNC_13(VAR_17);

 return VAR_17 ?: VAR_12;

out_skb:
 FUNC_10(VAR_15);
out_dev:
 FUNC_4(VAR_13);
out:
 return VAR_17;
}
