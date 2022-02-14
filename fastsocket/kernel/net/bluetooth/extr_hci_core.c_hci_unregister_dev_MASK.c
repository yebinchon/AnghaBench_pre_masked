
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ rfkill; int * reassembly; int list; int type; int name; } ;


 int FUNC_0 (char*,struct hci_dev*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int VAR_1 ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct hci_dev *VAR_2)
{
 int VAR_3;

 FUNC_0("%p name %s type %d", VAR_2, VAR_2->name, VAR_2->type);

 FUNC_9(&VAR_1);
 FUNC_6(&VAR_2->list);
 FUNC_10(&VAR_1);

 FUNC_2(VAR_2);

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  FUNC_5(VAR_2->reassembly[VAR_3]);

 FUNC_3(VAR_2, VAR_0);

 if (VAR_2->rfkill) {
  FUNC_8(VAR_2->rfkill);
  FUNC_7(VAR_2->rfkill);
 }

 FUNC_4(VAR_2);

 FUNC_1(VAR_2);

 return 0;
}
