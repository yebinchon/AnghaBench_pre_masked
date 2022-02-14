
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ t_Handle ;
typedef int t_FmPcdLock ;
typedef int t_FmPcd ;


 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__) ;

t_FmPcdLock * FUNC_4(t_Handle VAR_0)
{
    t_FmPcdLock *VAR_1;
    FUNC_0(VAR_0);
    VAR_1 = FUNC_1((t_FmPcd*)VAR_0);
    if (!VAR_1)
    {
        FUNC_3(VAR_0);
        VAR_1 = FUNC_1((t_FmPcd*)VAR_0);
    }

    if (VAR_1)
        FUNC_2((t_FmPcd*)VAR_0, VAR_1);
    return VAR_1;
}
