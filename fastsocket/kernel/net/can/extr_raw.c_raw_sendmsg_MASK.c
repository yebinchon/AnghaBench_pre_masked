
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_can {scalar_t__ can_family; int can_ifindex; } ;
struct sock {int dummy; } ;
struct sk_buff {struct sock* sk; struct net_device* dev; } ;
struct raw_sock {int ifindex; int loopback; } ;
struct net_device {int dummy; } ;
struct msghdr {int msg_flags; int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct can_frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 struct net_device* FUNC_1 (int *,int) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,size_t) ;
 struct raw_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*,size_t) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct sock*,size_t,int,int*) ;
 int FUNC_9 (struct msghdr*,struct sock*,int ) ;

__attribute__((used)) static int FUNC_10(struct kiocb *VAR_5, struct socket *VAR_6,
         struct msghdr *VAR_7, size_t VAR_8)
{
 struct sock *VAR_9 = VAR_6->sk;
 struct raw_sock *VAR_10 = FUNC_5(VAR_9);
 struct sk_buff *VAR_11;
 struct net_device *VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_7->msg_name) {
  struct sockaddr_can *VAR_15 =
   (struct sockaddr_can *)VAR_7->msg_name;

  if (VAR_15->can_family != VAR_0)
   return -VAR_1;

  VAR_13 = VAR_15->can_ifindex;
 } else
  VAR_13 = VAR_10->ifindex;

 if (VAR_8 != sizeof(struct can_frame))
  return -VAR_1;

 VAR_12 = FUNC_1(&VAR_4, VAR_13);
 if (!VAR_12)
  return -VAR_2;

 VAR_11 = FUNC_8(VAR_9, VAR_8, VAR_7->msg_flags & VAR_3,
      &VAR_14);
 if (!VAR_11)
  goto put_dev;

 VAR_14 = FUNC_4(FUNC_6(VAR_11, VAR_8), VAR_7->msg_iov, VAR_8);
 if (VAR_14 < 0)
  goto free_skb;
 VAR_14 = FUNC_9(VAR_7, VAR_9, FUNC_7(VAR_11));
 if (VAR_14 < 0)
  goto free_skb;
 VAR_11->dev = VAR_12;
 VAR_11->sk = VAR_9;

 VAR_14 = FUNC_0(VAR_11, VAR_10->loopback);

 FUNC_2(VAR_12);

 if (VAR_14)
  goto send_failed;

 return VAR_8;

free_skb:
 FUNC_3(VAR_11);
put_dev:
 FUNC_2(VAR_12);
send_failed:
 return VAR_14;
}
