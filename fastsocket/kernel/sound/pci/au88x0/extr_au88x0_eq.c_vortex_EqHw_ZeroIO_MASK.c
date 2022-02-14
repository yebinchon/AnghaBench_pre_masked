
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(vortex_t * VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 0x8; VAR_3++)
  FUNC_0(VAR_2->mmio, VAR_0 + (VAR_3 << 2), 0x0);
 for (VAR_3 = 0; VAR_3 < 0x4; VAR_3++)
  FUNC_0(VAR_2->mmio, VAR_1 + (VAR_3 << 2), 0x0);
}
