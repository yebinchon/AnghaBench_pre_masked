
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {uintptr_t subvendor; uintptr_t subdevice; uintptr_t vendor; uintptr_t device; uintptr_t baseclass; uintptr_t subclass; uintptr_t progif; uintptr_t revid; uintptr_t intpin; uintptr_t intline; uintptr_t domain; uintptr_t bus; uintptr_t slot; uintptr_t func; uintptr_t cmdreg; uintptr_t cachelnsz; uintptr_t mingnt; uintptr_t maxlat; uintptr_t lattimer; int hdrtype; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_devinfo* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_3, device_t VAR_4, int VAR_5, uintptr_t *VAR_6)
{
 struct pci_devinfo *VAR_7;
 pcicfgregs *VAR_8;

 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = &VAR_7->cfg;

 switch (VAR_5) {
 case 141:




  *((uint8_t **) VAR_6) = ((void*)0);
  return (VAR_0);
 case 129:
  *VAR_6 = VAR_8->subvendor;
  break;
 case 130:
  *VAR_6 = VAR_8->subdevice;
  break;
 case 128:
  *VAR_6 = VAR_8->vendor;
  break;
 case 144:
  *VAR_6 = VAR_8->device;
  break;
 case 143:
  *VAR_6 = (VAR_8->device << 16) | VAR_8->vendor;
  break;
 case 146:
  *VAR_6 = VAR_8->baseclass;
  break;
 case 131:
  *VAR_6 = VAR_8->subclass;
  break;
 case 134:
  *VAR_6 = VAR_8->progif;
  break;
 case 133:
  *VAR_6 = VAR_8->revid;
  break;
 case 139:
  *VAR_6 = VAR_8->intpin;
  break;
 case 138:
  *VAR_6 = VAR_8->intline;
  break;
 case 142:
  *VAR_6 = VAR_8->domain;
  break;
 case 148:
  *VAR_6 = VAR_8->bus;
  break;
 case 132:
  *VAR_6 = VAR_8->slot;
  break;
 case 140:
  *VAR_6 = VAR_8->func;
  break;
 case 145:
  *VAR_6 = VAR_8->cmdreg;
  break;
 case 147:
  *VAR_6 = VAR_8->cachelnsz;
  break;
 case 135:
  if (VAR_8->hdrtype != VAR_2) {
   *VAR_6 = -1;
   return (VAR_0);
  }
  *VAR_6 = VAR_8->mingnt;
  break;
 case 136:
  if (VAR_8->hdrtype != VAR_2) {
   *VAR_6 = -1;
   return (VAR_0);
  }
  *VAR_6 = VAR_8->maxlat;
  break;
 case 137:
  *VAR_6 = VAR_8->lattimer;
  break;
 default:
  return (VAR_1);
 }
 return (0);
}
