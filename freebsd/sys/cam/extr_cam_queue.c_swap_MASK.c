
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; } ;
typedef TYPE_1__ cam_pinfo ;



__attribute__((used)) static __inline void
FUNC_0(cam_pinfo **VAR_0, int VAR_1, int VAR_2)
{
 cam_pinfo *VAR_3;

 VAR_3 = VAR_0[VAR_2];
 VAR_0[VAR_2] = VAR_0[VAR_1];
 VAR_0[VAR_1] = VAR_3;
 VAR_0[VAR_2]->index = VAR_2;
 VAR_0[VAR_1]->index = VAR_1;
}
