
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_5__ {int slice; scalar_t__ vortex; } ;
typedef TYPE_2__ a3dsrc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(a3dsrc_t * VAR_1)
{
 vortex_t *VAR_2 = (vortex_t *) (VAR_1->vortex);
 FUNC_0(VAR_2->mmio, VAR_0 + ((VAR_1->slice) << 0xd),
  0xF0000000);
}
