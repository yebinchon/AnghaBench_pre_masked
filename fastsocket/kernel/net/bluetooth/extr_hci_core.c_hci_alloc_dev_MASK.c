
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int driver_init; } ;


 int VAR_0 ;
 struct hci_dev* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

struct hci_dev *FUNC_2(void)
{
 struct hci_dev *VAR_1;

 VAR_1 = FUNC_0(sizeof(struct hci_dev), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_1(&VAR_1->driver_init);

 return VAR_1;
}
