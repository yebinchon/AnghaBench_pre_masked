
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pci_softc {int socid; scalar_t__ num_slots; } ;
typedef int device_t ;


 int VAR_0 ;






 struct mtk_pci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct mtk_pci_softc *VAR_2;


 VAR_2 = FUNC_0(VAR_1);


 VAR_2->num_slots = 0;


 switch (VAR_2->socid) {
 case 131:
 case 130:
  if (FUNC_4(VAR_1))
   return (VAR_0);
  break;
 case 132:
  if (FUNC_3(VAR_1))
   return (VAR_0);
  break;
 case 133:
  if (FUNC_2(VAR_1))
   return (VAR_0);
  break;
 case 129:
 case 128:
  if (FUNC_5(VAR_1))
   return (VAR_0);
  break;
 default:
  FUNC_1(VAR_1, "unsupported device %x\n", VAR_2->socid);
  return (VAR_0);
 }





 FUNC_6(VAR_1);

 return (0);
}
