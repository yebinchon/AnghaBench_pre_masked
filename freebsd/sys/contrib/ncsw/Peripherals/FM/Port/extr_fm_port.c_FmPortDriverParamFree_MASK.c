
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_FmPortDriverParam; } ;
typedef TYPE_1__ t_FmPort ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(t_FmPort *VAR_0)
{
    if (VAR_0->p_FmPortDriverParam)
    {
        FUNC_0(VAR_0->p_FmPortDriverParam);
        VAR_0->p_FmPortDriverParam = ((void*)0);
    }
}
