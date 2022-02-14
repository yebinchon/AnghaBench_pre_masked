
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_4__ {scalar_t__ cpu; int h_Bm; } ;
typedef TYPE_1__ t_BmPortal ;
typedef int e_DpaaSwPortal ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

t_Error FUNC_4(t_Handle VAR_2)
{
    t_BmPortal *VAR_3 = (t_BmPortal *)VAR_2;

    if (!VAR_3)
       return FUNC_1(VAR_0);
    FUNC_0(VAR_3->h_Bm, ((void*)0), (e_DpaaSwPortal)VAR_3->cpu);
    FUNC_3(VAR_3);
    FUNC_2(VAR_3);
    return VAR_1;
}
