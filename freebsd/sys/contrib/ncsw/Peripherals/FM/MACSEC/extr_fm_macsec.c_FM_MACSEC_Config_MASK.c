
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int * t_Handle ;
struct TYPE_6__ {scalar_t__ guestMode; } ;
typedef TYPE_1__ t_FmMacsecParams ;
typedef int t_FmMacsecControllerDriver ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;

t_Handle FUNC_3(t_FmMacsecParams *VAR_1)
{
    t_FmMacsecControllerDriver *VAR_2;

    FUNC_2(VAR_1, VAR_0, ((void*)0));

    if (VAR_1->guestMode)
        VAR_2 = (t_FmMacsecControllerDriver *)FUNC_0(VAR_1);
    else
        VAR_2 = (t_FmMacsecControllerDriver *)FUNC_1(VAR_1);

    if (!VAR_2)
        return ((void*)0);

    return (t_Handle)VAR_2;
}
