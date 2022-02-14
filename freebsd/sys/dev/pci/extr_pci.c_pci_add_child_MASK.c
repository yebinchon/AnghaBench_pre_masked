
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct pci_devinfo {TYPE_1__ cfg; int resources; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,struct pci_devinfo*) ;
 int FUNC_3 (int ,struct pci_devinfo*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,struct pci_devinfo*) ;
 int FUNC_6 (int ,struct pci_devinfo*,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (struct pci_devinfo*) ;
 int FUNC_9 (int *) ;

void
FUNC_10(device_t VAR_2, struct pci_devinfo *VAR_3)
{
 device_t VAR_4;

 VAR_3->cfg.dev = VAR_4 = FUNC_1(VAR_2, ((void*)0), -1);
 FUNC_2(VAR_4, VAR_3);
 FUNC_9(&VAR_3->resources);
 FUNC_6(VAR_4, VAR_3, 0);
 FUNC_5(VAR_4, VAR_3);
 FUNC_8(VAR_3);
 FUNC_4(VAR_2, VAR_4, 0, 0);
 FUNC_7(VAR_3->cfg.dev);

 if (VAR_1)
  FUNC_3(VAR_4, VAR_3);

 FUNC_0(VAR_0, VAR_3->cfg.dev);
}
