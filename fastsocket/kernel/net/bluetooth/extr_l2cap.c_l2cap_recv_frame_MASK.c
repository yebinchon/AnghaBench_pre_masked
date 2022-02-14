
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct l2cap_hdr {int len; int cid; } ;
struct l2cap_conn {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;


 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct l2cap_conn*,int ,struct sk_buff*) ;
 int FUNC_5 (struct l2cap_conn*,scalar_t__,struct sk_buff*) ;
 int FUNC_6 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct l2cap_conn *VAR_1, struct sk_buff *VAR_2)
{
 struct l2cap_hdr *VAR_3 = (void *) VAR_2->data;
 u16 VAR_4, VAR_5;
 __le16 VAR_6;

 FUNC_7(VAR_2, VAR_0);
 VAR_4 = FUNC_1(VAR_3->cid);
 VAR_5 = FUNC_1(VAR_3->len);

 if (VAR_5 != VAR_2->len) {
  FUNC_3(VAR_2);
  return;
 }

 FUNC_0("len %d, cid 0x%4.4x", VAR_5, VAR_4);

 switch (VAR_4) {
 case 128:
  FUNC_6(VAR_1, VAR_2);
  break;

 case 129:
  VAR_6 = FUNC_2(VAR_2->data);
  FUNC_7(VAR_2, 2);
  FUNC_4(VAR_1, VAR_6, VAR_2);
  break;

 default:
  FUNC_5(VAR_1, VAR_4, VAR_2);
  break;
 }
}
