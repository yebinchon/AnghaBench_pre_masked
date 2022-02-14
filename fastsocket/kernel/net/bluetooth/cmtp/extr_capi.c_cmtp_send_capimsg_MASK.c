
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; int len; scalar_t__ cb; } ;
struct cmtp_session {int transmit; } ;
struct cmtp_scb {int id; int data; } ;


 int FUNC_0 (char*,struct cmtp_session*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct cmtp_session*) ;
 int FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct cmtp_session *VAR_1, struct sk_buff *VAR_2)
{
 struct cmtp_scb *VAR_3 = (void *) VAR_2->cb;

 FUNC_0("session %p skb %p len %d", VAR_1, VAR_2, VAR_2->len);

 VAR_3->id = -1;
 VAR_3->data = (FUNC_1(VAR_2->data) == VAR_0);

 FUNC_3(&VAR_1->transmit, VAR_2);

 FUNC_2(VAR_1);
}
