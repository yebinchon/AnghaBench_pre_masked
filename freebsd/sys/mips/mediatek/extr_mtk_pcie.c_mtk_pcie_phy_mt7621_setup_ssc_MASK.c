
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
 VAR_3 &= 0x7;

 FUNC_0(VAR_1, VAR_2 + 0x400, 8, 1, 1);
 FUNC_0(VAR_1, VAR_2 + 0x400, 9, 2, 0);
 FUNC_0(VAR_1, VAR_2 + 0x000, 4, 1, 1);
 FUNC_0(VAR_1, VAR_2 + 0x100, 4, 1, 1);
 FUNC_0(VAR_1, VAR_2 + 0x000, 5, 1, 0);
 FUNC_0(VAR_1, VAR_2 + 0x100, 5, 1, 0);

 if (VAR_3 <= 5 && VAR_3 >= 3) {
  FUNC_0(VAR_1, VAR_2 + 0x490, 6, 2, 1);
  FUNC_0(VAR_1, VAR_2 + 0x4a8, 0, 12, 0x1a);
  FUNC_0(VAR_1, VAR_2 + 0x4a8, 16, 12, 0x1a);
 } else {
  FUNC_0(VAR_1, VAR_2 + 0x490, 6, 2, 0);
  if (VAR_3 >= 6) {
   FUNC_0(VAR_1, VAR_2 + 0x4bc, 4, 2, 0x01);
   FUNC_0(VAR_1, VAR_2 + 0x49c, 0, 31, 0x18000000);
   FUNC_0(VAR_1, VAR_2 + 0x4a4, 0, 16, 0x18d);
   FUNC_0(VAR_1, VAR_2 + 0x4a8, 0, 12, 0x4a);
   FUNC_0(VAR_1, VAR_2 + 0x4a8, 16, 12, 0x4a);
   FUNC_0(VAR_1, VAR_2 + 0x4a8, 0, 12, 0x11);
   FUNC_0(VAR_1, VAR_2 + 0x4a8, 16, 12, 0x11);
  } else {
   FUNC_0(VAR_1, VAR_2 + 0x4a8, 0, 12, 0x1a);
   FUNC_0(VAR_1, VAR_2 + 0x4a8, 16, 12, 0x1a);
  }
 }

 FUNC_0(VAR_1, VAR_2 + 0x4a0, 5, 1, 1);
 FUNC_0(VAR_1, VAR_2 + 0x490, 22, 2, 2);
 FUNC_0(VAR_1, VAR_2 + 0x490, 18, 4, 6);
 FUNC_0(VAR_1, VAR_2 + 0x490, 12, 4, 2);
 FUNC_0(VAR_1, VAR_2 + 0x490, 8, 4, 1);
 FUNC_0(VAR_1, VAR_2 + 0x4ac, 16, 3, 0);
 FUNC_0(VAR_1, VAR_2 + 0x490, 1, 3, 2);

 if (VAR_3 <= 5 && VAR_3 >= 3) {
  FUNC_0(VAR_1, VAR_2 + 0x414, 6, 2, 1);
  FUNC_0(VAR_1, VAR_2 + 0x414, 5, 1, 1);
 }

 FUNC_0(VAR_1, VAR_2 + 0x414, 28, 2, 1);
 FUNC_0(VAR_1, VAR_2 + 0x040, 17, 4, 7);
 FUNC_0(VAR_1, VAR_2 + 0x040, 16, 1, 1);
 FUNC_0(VAR_1, VAR_2 + 0x140, 17, 4, 7);
 FUNC_0(VAR_1, VAR_2 + 0x140, 16, 1, 1);

 FUNC_0(VAR_1, VAR_2 + 0x000, 5, 1, 1);
 FUNC_0(VAR_1, VAR_2 + 0x100, 5, 1, 1);
 FUNC_0(VAR_1, VAR_2 + 0x000, 4, 1, 0);
 FUNC_0(VAR_1, VAR_2 + 0x100, 4, 1, 0);
}
