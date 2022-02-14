
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_pkt {scalar_t__* spkt_device; int spkt_protocol; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_priority; } ;
struct sk_buff {size_t data; size_t tail; int priority; struct net_device* dev; int protocol; } ;
struct net_device {int flags; size_t mtu; size_t hard_header_len; scalar_t__ header_ops; } ;
struct msghdr {int msg_namelen; int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,size_t) ;
 int FUNC_6 (struct sk_buff*,size_t) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct msghdr*,struct sock*,int ) ;
 struct sk_buff* FUNC_12 (struct sock*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct kiocb *VAR_8, struct socket *VAR_9,
          struct msghdr *VAR_10, size_t VAR_11)
{
 struct sock *VAR_12 = VAR_9->sk;
 struct sockaddr_pkt *VAR_13 = (struct sockaddr_pkt *)VAR_10->msg_name;
 struct sk_buff *VAR_14;
 struct net_device *VAR_15;
 __be16 VAR_16 = 0;
 int VAR_17;





 if (VAR_13) {
  if (VAR_10->msg_namelen < sizeof(struct sockaddr))
   return -VAR_0;
  if (VAR_10->msg_namelen == sizeof(struct sockaddr_pkt))
   VAR_16 = VAR_13->spkt_protocol;
 } else
  return -VAR_5;





 VAR_13->spkt_device[13] = 0;
 VAR_15 = FUNC_1(FUNC_10(VAR_12), VAR_13->spkt_device);
 VAR_17 = -VAR_4;
 if (VAR_15 == ((void*)0))
  goto out_unlock;

 VAR_17 = -VAR_2;
 if (!(VAR_15->flags & VAR_7))
  goto out_unlock;






 VAR_17 = -VAR_1;
 if (VAR_11 > VAR_15->mtu + VAR_15->hard_header_len)
  goto out_unlock;

 VAR_17 = -VAR_3;
 VAR_14 = FUNC_12(VAR_12, VAR_11 + FUNC_0(VAR_15), 0, VAR_6);







 if (VAR_14 == ((void*)0))
  goto out_unlock;
 FUNC_7(VAR_14, FUNC_0(VAR_15));
 FUNC_8(VAR_14);


 if (VAR_15->header_ops) {
  VAR_14->data -= VAR_15->hard_header_len;
  VAR_14->tail -= VAR_15->hard_header_len;
  if (VAR_11 < VAR_15->hard_header_len)
   FUNC_8(VAR_14);
 }


 VAR_17 = FUNC_5(FUNC_6(VAR_14, VAR_11), VAR_10->msg_iov, VAR_11);
 VAR_14->protocol = VAR_16;
 VAR_14->dev = VAR_15;
 VAR_14->priority = VAR_12->sk_priority;
 if (VAR_17)
  goto out_free;
 VAR_17 = FUNC_11(VAR_10, VAR_12, FUNC_9(VAR_14));
 if (VAR_17 < 0)
  goto out_free;





 FUNC_3(VAR_14);
 FUNC_2(VAR_15);
 return VAR_11;

out_free:
 FUNC_4(VAR_14);
out_unlock:
 if (VAR_15)
  FUNC_2(VAR_15);
 return VAR_17;
}
