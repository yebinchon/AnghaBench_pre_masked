
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* a3d; } ;
typedef TYPE_1__ vortex_t ;
struct TYPE_7__ {int source; int slice; void* vortex; } ;
typedef TYPE_2__ a3dsrc_t ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(vortex_t * VAR_0, int VAR_1, int VAR_2)
{
 a3dsrc_t *VAR_3 = &(VAR_0->a3d[VAR_1 + (VAR_2 * 4)]);


 VAR_3->vortex = (void *)VAR_0;
 VAR_3->source = VAR_1;
 VAR_3->slice = VAR_2;
 FUNC_1(VAR_3);

 FUNC_0(VAR_3, 0x11);
}
