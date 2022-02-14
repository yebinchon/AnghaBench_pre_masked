
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; int class; int * type; } ;
struct hci_dev {int name; int parent; int type; struct device dev; } ;


 int FUNC_0 (char*,struct hci_dev*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct hci_dev*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct device*) ;

int FUNC_4(struct hci_dev *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 int VAR_4;

 FUNC_0("%p name %s type %d", VAR_2, VAR_2->name, VAR_2->type);

 VAR_3->type = &VAR_1;
 VAR_3->class = VAR_0;
 VAR_3->parent = VAR_2->parent;

 FUNC_2(VAR_3, "%s", VAR_2->name);

 FUNC_1(VAR_3, VAR_2);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
