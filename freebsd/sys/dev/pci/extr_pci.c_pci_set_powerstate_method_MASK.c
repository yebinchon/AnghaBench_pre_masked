
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pp_cap; int pp_status; } ;
struct TYPE_5__ {TYPE_1__ pp; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef TYPE_2__ pcicfgregs ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int) ;
 scalar_t__ VAR_9 ;
 struct pci_devinfo* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*,int,int) ;

int
FUNC_6(device_t VAR_10, device_t VAR_11, int VAR_12)
{
 struct pci_devinfo *VAR_13 = FUNC_3(VAR_11);
 pcicfgregs *VAR_14 = &VAR_13->cfg;
 uint16_t VAR_15;
 int VAR_16, VAR_17, VAR_18;

 if (VAR_14->pp.pp_cap == 0)
  return (VAR_1);






 VAR_16 = FUNC_4(VAR_11);
 if (VAR_16 == VAR_12)
  return (0);
 VAR_17 = (VAR_16 > VAR_12) ? VAR_16 : VAR_12;
 if (VAR_17 == 128)
     VAR_18 = 10000;
 else if (VAR_17 == 129)
     VAR_18 = 200;
 else
     VAR_18 = 0;
 VAR_15 = FUNC_1(VAR_10, VAR_11, VAR_14->pp.pp_status, 2)
     & ~VAR_8;
 switch (VAR_12) {
 case 131:
  VAR_15 |= VAR_4;
  break;
 case 130:
  if ((VAR_14->pp.pp_cap & VAR_2) == 0)
   return (VAR_1);
  VAR_15 |= VAR_5;
  break;
 case 129:
  if ((VAR_14->pp.pp_cap & VAR_3) == 0)
   return (VAR_1);
  VAR_15 |= VAR_6;
  break;
 case 128:
  VAR_15 |= VAR_7;
  break;
 default:
  return (VAR_0);
 }

 if (VAR_9)
  FUNC_5(VAR_14, "Transition from D%d to D%d\n", VAR_16,
      VAR_12);

 FUNC_2(VAR_10, VAR_11, VAR_14->pp.pp_status, VAR_15, 2);
 if (VAR_18)
  FUNC_0(VAR_18);
 return (0);
}
