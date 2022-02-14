
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtk_pci_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_pci_softc*,int,int,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct mtk_pci_softc *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_1(VAR_0) >> 6;
 VAR_3 &= 0x1;

 FUNC_0(VAR_1, VAR_2 + 0x400, 8, 1, 1);
 FUNC_0(VAR_1, VAR_2 + 0x400, 9, 2, 0);
 FUNC_0(VAR_1, VAR_2 + 0x000, 4, 1, 1);
 FUNC_0(VAR_1, VAR_2 + 0x000, 5, 1, 0);
 FUNC_0(VAR_1, VAR_2 + 0x4ac, 16, 3, 3);

 if (VAR_3 == 1) {
  FUNC_0(VAR_1, VAR_2 + 0x4bc, 24, 8, 0x7d);
  FUNC_0(VAR_1, VAR_2 + 0x490, 12, 4, 0x08);
  FUNC_0(VAR_1, VAR_2 + 0x490, 6, 2, 0x01);
  FUNC_0(VAR_1, VAR_2 + 0x4c0, 0, 32, 0x1f400000);
  FUNC_0(VAR_1, VAR_2 + 0x4a4, 0, 16, 0x013d);
  FUNC_0(VAR_1, VAR_2 + 0x4a8, 16, 16, 0x74);
  FUNC_0(VAR_1, VAR_2 + 0x4a8, 0, 16, 0x74);
 } else {
  FUNC_0(VAR_1, VAR_2 + 0x4bc, 24, 8, 0x64);
  FUNC_0(VAR_1, VAR_2 + 0x490, 12, 4, 0x0a);
  FUNC_0(VAR_1, VAR_2 + 0x490, 6, 2, 0x00);
  FUNC_0(VAR_1, VAR_2 + 0x4c0, 0, 32, 0x19000000);
  FUNC_0(VAR_1, VAR_2 + 0x4a4, 0, 16, 0x018d);
  FUNC_0(VAR_1, VAR_2 + 0x4a8, 16, 16, 0x4a);
  FUNC_0(VAR_1, VAR_2 + 0x4a8, 0, 16, 0x4a);
 }

 FUNC_0(VAR_1, VAR_2 + 0x498, 0, 8, 5);
 FUNC_0(VAR_1, VAR_2 + 0x000, 5, 1, 1);
 FUNC_0(VAR_1, VAR_2 + 0x000, 4, 1, 0);
}
