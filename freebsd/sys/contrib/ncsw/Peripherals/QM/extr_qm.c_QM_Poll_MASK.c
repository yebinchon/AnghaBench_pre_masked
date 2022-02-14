
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_QmPortal ;
typedef int t_Qm ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
typedef int e_QmPortalPollSource ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

t_Error FUNC_3(t_Handle VAR_1, e_QmPortalPollSource VAR_2)
{
    t_Qm *VAR_3 = (t_Qm *)VAR_1;
    t_QmPortal *VAR_4;

    FUNC_2(VAR_3, VAR_0);
    VAR_4 = FUNC_1(VAR_3);
    FUNC_2(VAR_4, VAR_0);

    return FUNC_0(VAR_4, VAR_2);
}
