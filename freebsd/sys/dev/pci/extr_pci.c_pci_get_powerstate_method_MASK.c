
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ pp_cap; int pp_status; } ;
struct TYPE_4__ {TYPE_1__ pp; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef TYPE_2__ pcicfgregs ;
typedef int device_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct pci_devinfo* FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_6, device_t VAR_7)
{
 struct pci_devinfo *VAR_8 = FUNC_1(VAR_7);
 pcicfgregs *VAR_9 = &VAR_8->cfg;
 uint16_t VAR_10;
 int VAR_11;

 if (VAR_9->pp.pp_cap != 0) {
  VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_9->pp.pp_status, 2);
  switch (VAR_10 & VAR_0) {
  case 131:
   VAR_11 = VAR_1;
   break;
  case 130:
   VAR_11 = VAR_2;
   break;
  case 129:
   VAR_11 = VAR_3;
   break;
  case 128:
   VAR_11 = VAR_4;
   break;
  default:
   VAR_11 = VAR_5;
   break;
  }
 } else {

  VAR_11 = VAR_1;
 }
 return (VAR_11);
}
