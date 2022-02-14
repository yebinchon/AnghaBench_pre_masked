
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_msg {int dummy; } ;
struct socket {scalar_t__ state; struct sock* sk; } ;
struct sockaddr_tipc {scalar_t__ addrtype; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_receive_queue; int sk_rcvtimeo; int * sk_sleep; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int msg_namelen; struct sockaddr* msg_name; int * member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct socket*,struct tipc_msg*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int *,struct socket*,struct msghdr*,int ) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int,int ) ;

__attribute__((used)) static int FUNC_11(struct socket *VAR_15, struct sockaddr *VAR_16, int VAR_17,
     int VAR_18)
{
 struct sock *VAR_19 = VAR_15->sk;
 struct sockaddr_tipc *VAR_20 = (struct sockaddr_tipc *)VAR_16;
 struct msghdr VAR_21 = {((void*)0),};
 struct sk_buff *VAR_22;
 struct tipc_msg *VAR_23;
 int VAR_24;

 FUNC_3(VAR_19);



 if (VAR_15->state == VAR_12) {
  VAR_24 = -VAR_4;
  goto exit;
 }



 if (VAR_18 & VAR_7) {
  VAR_24 = -VAR_6;
  goto exit;
 }



 if (VAR_15->state == VAR_11) {
  VAR_24 = -VAR_4;
  goto exit;
 }
 if (VAR_15->state == VAR_9) {
  VAR_24 = -VAR_0;
  goto exit;
 }
 if (VAR_15->state != VAR_13) {
  VAR_24 = -VAR_3;
  goto exit;
 }
 if (VAR_20->addrtype == VAR_14) {
  VAR_24 = -VAR_2;
  goto exit;
 }



 FUNC_5(VAR_19);



 VAR_21.msg_name = VAR_16;
 VAR_21.msg_namelen = VAR_17;
 VAR_24 = FUNC_7(((void*)0), VAR_15, &VAR_21, 0);
 if (VAR_24 < 0) {
  goto exit;
 }



 FUNC_6(VAR_19);
 VAR_24 = FUNC_10(*VAR_19->sk_sleep,
   (!FUNC_9(&VAR_19->sk_receive_queue) ||
   (VAR_15->state != VAR_9)),
   VAR_19->sk_rcvtimeo);
 FUNC_3(VAR_19);

 if (VAR_24 > 0) {
  VAR_22 = FUNC_8(&VAR_19->sk_receive_queue);
  if (VAR_22 != ((void*)0)) {
   VAR_23 = FUNC_2(VAR_22);
   VAR_24 = FUNC_1(VAR_15, VAR_23);
   if (!VAR_24) {
    if (!FUNC_4(VAR_23))
     FUNC_0(VAR_19);
   }
  } else {
   if (VAR_15->state == VAR_8) {
    VAR_24 = -VAR_3;
   } else {
    VAR_24 = -VAR_1;
   }
  }
 } else {
  if (VAR_24 == 0)
   VAR_24 = -VAR_5;
  else
   ;
  VAR_15->state = VAR_10;
 }

exit:
 FUNC_6(VAR_19);
 return VAR_24;
}
