
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {scalar_t__* p_Frm; int dataMemId; } ;
typedef TYPE_1__ t_FmHc ;
typedef int t_Error ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__) ;

t_Error FUNC_3(t_Handle VAR_2,
                                uint8_t VAR_3)
{
    t_FmHc *VAR_4 = (t_FmHc*)VAR_2;
    int VAR_5;

    FUNC_1(VAR_4, VAR_0);

    VAR_4->dataMemId = VAR_3;

    for (VAR_5=0; VAR_5<VAR_1; VAR_5++)
        if (VAR_4->p_Frm[VAR_5])
            FUNC_2(VAR_4->p_Frm[VAR_5]);

    return FUNC_0(VAR_4);
}
