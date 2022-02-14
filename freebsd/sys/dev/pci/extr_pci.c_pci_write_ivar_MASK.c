
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t intpin; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_devinfo* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t VAR_5)
{
 struct pci_devinfo *VAR_6;

 VAR_6 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 136:
  VAR_6->cfg.intpin = VAR_5;
  return (0);
 case 138:
 case 129:
 case 130:
 case 128:
 case 141:
 case 140:
 case 142:
 case 131:
 case 134:
 case 133:
 case 135:
 case 139:
 case 143:
 case 132:
 case 137:
  return (VAR_0);

 default:
  return (VAR_1);
 }
}
