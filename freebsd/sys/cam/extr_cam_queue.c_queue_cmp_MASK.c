
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ priority; int generation; } ;
typedef TYPE_1__ cam_pinfo ;



__attribute__((used)) static __inline int
FUNC_0(cam_pinfo **VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0[VAR_1]->priority == VAR_0[VAR_2]->priority)
  return ( VAR_0[VAR_1]->generation
   - VAR_0[VAR_2]->generation );
 else
  return ( VAR_0[VAR_1]->priority
   - VAR_0[VAR_2]->priority );
}
