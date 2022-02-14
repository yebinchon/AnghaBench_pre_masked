
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct socket {scalar_t__ state; } ;
struct sock {int sk_sleep; int sk_receive_queue; struct socket* sk_socket; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct tipc_msg* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*,char*) ;
 scalar_t__ FUNC_8 (struct tipc_msg*) ;
 scalar_t__ FUNC_9 (struct tipc_msg*) ;
 scalar_t__ FUNC_10 (struct tipc_msg*,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int VAR_9 ;
 int FUNC_13 (struct sock*) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static u32 FUNC_17(struct sock *VAR_10, struct sk_buff *VAR_11)
{
 struct socket *VAR_12 = VAR_10->sk_socket;
 struct tipc_msg *VAR_13 = FUNC_4(VAR_11);
 u32 VAR_14;
 if (VAR_12->state == VAR_5) {
  if (FUNC_5(VAR_13)) {
   FUNC_7(VAR_13, "dispatch filter 1\n");
   return VAR_6;
  }
 } else {
  if (FUNC_9(VAR_13)) {
   FUNC_7(VAR_13, "dispatch filter 2\n");
   return VAR_6;
  }
  if (VAR_12->state == VAR_1) {
   if (!FUNC_5(VAR_13)) {
    FUNC_7(VAR_13, "dispatch filter 3\n");
    return VAR_6;
   }
  }
  else if (VAR_12->state == VAR_2) {
   if (!FUNC_5(VAR_13) && (FUNC_8(VAR_13) == 0)) {
    FUNC_7(VAR_13, "dispatch filter 4\n");
    return VAR_6;
   }
  }
  else if (VAR_12->state == VAR_4) {
   if (FUNC_5(VAR_13) || FUNC_8(VAR_13)) {
    FUNC_7(VAR_13, "dispatch filter 5\n");
    return VAR_6;
   }
  }
  else if (VAR_12->state == VAR_3) {
   FUNC_7(VAR_13, "dispatch filter 6\n");
   return VAR_6;
  }
  else {
   if (FUNC_5(VAR_13) || FUNC_8(VAR_13)) {
    FUNC_7(VAR_13, "dispatch filter 7\n");
    return VAR_6;
   }
  }
 }



 VAR_14 = (u32)FUNC_3(&VAR_9);
 if (FUNC_14(VAR_14 >= VAR_0)) {
  if (FUNC_10(VAR_13, VAR_14, VAR_0))
   return VAR_7;
 }
 VAR_14 = FUNC_11(&VAR_10->sk_receive_queue);
 if (FUNC_14(VAR_14 >= (VAR_0 / 2))) {
  if (FUNC_10(VAR_13, VAR_14, VAR_0 / 2))
   return VAR_7;
 }



 FUNC_7(VAR_13, "<DISP<: ");
 FUNC_0(VAR_11)->handle = FUNC_6(VAR_13);
 FUNC_2(&VAR_9);
 FUNC_1(&VAR_10->sk_receive_queue, VAR_11);



 if (FUNC_14(FUNC_8(VAR_13) && (VAR_12->state == VAR_1))) {
  VAR_12->state = VAR_3;
  FUNC_12(FUNC_13(VAR_10));
 }

 if (FUNC_15(VAR_10->sk_sleep))
  FUNC_16(VAR_10->sk_sleep);
 return VAR_8;
}
