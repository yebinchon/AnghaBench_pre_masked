
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* pdrv; } ;
typedef int device_t ;
struct TYPE_2__ {int (* shutdown ) (struct pci_dev*) ;} ;


 int VAR_0 ;
 struct pci_dev* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct pci_dev *VAR_2;

 FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2->pdrv->shutdown != ((void*)0))
  VAR_2->pdrv->shutdown(VAR_2);
 return (0);
}
