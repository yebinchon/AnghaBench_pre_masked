
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vendor; int device; int subvendor; int subdevice; int baseclass; int subclass; int progif; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;


 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int,int,int,int,int,int,int ) ;

int
FUNC_2(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct pci_devinfo *VAR_4;
 pcicfgregs *VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = &VAR_4->cfg;
 FUNC_1(VAR_2, VAR_3, "vendor=0x%04x device=0x%04x subvendor=0x%04x "
     "subdevice=0x%04x class=0x%02x%02x%02x", VAR_5->vendor, VAR_5->device,
     VAR_5->subvendor, VAR_5->subdevice, VAR_5->baseclass, VAR_5->subclass,
     VAR_5->progif);
 return (0);
}
