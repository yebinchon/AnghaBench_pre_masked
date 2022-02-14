
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct socket {struct sock* sk; } ;
struct sockaddr_can {scalar_t__ can_family; int can_ifindex; } ;
struct sock {int dummy; } ;
struct net_device {scalar_t__ type; } ;
struct msghdr {int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct bcm_sock {int ifindex; int rx_ops; int tx_ops; int bound; } ;
struct bcm_msg_head {int opcode; int nframes; int can_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;



 int VAR_7 ;




 int VAR_8 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,struct bcm_msg_head*,int) ;
 int FUNC_3 (struct bcm_msg_head*,struct msghdr*,int,struct sock*) ;
 struct bcm_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct msghdr*,int,struct sock*) ;
 int FUNC_6 (struct bcm_msg_head*,struct msghdr*,int,struct sock*) ;
 struct net_device* FUNC_7 (int *,int) ;
 int FUNC_8 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int *,int ,size_t) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static int FUNC_12(struct kiocb *VAR_10, struct socket *VAR_11,
         struct msghdr *VAR_12, size_t VAR_13)
{
 struct sock *VAR_14 = VAR_11->sk;
 struct bcm_sock *VAR_15 = FUNC_4(VAR_14);
 int VAR_16 = VAR_15->ifindex;
 struct bcm_msg_head VAR_17;
 int VAR_18;

 if (!VAR_15->bound)
  return -VAR_5;


 if (VAR_13 < VAR_6 || (VAR_13 - VAR_6) % VAR_2)
  return -VAR_3;



 if (!VAR_16 && VAR_12->msg_name) {

  struct sockaddr_can *VAR_19 =
   (struct sockaddr_can *)VAR_12->msg_name;

  if (VAR_19->can_family != VAR_0)
   return -VAR_3;


  VAR_16 = VAR_19->can_ifindex;

  if (VAR_16) {
   struct net_device *VAR_20;

   VAR_20 = FUNC_7(&VAR_9, VAR_16);
   if (!VAR_20)
    return -VAR_4;

   if (VAR_20->type != VAR_1) {
    FUNC_8(VAR_20);
    return -VAR_4;
   }

   FUNC_8(VAR_20);
  }
 }



 VAR_18 = FUNC_10((u8 *)&VAR_17, VAR_12->msg_iov, VAR_6);
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_9(VAR_14);

 switch (VAR_17.opcode) {

 case 128:
  VAR_18 = FUNC_6(&VAR_17, VAR_12, VAR_16, VAR_14);
  break;

 case 132:
  VAR_18 = FUNC_3(&VAR_17, VAR_12, VAR_16, VAR_14);
  break;

 case 131:
  if (FUNC_1(&VAR_15->tx_ops, VAR_17.can_id, VAR_16))
   VAR_18 = VAR_6;
  else
   VAR_18 = -VAR_3;
  break;

 case 134:
  if (FUNC_0(&VAR_15->rx_ops, VAR_17.can_id, VAR_16))
   VAR_18 = VAR_6;
  else
   VAR_18 = -VAR_3;
  break;

 case 130:

  VAR_17.opcode = VAR_8;
  VAR_18 = FUNC_2(&VAR_15->tx_ops, &VAR_17, VAR_16);
  break;

 case 133:

  VAR_17.opcode = VAR_7;
  VAR_18 = FUNC_2(&VAR_15->rx_ops, &VAR_17, VAR_16);
  break;

 case 129:

  if ((VAR_17.nframes != 1) || (VAR_13 != VAR_2 + VAR_6))
   VAR_18 = -VAR_3;
  else
   VAR_18 = FUNC_5(VAR_12, VAR_16, VAR_14);
  break;

 default:
  VAR_18 = -VAR_3;
  break;
 }

 FUNC_11(VAR_14);

 return VAR_18;
}
