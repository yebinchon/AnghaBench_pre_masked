
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct hidp_session {int hid; int input; } ;


 int FUNC_0 (char*,struct hidp_session*,struct sk_buff*,int ,unsigned char) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hidp_session*,int,int *,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct hidp_session*,struct sk_buff*) ;
 int FUNC_4 (struct hidp_session*) ;

__attribute__((used)) static void FUNC_5(struct hidp_session *VAR_3, struct sk_buff *VAR_4,
    unsigned char VAR_5)
{
 FUNC_0("session %p skb %p len %d param 0x%02x", VAR_3, VAR_4, VAR_4->len, VAR_5);

 switch (VAR_5) {
 case 130:
  FUNC_4(VAR_3);

  if (VAR_3->input)
   FUNC_3(VAR_3, VAR_4);

  if (VAR_3->hid)
   FUNC_2(VAR_3->hid, VAR_2, VAR_4->data, VAR_4->len, 0);

  break;

 case 129:
 case 128:
 case 131:
  break;

 default:
  FUNC_1(VAR_3,
   VAR_1 | VAR_0, ((void*)0), 0);
 }
}
