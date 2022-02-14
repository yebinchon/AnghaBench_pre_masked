
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_7__ {int pc_domain; int pc_bus; int pc_dev; int pc_func; } ;
struct TYPE_8__ {int pc_hdr; int pc_class; int pc_subclass; int pc_progif; int pc_revid; void* pc_device; void* pc_vendor; int pc_subdevice; int pc_subvendor; TYPE_1__ pc_sel; } ;
struct TYPE_9__ {int domain; int bus; int slot; int func; int cmdreg; int statreg; int baseclass; int subclass; int progif; int revid; int hdrtype; int cachelnsz; int lattimer; int intpin; int intline; int mfdev; void* device; void* vendor; int subdevice; int subvendor; int * iov; int maps; } ;
struct pci_devinfo {TYPE_2__ conf; TYPE_3__ cfg; } ;
typedef TYPE_3__ pcicfgregs ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct pci_devinfo*,int ) ;
 int VAR_13 ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_14 ;
 int FUNC_5 (int ,int,int,int,TYPE_3__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ,TYPE_3__*) ;

__attribute__((used)) static struct pci_devinfo *
FUNC_7(device_t VAR_17, device_t VAR_18, int VAR_19, int VAR_20, int VAR_21, int VAR_22,
    uint16_t VAR_23, uint16_t VAR_24)
{
 struct pci_devinfo *VAR_25;
 pcicfgregs *VAR_26;

 VAR_25 = FUNC_0(VAR_18);

 VAR_26 = &VAR_25->cfg;

 VAR_26->domain = VAR_19;
 VAR_26->bus = VAR_20;
 VAR_26->slot = VAR_21;
 VAR_26->func = VAR_22;
 VAR_26->vendor = VAR_23;
 VAR_26->device = VAR_24;
 VAR_26->cmdreg = FUNC_1(VAR_4, 2);
 VAR_26->statreg = FUNC_1(VAR_11, 2);
 VAR_26->baseclass = FUNC_1(VAR_3, 1);
 VAR_26->subclass = FUNC_1(VAR_12, 1);
 VAR_26->progif = FUNC_1(VAR_9, 1);
 VAR_26->revid = FUNC_1(VAR_10, 1);
 VAR_26->hdrtype = FUNC_1(VAR_5, 1);
 VAR_26->cachelnsz = FUNC_1(VAR_2, 1);
 VAR_26->lattimer = FUNC_1(VAR_8, 1);
 VAR_26->intpin = FUNC_1(VAR_7, 1);
 VAR_26->intline = FUNC_1(VAR_6, 1);

 VAR_26->mfdev = (VAR_26->hdrtype & VAR_0) != 0;
 VAR_26->hdrtype &= ~VAR_0;
 FUNC_2(&VAR_26->maps);

 VAR_26->iov = ((void*)0);

 FUNC_4(VAR_26);
 FUNC_5(VAR_17, VAR_20, VAR_21, VAR_22, VAR_26);

 if (FUNC_1(VAR_11, 2) & VAR_1)
  FUNC_6(VAR_17, VAR_26);

 FUNC_3(&VAR_13, VAR_25, VAR_15);

 VAR_25->conf.pc_sel.pc_domain = VAR_26->domain;
 VAR_25->conf.pc_sel.pc_bus = VAR_26->bus;
 VAR_25->conf.pc_sel.pc_dev = VAR_26->slot;
 VAR_25->conf.pc_sel.pc_func = VAR_26->func;
 VAR_25->conf.pc_hdr = VAR_26->hdrtype;

 VAR_25->conf.pc_subvendor = VAR_26->subvendor;
 VAR_25->conf.pc_subdevice = VAR_26->subdevice;
 VAR_25->conf.pc_vendor = VAR_26->vendor;
 VAR_25->conf.pc_device = VAR_26->device;

 VAR_25->conf.pc_class = VAR_26->baseclass;
 VAR_25->conf.pc_subclass = VAR_26->subclass;
 VAR_25->conf.pc_progif = VAR_26->progif;
 VAR_25->conf.pc_revid = VAR_26->revid;

 VAR_16++;
 VAR_14++;

 return (VAR_25);
}
