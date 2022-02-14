
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct pci_dw_softc {int dev; } ;


 int FUNC_0 (struct pci_dw_softc*,int ) ;
 int FUNC_1 (struct pci_dw_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct pci_dw_softc *VAR_10, int VAR_11, int VAR_12,
    uint64_t VAR_13, uint64_t VAR_14, uint32_t VAR_15)
{
 uint32_t VAR_16;
 int VAR_17;

 if (VAR_15 == 0)
  return (0);

 FUNC_1(VAR_10, VAR_7, FUNC_4(VAR_11));
 FUNC_1(VAR_10, VAR_3, VAR_13 & 0xFFFFFFFF);
 FUNC_1(VAR_10, VAR_5, (VAR_13 >> 32) & 0xFFFFFFFF);
 FUNC_1(VAR_10, VAR_2, (VAR_13 + VAR_15 - 1) & 0xFFFFFFFF);
 FUNC_1(VAR_10, VAR_4, VAR_14 & 0xFFFFFFFF);
 FUNC_1(VAR_10, VAR_6, (VAR_14 >> 32) & 0xFFFFFFFF);
 FUNC_1(VAR_10, VAR_0, FUNC_3(VAR_12));
 FUNC_1(VAR_10, VAR_1, VAR_9);


 for (VAR_17 = 10; VAR_17 > 0; VAR_17--) {
  VAR_16 = FUNC_0(VAR_10, VAR_1);
  if (VAR_16 & VAR_9)
   return (0);
  FUNC_2(5);
 }
 FUNC_5(VAR_10->dev,
     "Cannot map outbound region(%d) in iATU\n", VAR_11);
 return (VAR_8);
}
