
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pci_softc {scalar_t__ socid; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mtk_pci_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 struct mtk_pci_softc *VAR_6 = FUNC_0(VAR_5);

 if (VAR_6->socid == VAR_1 &&
     (FUNC_4(VAR_3) & VAR_4) !=
     VAR_2) {
  if (FUNC_3(VAR_5))
   return (VAR_0);
 } else {
  if (FUNC_2(VAR_5))
   return (VAR_0);
 }

 if (FUNC_1(VAR_5))
  return (VAR_0);

 return (0);
}
