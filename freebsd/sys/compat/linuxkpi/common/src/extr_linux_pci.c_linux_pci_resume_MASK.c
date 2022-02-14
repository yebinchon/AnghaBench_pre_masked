
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; TYPE_2__* pdrv; } ;
struct dev_pm_ops {int (* resume ) (int *) ;int (* resume_early ) (int *) ;} ;
typedef int device_t ;
struct TYPE_3__ {struct dev_pm_ops* pm; } ;
struct TYPE_4__ {int (* resume ) (struct pci_dev*) ;TYPE_1__ driver; } ;


 int VAR_0 ;
 struct pci_dev* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 const struct dev_pm_ops *VAR_2;
 struct pci_dev *VAR_3;
 int VAR_4;

 VAR_4 = 0;
 FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 VAR_2 = VAR_3->pdrv->driver.pm;

 if (VAR_3->pdrv->resume != ((void*)0))
  VAR_4 = -VAR_3->pdrv->resume(VAR_3);
 else if (VAR_2 != ((void*)0) && VAR_2->resume != ((void*)0)) {
  if (VAR_2->resume_early != ((void*)0))
   VAR_4 = -VAR_2->resume_early(&VAR_3->dev);
  if (VAR_4 == 0 && VAR_2->resume != ((void*)0))
   VAR_4 = -VAR_2->resume(&VAR_3->dev);
 }
 return (VAR_4);
}
