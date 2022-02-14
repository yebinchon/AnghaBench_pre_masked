
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ** xtalk_state_t ;
typedef int * xtalk_instate_t ;
struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(vortex_t * VAR_0,
          xtalk_instate_t const VAR_1,
          xtalk_state_t const VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  FUNC_0(VAR_0->mmio, 0x2437C + VAR_3 * 0x24, VAR_2[VAR_3][0]);
  FUNC_0(VAR_0->mmio, 0x24380 + VAR_3 * 0x24, VAR_2[VAR_3][1]);
  FUNC_0(VAR_0->mmio, 0x24384 + VAR_3 * 0x24, VAR_2[VAR_3][2]);
  FUNC_0(VAR_0->mmio, 0x24388 + VAR_3 * 0x24, VAR_2[VAR_3][3]);
 }
 FUNC_0(VAR_0->mmio, 0x24518 + VAR_3 * 0x24, VAR_1[0]);
 FUNC_0(VAR_0->mmio, 0x2451C + VAR_3 * 0x24, VAR_1[1]);
 FUNC_0(VAR_0->mmio, 0x24520 + VAR_3 * 0x24, VAR_1[2]);
 FUNC_0(VAR_0->mmio, 0x24524 + VAR_3 * 0x24, VAR_1[3]);
}
