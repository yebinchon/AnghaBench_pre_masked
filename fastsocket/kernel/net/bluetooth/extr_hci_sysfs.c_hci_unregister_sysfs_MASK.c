
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dev; int type; int name; } ;


 int FUNC_0 (char*,struct hci_dev*,int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hci_dev *VAR_0)
{
 FUNC_0("%p name %s type %d", VAR_0, VAR_0->name, VAR_0->type);

 FUNC_1(&VAR_0->dev);
}
