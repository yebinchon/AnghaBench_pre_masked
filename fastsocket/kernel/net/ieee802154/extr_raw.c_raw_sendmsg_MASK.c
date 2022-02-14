
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_bound_dev_if; } ;
struct sk_buff {int protocol; struct sock* sk; struct net_device* dev; } ;
struct net_device {unsigned int mtu; size_t name; } ;
struct msghdr {int msg_flags; int msg_iov; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_device* FUNC_2 (int ,int ) ;
 struct net_device* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int ,int ,size_t) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sk_buff*,size_t) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 struct sk_buff* FUNC_17 (struct sock*,scalar_t__,int,int*) ;
 int FUNC_18 (struct sock*) ;

__attribute__((used)) static int FUNC_19(struct kiocb *VAR_7, struct sock *VAR_8, struct msghdr *VAR_9,
         size_t VAR_10)
{
 struct net_device *VAR_11;
 unsigned VAR_12;
 struct sk_buff *VAR_13;
 int VAR_14;

 if (VAR_9->msg_flags & VAR_6) {
  FUNC_11("msg->msg_flags = 0x%x\n", VAR_9->msg_flags);
  return -VAR_3;
 }

 FUNC_8(VAR_8);
 if (!VAR_8->sk_bound_dev_if)
  VAR_11 = FUNC_3(FUNC_18(VAR_8), VAR_0);
 else
  VAR_11 = FUNC_2(FUNC_18(VAR_8), VAR_8->sk_bound_dev_if);
 FUNC_12(VAR_8);

 if (!VAR_11) {
  FUNC_11("no dev\n");
  VAR_14 = -VAR_2;
  goto out;
 }

 VAR_12 = VAR_11->mtu;
 FUNC_11("name = %s, mtu = %u\n", VAR_11->name, VAR_12);

 if (VAR_10 > VAR_12) {
  FUNC_11("size = %Zu, mtu = %u\n", VAR_10, VAR_12);
  VAR_14 = -VAR_1;
  goto out_dev;
 }

 VAR_13 = FUNC_17(VAR_8, FUNC_0(VAR_11) + VAR_10,
   VAR_9->msg_flags & VAR_5, &VAR_14);
 if (!VAR_13)
  goto out_dev;

 FUNC_14(VAR_13, FUNC_1(VAR_11));

 FUNC_15(VAR_13);
 FUNC_16(VAR_13);

 VAR_14 = FUNC_9(FUNC_13(VAR_13, VAR_10), VAR_9->msg_iov, VAR_10);
 if (VAR_14 < 0)
  goto out_skb;

 VAR_13->dev = VAR_11;
 VAR_13->sk = VAR_8;
 VAR_13->protocol = FUNC_6(VAR_4);

 FUNC_4(VAR_11);

 VAR_14 = FUNC_5(VAR_13);
 if (VAR_14 > 0)
  VAR_14 = FUNC_10(VAR_14);

 return VAR_14 ?: VAR_10;

out_skb:
 FUNC_7(VAR_13);
out_dev:
 FUNC_4(VAR_11);
out:
 return VAR_14;
}
