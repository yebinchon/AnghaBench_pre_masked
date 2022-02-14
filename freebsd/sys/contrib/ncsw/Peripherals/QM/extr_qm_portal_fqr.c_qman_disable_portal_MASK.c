
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_LowQmPortal; int disable_count; } ;
typedef TYPE_1__ t_QmPortal ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(t_QmPortal *VAR_0)
{
    FUNC_0(VAR_0);
    if (!(VAR_0->disable_count++))
        FUNC_2(VAR_0->p_LowQmPortal, 0);
    FUNC_1(VAR_0);
}
