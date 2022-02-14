
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pm_message {int dummy; } ;
struct pci_dev {int dev; TYPE_2__* pdrv; } ;
struct dev_pm_ops {int (* suspend ) (int *) ;int (* suspend_late ) (int *) ;} ;
typedef int device_t ;
struct TYPE_3__ {struct dev_pm_ops* pm; } ;
struct TYPE_4__ {int (* suspend ) (struct pci_dev*,struct pm_message) ;TYPE_1__ driver; } ;


 int VAR_0 ;
 struct pci_dev* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,struct pm_message) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 const struct dev_pm_ops *VAR_2;
 struct pm_message VAR_3 = { };
 struct pci_dev *VAR_4;
 int VAR_5;

 VAR_5 = 0;
 FUNC_1(VAR_0);
 VAR_4 = FUNC_0(VAR_1);
 VAR_2 = VAR_4->pdrv->driver.pm;

 if (VAR_4->pdrv->suspend != ((void*)0))
  VAR_5 = -VAR_4->pdrv->suspend(VAR_4, VAR_3);
 else if (VAR_2 != ((void*)0) && VAR_2->suspend != ((void*)0)) {
  VAR_5 = -VAR_2->suspend(&VAR_4->dev);
  if (VAR_5 == 0 && VAR_2->suspend_late != ((void*)0))
   VAR_5 = -VAR_2->suspend_late(&VAR_4->dev);
 }
 return (VAR_5);
}
