
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_dev {int dev; } ;
struct TYPE_2__ {int * parent; int class; int * type; } ;
struct hci_conn {int work_del; int work_add; TYPE_1__ dev; struct hci_dev* hdev; } ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct hci_conn *VAR_4)
{
 struct hci_dev *VAR_5 = VAR_4->hdev;

 FUNC_0("conn %p", VAR_4);

 VAR_4->dev.type = &VAR_2;
 VAR_4->dev.class = VAR_1;
 VAR_4->dev.parent = &VAR_5->dev;

 FUNC_2(&VAR_4->dev);

 FUNC_1(&VAR_4->work_add, VAR_0);
 FUNC_1(&VAR_4->work_del, VAR_3);
}
