
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * t_Handle ;
typedef int t_FmPcdCcNodeParams ;
typedef int t_FmPcdCcNode ;
typedef int t_Error ;


 int FUNC_0 (int ,char*) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int *) ;
 char* VAR_4 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int *,int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int) ;

t_Handle FUNC_7(t_Handle VAR_6,
                              t_FmPcdCcNodeParams *VAR_7)
{
    t_FmPcdCcNode *VAR_8;
    t_Error VAR_9;

    FUNC_4(VAR_6, VAR_0, ((void*)0));
    FUNC_4(VAR_7, VAR_2, ((void*)0));

    VAR_8 = (t_FmPcdCcNode*)FUNC_5(sizeof(t_FmPcdCcNode));
    if (!VAR_8)
    {
        FUNC_3(VAR_3, VAR_1, ("No memory"));
        return ((void*)0);
    }
    FUNC_6(VAR_8, 0, sizeof(t_FmPcdCcNode));

    VAR_9 = FUNC_2(VAR_6, VAR_8, VAR_7);

    switch(FUNC_1(VAR_9)
) {
        case 128:
        break;

        case 129:
        FUNC_0(VAR_5, ("E_BUSY error"));
        return ((void*)0);

        default:
        FUNC_3(VAR_3, VAR_9, VAR_4);
        return ((void*)0);
    }

    return VAR_8;
}
