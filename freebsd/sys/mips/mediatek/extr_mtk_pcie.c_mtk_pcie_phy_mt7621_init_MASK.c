
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct mtk_pci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct mtk_pci_softc*,int) ;
 int FUNC_4 (struct mtk_pci_softc*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_12)
{
 struct mtk_pci_softc *VAR_13 = FUNC_1(VAR_12);


 if (FUNC_6(VAR_12))
  return (VAR_0);


 FUNC_7(VAR_8, VAR_5 |
     VAR_7, VAR_4 | VAR_6);


 FUNC_2(VAR_1, 0, VAR_3);


 FUNC_2(VAR_2, VAR_3, 0);


 FUNC_0(100000);


 if (FUNC_5(VAR_12))
  return (VAR_0);


 FUNC_0(100000);


 if ((FUNC_8(VAR_10) & VAR_11) ==
     VAR_9)
  FUNC_3(VAR_13, 0x9000);


 FUNC_4(VAR_13, 0x9000);

 FUNC_4(VAR_13, 0xa000);


 FUNC_2(VAR_2, 0, VAR_3);


 VAR_13->num_slots = 3;


 FUNC_0(100000);

 return (0);
}
