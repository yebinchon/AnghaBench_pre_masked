
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int this04; scalar_t__ this08; } ;
struct TYPE_5__ {TYPE_3__ this04; } ;
struct TYPE_6__ {int mmio; TYPE_1__ eq; } ;
typedef TYPE_2__ vortex_t ;
typedef int u16 ;
typedef TYPE_3__ eqhw_t ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(vortex_t * VAR_0, u16 VAR_1[])
{
 eqhw_t *VAR_2 = &(VAR_0->eq.this04);
 int VAR_3 = 0, VAR_4 ;

 for (VAR_4 = 0; VAR_4 < VAR_2->this04; VAR_4++) {
  FUNC_0(VAR_0->mmio, 0x2b000 + VAR_4 * 0x30, VAR_1[VAR_3 + 0]);
  FUNC_0(VAR_0->mmio, 0x2b004 + VAR_4 * 0x30, VAR_1[VAR_3 + 1]);

  if (VAR_2->this08 == 0) {
   FUNC_0(VAR_0->mmio, 0x2b008 + VAR_4 * 0x30, VAR_1[VAR_3 + 2]);
   FUNC_0(VAR_0->mmio, 0x2b00c + VAR_4 * 0x30, VAR_1[VAR_3 + 3]);
   FUNC_0(VAR_0->mmio, 0x2b010 + VAR_4 * 0x30, VAR_1[VAR_3 + 4]);
  } else {
   FUNC_0(VAR_0->mmio, 0x2b008 + VAR_4 * 0x30, FUNC_1(VAR_1[2 + VAR_3]));
   FUNC_0(VAR_0->mmio, 0x2b00c + VAR_4 * 0x30, FUNC_1(VAR_1[3 + VAR_3]));
          FUNC_0(VAR_0->mmio, 0x2b010 + VAR_4 * 0x30, FUNC_1(VAR_1[4 + VAR_3]));
  }
  VAR_3 += 5;
 }
}
