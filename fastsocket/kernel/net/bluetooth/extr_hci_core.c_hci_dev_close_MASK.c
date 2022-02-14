
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (struct hci_dev*) ;
 struct hci_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*) ;

int FUNC_3(__u16 VAR_1)
{
 struct hci_dev *VAR_2;
 int VAR_3;

 if (!(VAR_2 = FUNC_1(VAR_1)))
  return -VAR_0;
 VAR_3 = FUNC_0(VAR_2);
 FUNC_2(VAR_2);
 return VAR_3;
}
