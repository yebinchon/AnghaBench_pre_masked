
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int hdrtype; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;
struct TYPE_5__ {int dev; } ;
typedef TYPE_2__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;

int
FUNC_2(adapter_t *VAR_7, int VAR_8)
{
 device_t VAR_9;
 struct pci_devinfo *VAR_10;
 pcicfgregs *VAR_11;
 uint32_t VAR_12;
 uint8_t VAR_13;

 VAR_9 = VAR_7->dev;
 VAR_10 = FUNC_0(VAR_9);
 VAR_11 = &VAR_10->cfg;

 VAR_12 = FUNC_1(VAR_9, VAR_6, 2);
 if (!(VAR_12 & VAR_3))
  return (0);

 switch (VAR_11->hdrtype & VAR_2) {
 case 0:
 case 1:
  VAR_13 = VAR_4;
  break;
 case 2:
  VAR_13 = VAR_5;
  break;
 default:
  return (0);
  break;
 }
 VAR_13 = FUNC_1(VAR_9, VAR_13, 1);

 while (VAR_13 != 0) {
  if (FUNC_1(VAR_9, VAR_13 + VAR_0, 1) == VAR_8)
   return (VAR_13);
  VAR_13 = FUNC_1(VAR_9, VAR_13 + VAR_1, 1);
 }

 return (0);
}
