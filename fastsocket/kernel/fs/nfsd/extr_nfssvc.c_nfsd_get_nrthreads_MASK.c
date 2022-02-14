
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sv_nrpools; TYPE_1__* sv_pools; } ;
struct TYPE_3__ {int sp_nrthreads; } ;


 TYPE_2__* VAR_0 ;

int FUNC_0(int VAR_1, int *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_0 != ((void*)0)) {
  for (VAR_3 = 0; VAR_3 < VAR_0->sv_nrpools && VAR_3 < VAR_1; VAR_3++)
   VAR_2[VAR_3] = VAR_0->sv_pools[VAR_3].sp_nrthreads;
 }

 return 0;
}
