
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
 int FUNC_1 (struct mtk_pci_softc*,int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct mtk_pci_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct mtk_pci_softc*,int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_18)
{
 struct mtk_pci_softc *VAR_19 = FUNC_2(VAR_18);





 if (FUNC_4(VAR_19, 0x00, 0x80) ||
     FUNC_4(VAR_19, 0x01, 0x04) ||
     FUNC_4(VAR_19, 0x68, 0x84))
  return (VAR_0);


 if (FUNC_6(VAR_18))
  return (VAR_0);


 FUNC_7(VAR_9, VAR_3, VAR_12);


 if (!(FUNC_8(VAR_17) & VAR_6)) {
  FUNC_3(VAR_18, "PCIe disabled for MT7620N\n");
  FUNC_7(VAR_7, 0, VAR_15);
  FUNC_7(VAR_8, 0, VAR_14);
  return (VAR_0);
 }


 FUNC_7(VAR_16, VAR_5,
     VAR_4);


 if (FUNC_5(VAR_18))
  return (VAR_0);


 FUNC_0(100000);


 if (!(FUNC_8(VAR_8) & VAR_13)) {
  FUNC_3(VAR_18, "no PPLL not lock\n");
  FUNC_6(VAR_18);
  return (VAR_0);
 }


 FUNC_7(VAR_9, VAR_2 | VAR_1,
     VAR_3 | VAR_12);


 FUNC_0(100000);


 FUNC_1(VAR_19, VAR_10, VAR_11, 0);


 VAR_19->num_slots = 1;

 return (0);
}
