
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int t_List ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {scalar_t__ h_CcNode; } ;
typedef TYPE_1__ t_CcNodeInformation ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;

t_CcNodeInformation* FUNC_6(t_List *VAR_0, t_Handle VAR_1,
                                               t_Handle VAR_2)
{
    t_CcNodeInformation *VAR_3;
    t_List *VAR_4;
    uint32_t VAR_5;

    VAR_5 = FUNC_4(VAR_2);

    for (VAR_4 = FUNC_2(VAR_0); VAR_4 != (VAR_0);
            VAR_4 = FUNC_3(VAR_4))
    {
        VAR_3 = FUNC_1(VAR_4);

        FUNC_0(VAR_3->h_CcNode);

        if (VAR_3->h_CcNode == VAR_1)
        {
            FUNC_5(VAR_2, VAR_5);
            return VAR_3;
        }
    }

    FUNC_5(VAR_2, VAR_5);

    return ((void*)0);
}
