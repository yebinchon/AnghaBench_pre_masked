
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int this04; } ;
struct TYPE_5__ {TYPE_3__ this04; } ;
struct TYPE_6__ {int mmio; TYPE_1__ eq; } ;
typedef TYPE_2__ vortex_t ;
typedef int u16 ;
typedef TYPE_3__ eqhw_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(vortex_t * VAR_1, u16 VAR_2[])
{
 eqhw_t *VAR_3 = &(VAR_1->eq.this04);
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3->this04; VAR_4++) {
  FUNC_0(VAR_1->mmio, 0x2b024 + VAR_4 * VAR_0, VAR_2[VAR_4]);
 }

 FUNC_0(VAR_1->mmio, 0x2b3cc, VAR_2[VAR_3->this04]);
 FUNC_0(VAR_1->mmio, 0x2b3d8, VAR_2[VAR_3->this04 + 1]);


 for (VAR_4 = 0; VAR_4 < VAR_3->this04; VAR_4++) {
  FUNC_0(VAR_1->mmio, 0x2b204 + VAR_4 * VAR_0,
   VAR_2[VAR_4 + (VAR_3->this04 + 2)]);
 }

 FUNC_0(VAR_1->mmio, 0x2b3e4, VAR_2[2 + (VAR_3->this04 * 2)]);
 FUNC_0(VAR_1->mmio, 0x2b3f0, VAR_2[3 + (VAR_3->this04 * 2)]);
}
