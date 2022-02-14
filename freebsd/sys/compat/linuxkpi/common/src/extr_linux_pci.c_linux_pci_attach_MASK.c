
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource_list_entry {int start; } ;
struct pci_driver {int (* probe ) (struct pci_dev*,struct pci_device_id const*) ;scalar_t__ isdrm; } ;
struct TYPE_4__ {int subdevice; int subvendor; int vendor; int device; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
struct pci_device_id {int dummy; } ;
struct TYPE_5__ {int irq; int kobj; int irqents; int bsddev; TYPE_3__* parent; } ;
struct pci_dev {TYPE_2__ dev; int links; struct pci_bus* bus; int irq; struct pci_driver* pdrv; int revision; int class; int subsystem_device; int subsystem_vendor; int vendor; int device; int devfn; } ;
struct pci_bus {int domain; int number; struct pci_dev* self; } ;
typedef int device_t ;
struct TYPE_6__ {int kobj; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct pci_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct pci_dev* FUNC_5 (int ) ;
 int FUNC_6 (int ,struct pci_devinfo*) ;
 int FUNC_7 (struct pci_bus*,int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int VAR_6 ;
 struct pci_driver* FUNC_12 (int ,struct pci_device_id const**) ;
 struct resource_list_entry* FUNC_13 (struct pci_dev*,int ,int ) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 TYPE_3__ VAR_7 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 struct pci_bus* FUNC_19 (int,int ,int) ;
 int VAR_8 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int VAR_9 ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct pci_dev*,struct pci_device_id const*) ;

__attribute__((used)) static int
FUNC_30(device_t VAR_10)
{
 struct resource_list_entry *VAR_11;
 struct pci_bus *VAR_12;
 struct pci_dev *VAR_13;
 struct pci_devinfo *VAR_14;
 struct pci_driver *VAR_15;
 const struct pci_device_id *VAR_16;
 device_t VAR_17;
 int VAR_18;

 FUNC_16(VAR_5);

 VAR_15 = FUNC_12(VAR_10, &VAR_16);
 VAR_13 = FUNC_5(VAR_10);

 VAR_17 = FUNC_4(VAR_10);
 if (VAR_15->isdrm) {
  VAR_14 = FUNC_2(VAR_17);
  FUNC_6(VAR_10, VAR_14);
 } else {
  VAR_14 = FUNC_2(VAR_10);
 }

 VAR_13->dev.parent = &VAR_7;
 VAR_13->dev.bsddev = VAR_10;
 FUNC_0(&VAR_13->dev.irqents);
 VAR_13->devfn = FUNC_1(FUNC_25(VAR_10), FUNC_23(VAR_10));
 VAR_13->device = VAR_14->cfg.device;
 VAR_13->vendor = VAR_14->cfg.vendor;
 VAR_13->subsystem_vendor = VAR_14->cfg.subvendor;
 VAR_13->subsystem_device = VAR_14->cfg.subdevice;
 VAR_13->class = FUNC_21(VAR_10);
 VAR_13->revision = FUNC_24(VAR_10);
 VAR_13->pdrv = VAR_15;
 FUNC_9(&VAR_13->dev.kobj, &VAR_6);
 FUNC_11(&VAR_13->dev.kobj, FUNC_3(VAR_10));
 FUNC_8(&VAR_13->dev.kobj, &VAR_7.kobj,
     FUNC_10(&VAR_13->dev.kobj));
 VAR_11 = FUNC_13(VAR_13, VAR_4, 0);
 if (VAR_11 != ((void*)0))
  VAR_13->dev.irq = VAR_11->start;
 else
  VAR_13->dev.irq = VAR_0;
 VAR_13->irq = VAR_13->dev.irq;
 VAR_18 = FUNC_14(VAR_13);
 if (VAR_18)
  goto out_dma_init;

 VAR_12 = FUNC_19(sizeof(*VAR_12), VAR_1, VAR_2 | VAR_3);
 VAR_12->self = VAR_13;
 VAR_12->number = FUNC_20(VAR_10);
 VAR_12->domain = FUNC_22(VAR_10);
 VAR_13->bus = VAR_12;

 FUNC_27(&VAR_9);
 FUNC_17(&VAR_13->links, &VAR_8);
 FUNC_28(&VAR_9);

 VAR_18 = VAR_15->probe(VAR_13, VAR_16);
 if (VAR_18)
  goto out_probe;
 return (0);

out_probe:
 FUNC_7(VAR_13->bus, VAR_1);
 FUNC_15(VAR_13);
out_dma_init:
 FUNC_27(&VAR_9);
 FUNC_18(&VAR_13->links);
 FUNC_28(&VAR_9);
 FUNC_26(&VAR_13->dev);
 return (-VAR_18);
}
