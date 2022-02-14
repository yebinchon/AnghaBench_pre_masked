
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pci_softc {uintptr_t sc_busno; } ;
typedef int device_t ;


 int VAR_0 ;


 struct mtk_pci_softc* FUNC_0 (int ) ;
 uintptr_t FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3,
 uintptr_t *VAR_4)
{
 struct mtk_pci_softc *VAR_5 = FUNC_0(VAR_1);

 switch (VAR_3) {
 case 128:
  *VAR_4 = FUNC_1(VAR_1);
  return (0);
 case 129:
  *VAR_4 = VAR_5->sc_busno;
  return (0);
 }

 return (VAR_0);
}
