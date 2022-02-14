
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int hdrtype; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
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
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;

int
FUNC_2(device_t VAR_9, device_t VAR_10, int VAR_11,
    int *VAR_12)
{
 struct pci_devinfo *VAR_13 = FUNC_0(VAR_10);
 pcicfgregs *VAR_14 = &VAR_13->cfg;
 uint32_t VAR_15;
 uint8_t VAR_16;




 VAR_15 = FUNC_1(VAR_10, VAR_8, 2);
 if (!(VAR_15 & VAR_5))
  return (VAR_1);




 switch (VAR_14->hdrtype & VAR_4) {
 case 128:
 case 130:
  VAR_16 = VAR_6;
  break;
 case 129:
  VAR_16 = VAR_7;
  break;
 default:

  return (VAR_1);
 }
 VAR_16 = FUNC_1(VAR_10, VAR_16, 1);




 while (VAR_16 != 0) {
  if (FUNC_1(VAR_10, VAR_16 + VAR_2, 1) == VAR_11) {
   if (VAR_12 != ((void*)0))
    *VAR_12 = VAR_16;
   return (0);
  }
  VAR_16 = FUNC_1(VAR_10, VAR_16 + VAR_3, 1);
 }

 return (VAR_0);
}
