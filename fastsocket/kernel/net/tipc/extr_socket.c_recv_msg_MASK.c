
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_port {scalar_t__ conn_unacked; int ref; } ;
struct tipc_msg {int dummy; } ;
struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int sk_receive_queue; int * sk_sleep; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int msg_iovlen; scalar_t__ msg_control; TYPE_1__* msg_iov; int msg_flags; scalar_t__ msg_namelen; } ;
struct kiocb {int dummy; } ;
struct TYPE_2__ {int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct msghdr*,struct tipc_msg*,struct tipc_port*) ;
 int FUNC_2 (struct socket*,struct tipc_msg*) ;
 struct tipc_msg* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct tipc_msg*) ;
 unsigned int FUNC_8 (struct tipc_msg*) ;
 scalar_t__ FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct msghdr*,struct tipc_msg*) ;
 struct sk_buff* FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int ,scalar_t__) ;
 struct tipc_port* FUNC_15 (struct sock*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int ,int) ;

__attribute__((used)) static int FUNC_18(struct kiocb *VAR_15, struct socket *VAR_16,
      struct msghdr *VAR_17, size_t VAR_18, int VAR_19)
{
 struct sock *VAR_20 = VAR_16->sk;
 struct tipc_port *VAR_21 = FUNC_15(VAR_20);
 struct sk_buff *VAR_22;
 struct tipc_msg *VAR_23;
 unsigned int VAR_24;
 u32 VAR_25;
 int VAR_26;



 if (VAR_17->msg_iovlen != 1)
  return -VAR_4;

 if (FUNC_16(!VAR_18))
  return -VAR_2;

 VAR_17->msg_namelen = 0;
 FUNC_6(VAR_20);

 if (FUNC_16(VAR_16->state == VAR_12)) {
  VAR_26 = -VAR_3;
  goto exit;
 }

restart:



 while (FUNC_13(&VAR_20->sk_receive_queue)) {
  if (VAR_16->state == VAR_10) {
   VAR_26 = -VAR_3;
   goto exit;
  }
  if (VAR_19 & VAR_6) {
   VAR_26 = -VAR_5;
   goto exit;
  }
  FUNC_10(VAR_20);
  VAR_26 = FUNC_17(*VAR_20->sk_sleep,
   (!FUNC_13(&VAR_20->sk_receive_queue) ||
    (VAR_16->state == VAR_10)));
  FUNC_6(VAR_20);
  if (VAR_26)
   goto exit;
 }



 VAR_22 = FUNC_12(&VAR_20->sk_receive_queue);
 VAR_23 = FUNC_3(VAR_22);
 VAR_24 = FUNC_8(VAR_23);
 VAR_25 = FUNC_9(VAR_23);



 if (FUNC_16(VAR_16->state == VAR_9)) {
  VAR_26 = FUNC_2(VAR_16, VAR_23);
  if (VAR_26)
   goto exit;
 }



 if ((!VAR_24) && (!VAR_25)) {
  FUNC_0(VAR_20);
  goto restart;
 }



 FUNC_11(VAR_17, VAR_23);



 VAR_26 = FUNC_1(VAR_17, VAR_23, VAR_21);
 if (VAR_26)
  goto exit;



 if (!VAR_25) {
  if (FUNC_16(VAR_18 < VAR_24)) {
   VAR_24 = VAR_18;
   VAR_17->msg_flags |= VAR_8;
  }
  if (FUNC_16(FUNC_4(VAR_17->msg_iov->iov_base, FUNC_7(VAR_23),
       VAR_24))) {
   VAR_26 = -VAR_1;
   goto exit;
  }
  VAR_26 = VAR_24;
 } else {
  if ((VAR_16->state == VAR_11) ||
      ((VAR_25 == VAR_13) || VAR_17->msg_control))
   VAR_26 = 0;
  else
   VAR_26 = -VAR_0;
 }



 if (FUNC_5(!(VAR_19 & VAR_7))) {
  if ((VAR_16->state != VAR_11) &&
      (++VAR_21->conn_unacked >= VAR_14))
   FUNC_14(VAR_21->ref, VAR_21->conn_unacked);
  FUNC_0(VAR_20);
 }
exit:
 FUNC_10(VAR_20);
 return VAR_26;
}
