
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dev {int dst; int src; } ;
struct hci_dev {int dummy; } ;
struct device {int dummy; } ;
struct hci_conn {struct device dev; } ;


 int VAR_0 ;
 struct hci_conn* FUNC_0 (struct hci_dev*,int ,int *) ;
 int FUNC_1 (struct hci_dev*) ;
 struct hci_dev* FUNC_2 (int *,int *) ;

__attribute__((used)) static struct device *FUNC_3(struct rfcomm_dev *VAR_1)
{
 struct hci_dev *VAR_2;
 struct hci_conn *VAR_3;

 VAR_2 = FUNC_2(&VAR_1->dst, &VAR_1->src);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_2, VAR_0, &VAR_1->dst);

 FUNC_1(VAR_2);

 return VAR_3 ? &VAR_3->dev : ((void*)0);
}
