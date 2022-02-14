
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_port {int ref; } ;
struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ handle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 int FUNC_12 (struct sk_buff*,int ) ;
 struct tipc_port* FUNC_13 (struct sock*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(struct socket *VAR_6)
{
 struct sock *VAR_7 = VAR_6->sk;
 struct tipc_port *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;






 if (VAR_7 == ((void*)0))
  return 0;

 VAR_8 = FUNC_13(VAR_7);
 FUNC_6(VAR_7);






 while (VAR_6->state != VAR_2) {
  VAR_9 = FUNC_1(&VAR_7->sk_receive_queue);
  if (VAR_9 == ((void*)0))
   break;
  FUNC_2(&VAR_4);
  if (FUNC_0(VAR_9)->handle != FUNC_7(FUNC_4(VAR_9)))
   FUNC_3(VAR_9);
  else {
   if ((VAR_6->state == VAR_1) ||
       (VAR_6->state == VAR_0)) {
    VAR_6->state = VAR_2;
    FUNC_11(VAR_8->ref);
   }
   FUNC_12(VAR_9, VAR_3);
  }
 }






 VAR_10 = FUNC_10(VAR_8->ref);



 FUNC_5(VAR_7);



 VAR_6->state = VAR_2;
 FUNC_8(VAR_7);

 FUNC_9(VAR_7);
 VAR_6->sk = ((void*)0);

 FUNC_2(&VAR_5);
 return VAR_10;
}
