
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct hci_dev {scalar_t__ acl_cnt; scalar_t__ acl_last_tx; int flags; int name; } ;
struct hci_conn {int sent; int data_q; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sk_buff*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_conn*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ,int*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_8(struct hci_dev *VAR_4)
{
 struct hci_conn *VAR_5;
 struct sk_buff *VAR_6;
 int VAR_7;

 FUNC_0("%s", VAR_4->name);

 if (!FUNC_6(VAR_1, &VAR_4->flags)) {


  if (!VAR_4->acl_cnt && FUNC_7(VAR_3, VAR_4->acl_last_tx + VAR_2 * 45))
   FUNC_1(VAR_4);
 }

 while (VAR_4->acl_cnt && (VAR_5 = FUNC_3(VAR_4, VAR_0, &VAR_7))) {
  while (VAR_7-- && (VAR_6 = FUNC_5(&VAR_5->data_q))) {
   FUNC_0("skb %p len %d", VAR_6, VAR_6->len);

   FUNC_2(VAR_5);

   FUNC_4(VAR_6);
   VAR_4->acl_last_tx = VAR_3;

   VAR_4->acl_cnt--;
   VAR_5->sent++;
  }
 }
}
