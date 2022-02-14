
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_List ;
typedef int t_CcNodeInformation ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(t_List *VAR_0)
{
    t_CcNodeInformation *VAR_1 = ((void*)0);

    if (!FUNC_2(VAR_0))
    {
        VAR_1 = FUNC_0(VAR_0);
        while (VAR_1)
        {
            FUNC_3(VAR_1);
            VAR_1 = FUNC_0(VAR_0);
        }
    }

    FUNC_1(VAR_0);
}
