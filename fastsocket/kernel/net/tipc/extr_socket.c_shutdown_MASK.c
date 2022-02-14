
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_port {int ref; } ;
struct socket {int state; struct sock* sk; } ;
struct sock {int sk_sleep; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (int ) ;
 struct tipc_port* FUNC_12 (struct sock*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct socket *VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_5->sk;
 struct tipc_port *VAR_8 = FUNC_12(VAR_7);
 struct sk_buff *VAR_9;
 int VAR_10;

 if (VAR_6 != VAR_2)
  return -VAR_0;

 FUNC_6(VAR_7);

 switch (VAR_5->state) {
 case 129:
 case 130:


restart:
  VAR_9 = FUNC_1(&VAR_7->sk_receive_queue);
  if (VAR_9) {
   FUNC_2(&VAR_4);
   if (FUNC_0(VAR_9)->handle != FUNC_7(FUNC_4(VAR_9))) {
    FUNC_3(VAR_9);
    goto restart;
   }
   FUNC_9(VAR_8->ref);
   FUNC_10(VAR_9, VAR_3);
  } else {
   FUNC_11(VAR_8->ref);
  }

  VAR_5->state = 128;



 case 128:



  FUNC_5(VAR_7);
  if (FUNC_13(VAR_7->sk_sleep))
   FUNC_14(VAR_7->sk_sleep);
  VAR_10 = 0;
  break;

 default:
  VAR_10 = -VAR_1;
 }

 FUNC_8(VAR_7);
 return VAR_10;
}
