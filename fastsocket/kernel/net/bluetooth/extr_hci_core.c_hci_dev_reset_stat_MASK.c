
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev_stats {int dummy; } ;
struct hci_dev {int stat; } ;
typedef int __u16 ;


 int VAR_0 ;
 struct hci_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(__u16 VAR_1)
{
 struct hci_dev *VAR_2;
 int VAR_3 = 0;

 if (!(VAR_2 = FUNC_0(VAR_1)))
  return -VAR_0;

 FUNC_2(&VAR_2->stat, 0, sizeof(struct hci_dev_stats));

 FUNC_1(VAR_2);

 return VAR_3;
}
