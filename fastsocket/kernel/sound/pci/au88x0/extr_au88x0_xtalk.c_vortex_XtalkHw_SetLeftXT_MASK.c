
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef short** xtalk_coefs_t ;
struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 int FUNC_0 (int ,int,short) ;

__attribute__((used)) static void
FUNC_1(vortex_t * VAR_0, short VAR_1, short VAR_2,
    xtalk_coefs_t const VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  FUNC_0(VAR_0->mmio, 0x24368 + VAR_4 * 0x24, VAR_3[VAR_4][0]);
  FUNC_0(VAR_0->mmio, 0x2436c + VAR_4 * 0x24, VAR_3[VAR_4][1]);
  FUNC_0(VAR_0->mmio, 0x24370 + VAR_4 * 0x24, VAR_3[VAR_4][2]);
  FUNC_0(VAR_0->mmio, 0x24374 + VAR_4 * 0x24, VAR_3[VAR_4][3]);
  FUNC_0(VAR_0->mmio, 0x24378 + VAR_4 * 0x24, VAR_3[VAR_4][4]);
 }
 FUNC_0(VAR_0->mmio, 0x24548, VAR_1 & 0xffff);
 FUNC_0(VAR_0->mmio, 0x2454C, VAR_2 & 0xffff);
}
