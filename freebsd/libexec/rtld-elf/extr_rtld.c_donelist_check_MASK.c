
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int num_used; unsigned int num_alloc; int const** objs; } ;
typedef int Obj_Entry ;
typedef TYPE_1__ DoneList ;



__attribute__((used)) static bool
FUNC_0(DoneList *VAR_0, const Obj_Entry *VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->num_used; VAR_2++)
 if (VAR_0->objs[VAR_2] == VAR_1)
     return 1;






    if (VAR_0->num_used < VAR_0->num_alloc)
 VAR_0->objs[VAR_0->num_used++] = VAR_1;
    return 0;
}
