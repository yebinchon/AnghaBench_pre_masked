
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;
struct hci_cp_sniff_mode {int handle; } ;
struct hci_conn {int pend; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 struct hci_cp_sniff_mode* FUNC_6 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_7(struct hci_dev *VAR_2, __u8 VAR_3)
{
 struct hci_cp_sniff_mode *VAR_4;
 struct hci_conn *VAR_5;

 FUNC_0("%s status 0x%x", VAR_2->name, VAR_3);

 if (!VAR_3)
  return;

 VAR_4 = FUNC_6(VAR_2, VAR_1);
 if (!VAR_4)
  return;

 FUNC_4(VAR_2);

 VAR_5 = FUNC_3(VAR_2, FUNC_1(VAR_4->handle));
 if (VAR_5)
  FUNC_2(VAR_0, &VAR_5->pend);

 FUNC_5(VAR_2);
}
