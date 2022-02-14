
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int node; int ref; } ;
struct tipc_sock {TYPE_1__ peer_name; struct tipc_port* p; } ;
struct tipc_port {int conn_instance; int conn_type; int ref; } ;
struct tipc_msg {int dummy; } ;
struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int sk_receive_queue; int * sk_sleep; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int * member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 struct tipc_msg* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*,char*) ;
 int FUNC_7 (struct tipc_msg*) ;
 scalar_t__ FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (int *,struct socket*,struct msghdr*,int ) ;
 struct sk_buff* FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (int ,TYPE_1__*) ;
 int FUNC_20 (int ,struct socket*,int ,int ) ;
 int FUNC_21 (int ,int ) ;
 struct tipc_sock* FUNC_22 (struct sock*) ;
 int FUNC_23 (int ,int) ;

__attribute__((used)) static int FUNC_24(struct socket *VAR_7, struct socket *VAR_8, int VAR_9)
{
 struct sock *VAR_10 = VAR_7->sk;
 struct sk_buff *VAR_11;
 int VAR_12;

 FUNC_4(VAR_10);

 if (VAR_7->state == VAR_6) {
  VAR_12 = -VAR_1;
  goto exit;
 }
 if (VAR_7->state != VAR_5) {
  VAR_12 = -VAR_0;
  goto exit;
 }

 while (FUNC_17(&VAR_10->sk_receive_queue)) {
  if (VAR_9 & VAR_3) {
   VAR_12 = -VAR_2;
   goto exit;
  }
  FUNC_14(VAR_10);
  VAR_12 = FUNC_23(*VAR_10->sk_sleep,
    (!FUNC_17(&VAR_10->sk_receive_queue)));
  FUNC_4(VAR_10);
  if (VAR_12)
   goto exit;
 }

 VAR_11 = FUNC_16(&VAR_10->sk_receive_queue);

 VAR_12 = FUNC_20(FUNC_18(VAR_7->sk), VAR_8, 0, 0);
 if (!VAR_12) {
  struct sock *VAR_13 = VAR_8->sk;
  struct tipc_sock *VAR_14 = FUNC_22(VAR_13);
  struct tipc_port *VAR_15 = VAR_14->p;
  u32 VAR_16 = VAR_15->ref;
  struct tipc_msg *VAR_17 = FUNC_3(VAR_11);

  FUNC_4(VAR_13);






  FUNC_13(VAR_13);



  VAR_14->peer_name.ref = FUNC_12(VAR_17);
  VAR_14->peer_name.node = FUNC_11(VAR_17);
  FUNC_19(VAR_16, &VAR_14->peer_name);
  VAR_8->state = VAR_4;

  FUNC_21(VAR_16, FUNC_7(VAR_17));
  if (FUNC_8(VAR_17)) {
   VAR_15->conn_type = FUNC_10(VAR_17);
   VAR_15->conn_instance = FUNC_9(VAR_17);
  }






  FUNC_6(VAR_17,"<ACC<: ");
  if (!FUNC_5(VAR_17)) {
   struct msghdr VAR_18 = {((void*)0),};

   FUNC_2(VAR_10);
   FUNC_15(((void*)0), VAR_8, &VAR_18, 0);
  } else {
   FUNC_0(&VAR_10->sk_receive_queue);
   FUNC_1(&VAR_13->sk_receive_queue, VAR_11);
  }
  FUNC_14(VAR_13);
 }
exit:
 FUNC_14(VAR_10);
 return VAR_12;
}
