
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hci_dev {int raw_q; int sco_cnt; int acl_cnt; int name; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sk_buff* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_1)
{
 struct hci_dev *VAR_2 = (struct hci_dev *) VAR_1;
 struct sk_buff *VAR_3;

 FUNC_5(&VAR_0);

 FUNC_0("%s acl %d sco %d", VAR_2->name, VAR_2->acl_cnt, VAR_2->sco_cnt);



 FUNC_1(VAR_2);

 FUNC_3(VAR_2);

 FUNC_2(VAR_2);


 while ((VAR_3 = FUNC_7(&VAR_2->raw_q)))
  FUNC_4(VAR_3);

 FUNC_6(&VAR_0);
}
