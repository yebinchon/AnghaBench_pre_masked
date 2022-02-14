
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtk_pci_softc {scalar_t__ socid; int pcie_link_status; int num_slots; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct mtk_pci_softc*,int ) ;
 int FUNC_7 (struct mtk_pci_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct mtk_pci_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int ,int,int) ;
 int FUNC_10 (int ,int ,int,int ,int,int,int) ;

__attribute__((used)) static void
FUNC_11(device_t VAR_15)
{
 struct mtk_pci_softc *VAR_16 = FUNC_8(VAR_15);
 uint32_t VAR_17, VAR_18;
 int VAR_19;


 FUNC_7(VAR_16, VAR_0, 0);


 VAR_17 = 0x03FF0001;


 if (VAR_16->socid == VAR_1 || VAR_16->socid == VAR_3 ||
     VAR_16->socid == VAR_4 || VAR_16->socid == VAR_2)
  VAR_17 = 0x7FFF0001;


 VAR_16->pcie_link_status = 0;


 FUNC_0(500000);





 for (VAR_19 = 0; VAR_19 < VAR_16->num_slots; VAR_19++) {

  if (FUNC_6(VAR_16, FUNC_5(VAR_19)) & 1)
   VAR_16->pcie_link_status |= (1<<VAR_19);
  else
   continue;




  FUNC_7(VAR_16, FUNC_1(VAR_19), VAR_17);

  FUNC_7(VAR_16, FUNC_2(VAR_19), 0);

  FUNC_7(VAR_16, FUNC_4(VAR_19), 0);

  FUNC_7(VAR_16, FUNC_3(VAR_19), 0x06040001);

  VAR_18 = FUNC_9(VAR_15, 0, VAR_19, 0, 0x4, 4);
  FUNC_10(VAR_15, 0, VAR_19, 0, 0x4, VAR_18 | 0x4, 4);
  VAR_18 = FUNC_9(VAR_15, 0, VAR_19, 0, 0x70c, 4);
  VAR_18 &= ~(0xff << 8);
  VAR_18 |= (0x50 << 8);
  FUNC_10(VAR_15, 0, VAR_19, 0, 0x70c, VAR_18, 4);

  FUNC_10(VAR_15, 0, VAR_19, 0, VAR_6, 0xff, 1);
  FUNC_10(VAR_15, 0, VAR_19, 0, VAR_5, 0xffff, 2);
  FUNC_10(VAR_15, 0, VAR_19, 0, VAR_8, 0, 1);
  FUNC_10(VAR_15, 0, VAR_19, 0, VAR_7, 0, 2);
  FUNC_10(VAR_15, 0, VAR_19, 0, VAR_9, 0xffff, 2);
  FUNC_10(VAR_15, 0, VAR_19, 0, VAR_10, 0, 2);
  FUNC_10(VAR_15, 0, VAR_19, 0, VAR_12, 0xffff, 2);
  FUNC_10(VAR_15, 0, VAR_19, 0, VAR_11, 0xffffffff,
      4);
  FUNC_10(VAR_15, 0, VAR_19, 0, VAR_14, 0, 2);
  FUNC_10(VAR_15, 0, VAR_19, 0, VAR_13, 0, 4);
 }
}
