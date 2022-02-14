
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;
typedef int u32 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(vortex_t * VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 VAR_2 = (FUNC_0(VAR_0->mmio, 0x24660) & 0x1FFFFFFF) | 0xC0000000;
 VAR_2 = (VAR_2 & 0xffffff07) | ((VAR_1 & 0x1f) << 3);
 FUNC_1(VAR_0->mmio, 0x24660, VAR_2);
}
