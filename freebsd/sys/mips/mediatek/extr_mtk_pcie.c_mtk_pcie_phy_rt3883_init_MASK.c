
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
 int FUNC_1 (struct mtk_pci_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mtk_pci_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_10)
{
 struct mtk_pci_softc *VAR_11 = FUNC_2(VAR_10);


 FUNC_4(VAR_9, 0, VAR_5 |
     VAR_3);


 if (FUNC_3(VAR_10))
  return (VAR_0);


 FUNC_4(VAR_8, 0, VAR_6);
 FUNC_4(VAR_7, VAR_4, 0);


 FUNC_0(500000);


 FUNC_1(VAR_11, VAR_2, 0);


 FUNC_1(VAR_11, VAR_1, 0x79);


 VAR_11->num_slots = 1;

 return (0);
}
