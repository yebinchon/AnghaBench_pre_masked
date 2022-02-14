
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_err; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct rfcomm_session {int initiator; int state; struct socket* sock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct rfcomm_session*,int ,int ) ;
 int FUNC_1 (struct rfcomm_session*,struct sk_buff*) ;
 int FUNC_2 (struct rfcomm_session*,int ) ;
 int FUNC_3 (struct rfcomm_session*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct rfcomm_session *VAR_1)
{
 struct socket *VAR_2 = VAR_1->sock;
 struct sock *VAR_3 = VAR_2->sk;
 struct sk_buff *VAR_4;

 FUNC_0("session %p state %ld qlen %d", VAR_1, VAR_1->state, FUNC_6(&VAR_3->sk_receive_queue));


 while ((VAR_4 = FUNC_4(&VAR_3->sk_receive_queue))) {
  FUNC_5(VAR_4);
  FUNC_1(VAR_1, VAR_4);
 }

 if (VAR_3->sk_state == VAR_0) {
  if (!VAR_1->initiator)
   FUNC_3(VAR_1);

  FUNC_2(VAR_1, VAR_3->sk_err);
 }
}
