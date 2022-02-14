
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_port {int ref; int lock; } ;
struct socket {int type; int state; struct proto_ops const* ops; } ;
struct sock {int sk_backlog_rcv; int sk_rcvtimeo; } ;
struct proto_ops {int dummy; } ;
struct net {int dummy; } ;
typedef int socket_state ;
struct TYPE_2__ {struct tipc_port* p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 struct net VAR_12 ;
 int FUNC_1 (int ) ;
 struct proto_ops VAR_13 ;
 struct proto_ops VAR_14 ;
 struct sock* FUNC_2 (struct net*,int ,int ,int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct socket*,struct sock*) ;
 int FUNC_5 (int ) ;
 struct proto_ops VAR_15 ;
 struct tipc_port* FUNC_6 (struct sock*,int *,int *,int ) ;
 int VAR_16 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 TYPE_1__* FUNC_9 (struct sock*) ;
 int VAR_17 ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_11(struct net *VAR_19, struct socket *VAR_20, int VAR_21,
         int VAR_22)
{
 const struct proto_ops *VAR_23;
 socket_state VAR_24;
 struct sock *VAR_25;
 struct tipc_port *VAR_26;



 if (VAR_19 != &VAR_12)
  return -VAR_2;

 if (FUNC_10(VAR_21 != 0))
  return -VAR_4;

 switch (VAR_20->type) {
 case 128:
  VAR_23 = &VAR_15;
  VAR_24 = VAR_8;
  break;
 case 129:
  VAR_23 = &VAR_14;
  VAR_24 = VAR_8;
  break;
 case 131:
 case 130:
  VAR_23 = &VAR_13;
  VAR_24 = VAR_7;
  break;
 default:
  return -VAR_5;
 }



 VAR_25 = FUNC_2(VAR_19, VAR_0, VAR_6, &VAR_16);
 if (VAR_25 == ((void*)0))
  return -VAR_3;



 VAR_26 = FUNC_6(VAR_25, &VAR_11, &VAR_18,
         VAR_9);
 if (FUNC_10(!VAR_26)) {
  FUNC_3(VAR_25);
  return -VAR_3;
 }



 VAR_20->ops = VAR_23;
 VAR_20->state = VAR_24;

 FUNC_4(VAR_20, VAR_25);
 VAR_25->sk_rcvtimeo = FUNC_1(VAR_1);
 VAR_25->sk_backlog_rcv = VAR_10;
 FUNC_9(VAR_25)->p = VAR_26;

 FUNC_5(VAR_26->lock);

 if (VAR_20->state == VAR_7) {
  FUNC_8(VAR_26->ref, 1);
  if (VAR_20->type == 131)
   FUNC_7(VAR_26->ref, 1);
 }

 FUNC_0(&VAR_17);
 return 0;
}
