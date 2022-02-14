
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h_Spinlock; } ;
typedef TYPE_1__ t_FmPcdLock ;
typedef int t_FmPcd ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(t_FmPcd *VAR_0)
{
    t_FmPcdLock *VAR_1;

    VAR_1 = FUNC_0(VAR_0);
    while (VAR_1)
    {
        FUNC_2(VAR_1->h_Spinlock);
        FUNC_1(VAR_1);
        VAR_1 = FUNC_0(VAR_0);
    }
}
