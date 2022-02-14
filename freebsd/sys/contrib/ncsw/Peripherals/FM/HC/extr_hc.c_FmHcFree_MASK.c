
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {scalar_t__ h_HcPortDev; scalar_t__* p_Frm; } ;
typedef TYPE_1__ t_FmHc ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(t_Handle VAR_1)
{
    t_FmHc *VAR_2 = (t_FmHc*)VAR_1;
    int VAR_3;

    if (!VAR_2)
        return;

    for (VAR_3=0; VAR_3<VAR_0; VAR_3++)
        if (VAR_2->p_Frm[VAR_3])
            FUNC_2(VAR_2->p_Frm[VAR_3]);
        else
            break;

    if (VAR_2->h_HcPortDev)
        FUNC_0(VAR_2->h_HcPortDev);

    FUNC_1(VAR_2);
}
