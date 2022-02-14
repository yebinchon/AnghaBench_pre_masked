
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int t_List ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {scalar_t__ h_CcNode; int node; } ;
typedef TYPE_1__ t_CcNodeInformation ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,int ) ;

void FUNC_10(t_List *VAR_0, t_Handle VAR_1,
                                    t_Handle VAR_2)
{
    t_CcNodeInformation *VAR_3 = ((void*)0);
    uint32_t VAR_4 = 0;
    t_List *VAR_5;

    if (VAR_2)
        VAR_4 = FUNC_7(VAR_2);

    if (FUNC_4(VAR_0))
    {
        FUNC_8(VAR_4);
        return;
    }

    for (VAR_5 = FUNC_3(VAR_0); VAR_5 != (VAR_0);
            VAR_5 = FUNC_5(VAR_5))
    {
        VAR_3 = FUNC_1(VAR_5);
        FUNC_0(VAR_3);
        FUNC_0(VAR_3->h_CcNode);
        if (VAR_3->h_CcNode == VAR_1)
            break;
    }

    if (VAR_3)
    {
        FUNC_2(&VAR_3->node);
        FUNC_6(VAR_3);
    }

    if (VAR_2)
        FUNC_9(VAR_2, VAR_4);
}
