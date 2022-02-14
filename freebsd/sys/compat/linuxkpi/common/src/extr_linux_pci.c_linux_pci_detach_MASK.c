
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; int links; int bus; TYPE_1__* pdrv; } ;
typedef int device_t ;
struct TYPE_2__ {int (* remove ) (struct pci_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dev* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3)
{
 struct pci_dev *VAR_4;

 FUNC_4(VAR_1);
 VAR_4 = FUNC_0(VAR_3);

 VAR_4->pdrv->remove(VAR_4);

 FUNC_2(VAR_4->bus, VAR_0);
 FUNC_3(VAR_4);

 FUNC_7(&VAR_2);
 FUNC_5(&VAR_4->links);
 FUNC_8(&VAR_2);
 FUNC_1(VAR_3, ((void*)0));
 FUNC_6(&VAR_4->dev);

 return (0);
}
