
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct hci_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct hci_conn*) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;

void FUNC_5(struct hci_dev *VAR_2)
{
 struct hci_conn *VAR_3;

 FUNC_0("hdev %s", VAR_2->name);

 FUNC_3(VAR_2);

 VAR_3 = FUNC_2(VAR_2, VAR_0, VAR_1);
 if (VAR_3)
  FUNC_1(VAR_3);

 FUNC_4(VAR_2);
}
