
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(vortex_t * VAR_2, unsigned char VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0x1f; VAR_4 >= 0; VAR_4--)
  FUNC_0(VAR_2->mmio,
   VAR_1 + (VAR_3 << 7) + (VAR_4 << 2), 0);
 FUNC_0(VAR_2->mmio, VAR_0 + (VAR_3 << 3), 0);
 FUNC_0(VAR_2->mmio, VAR_0 + (VAR_3 << 3) + 4, 0);
}
