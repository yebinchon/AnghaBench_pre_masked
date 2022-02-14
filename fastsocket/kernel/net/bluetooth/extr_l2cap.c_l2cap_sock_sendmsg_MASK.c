
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_type; scalar_t__ sk_state; struct sk_buff* sk_send_head; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct l2cap_pinfo {int mode; size_t omtu; size_t max_pdu_size; } ;
struct kiocb {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sock*,struct msghdr*,size_t) ;
 struct sk_buff* FUNC_6 (struct sock*,struct msghdr*,size_t) ;
 struct sk_buff* FUNC_7 (struct sock*,struct msghdr*,size_t,int ,int ) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (struct sock*) ;
 struct l2cap_pinfo* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,struct msghdr*,size_t) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;

__attribute__((used)) static int FUNC_16(struct kiocb *VAR_8, struct socket *VAR_9, struct msghdr *VAR_10, size_t VAR_11)
{
 struct sock *VAR_12 = VAR_9->sk;
 struct l2cap_pinfo *VAR_13 = FUNC_10(VAR_12);
 struct sk_buff *VAR_14;
 u16 VAR_15;
 int VAR_16;

 FUNC_0("sock %p, sk %p", VAR_9, VAR_12);

 VAR_16 = FUNC_15(VAR_12);
 if (VAR_16)
  return VAR_16;

 if (VAR_10->msg_flags & VAR_5)
  return -VAR_3;


 if (VAR_12->sk_type == VAR_7 && VAR_13->mode == 130
   && VAR_11 > VAR_13->omtu)
  return -VAR_1;

 FUNC_13(VAR_12);

 if (VAR_12->sk_state != VAR_0) {
  VAR_16 = -VAR_2;
  goto done;
 }


 if (VAR_12->sk_type == VAR_6) {
  VAR_14 = FUNC_6(VAR_12, VAR_10, VAR_11);
  VAR_16 = FUNC_8(VAR_12, VAR_14);
  goto done;
 }

 switch (VAR_13->mode) {
 case 130:

  VAR_14 = FUNC_5(VAR_12, VAR_10, VAR_11);
  if (FUNC_1(VAR_14)) {
   VAR_16 = FUNC_2(VAR_14);
   goto done;
  }

  VAR_16 = FUNC_8(VAR_12, VAR_14);
  if (!VAR_16)
   VAR_16 = VAR_11;
  break;

 case 129:
 case 128:

  if (VAR_11 <= VAR_13->max_pdu_size) {
   VAR_15 = VAR_4;
   VAR_14 = FUNC_7(VAR_12, VAR_10, VAR_11, VAR_15, 0);
   if (FUNC_1(VAR_14)) {
    VAR_16 = FUNC_2(VAR_14);
    goto done;
   }
   FUNC_4(FUNC_3(VAR_12), VAR_14);
   if (VAR_12->sk_send_head == ((void*)0))
    VAR_12->sk_send_head = VAR_14;
  } else {

   VAR_16 = FUNC_11(VAR_12, VAR_10, VAR_11);
   if (VAR_16 < 0)
    goto done;
  }

  if (VAR_13->mode == 128)
   VAR_16 = FUNC_12(VAR_12);
  else
   VAR_16 = FUNC_9(VAR_12);

  if (!VAR_16)
   VAR_16 = VAR_11;
  break;

 default:
  FUNC_0("bad state %1.1x", VAR_13->mode);
  VAR_16 = -VAR_1;
 }

done:
 FUNC_14(VAR_12);
 return VAR_16;
}
