
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct irlap_cb {int vs; int window; int caddr; int ack_required; int wx_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct irlap_cb*,struct sk_buff*,int ) ;
 int FUNC_1 (struct irlap_cb*,int ,int ,int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,struct sk_buff*) ;

void FUNC_5(struct irlap_cb *VAR_4, struct sk_buff *VAR_5)
{
 struct sk_buff *VAR_6 = ((void*)0);


 if (VAR_5->data[1] == VAR_2) {





  VAR_5->data[1] = VAR_2 | (VAR_4->vs << 1);





  FUNC_3(VAR_5);
  FUNC_4(&VAR_4->wx_list, VAR_5);

  VAR_6 = FUNC_2(VAR_5, VAR_1);
  if (VAR_6 == ((void*)0)) {
   return;
  }

  VAR_4->vs = (VAR_4->vs + 1) % 8;
  VAR_4->ack_required = VAR_0;
  VAR_4->window -= 1;

  FUNC_0(VAR_4, VAR_6, VAR_3);
 } else {
  FUNC_1(VAR_4, FUNC_3(VAR_5), VAR_4->caddr, VAR_3);
  VAR_4->window -= 1;
 }
}
