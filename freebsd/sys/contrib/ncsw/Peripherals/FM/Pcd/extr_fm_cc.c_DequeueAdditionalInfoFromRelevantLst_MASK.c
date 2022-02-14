
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_Next; } ;
typedef TYPE_1__ t_List ;
struct TYPE_8__ {int node; } ;
typedef TYPE_2__ t_CcNodeInformation ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static t_CcNodeInformation * FUNC_3(
        t_List *VAR_0)
{
    t_CcNodeInformation *VAR_1 = ((void*)0);

    if (!FUNC_2(VAR_0))
    {
        VAR_1 = FUNC_0(VAR_0->p_Next);
        FUNC_1(&VAR_1->node);
    }

    return VAR_1;
}
