
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pci_softc {int num_slots; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mtk_pci_softc*,int ,int ,int ) ;
 int VAR_5 ;
 struct mtk_pci_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct mtk_pci_softc*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6)
{
 struct mtk_pci_softc *VAR_7 = FUNC_2(VAR_6);


 FUNC_5(VAR_5, VAR_2,
     VAR_1);


 if (FUNC_4(VAR_6))
  return (VAR_0);


 FUNC_0(100000);


 FUNC_3(VAR_7, 0x9000);


 FUNC_1(VAR_7, VAR_3, VAR_4, 0);


 VAR_7->num_slots = 1;

 return (0);
}
