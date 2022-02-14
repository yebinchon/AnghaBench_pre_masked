
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct hidp_session {int intr_transmit; int intr_sock; int ctrl_transmit; int ctrl_sock; } ;


 int FUNC_0 (char*,struct hidp_session*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct hidp_session*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct hidp_session *VAR_0)
{
 struct sk_buff *VAR_1;

 FUNC_0("session %p", VAR_0);

 while ((VAR_1 = FUNC_4(&VAR_0->ctrl_transmit))) {
  if (FUNC_1(VAR_0->ctrl_sock, VAR_1->data, VAR_1->len) < 0) {
   FUNC_5(&VAR_0->ctrl_transmit, VAR_1);
   break;
  }

  FUNC_2(VAR_0);
  FUNC_3(VAR_1);
 }

 while ((VAR_1 = FUNC_4(&VAR_0->intr_transmit))) {
  if (FUNC_1(VAR_0->intr_sock, VAR_1->data, VAR_1->len) < 0) {
   FUNC_5(&VAR_0->intr_transmit, VAR_1);
   break;
  }

  FUNC_2(VAR_0);
  FUNC_3(VAR_1);
 }
}
