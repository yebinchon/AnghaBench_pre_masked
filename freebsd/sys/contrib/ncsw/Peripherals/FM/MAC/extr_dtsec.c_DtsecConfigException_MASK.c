
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_3__ {int exceptions; int enTsuErrExeption; int ptpTsuEnabled; struct TYPE_3__* p_DtsecDriverParam; } ;
typedef TYPE_1__ t_Dtsec ;
typedef int e_FmMacExceptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static t_Error FUNC_3(t_Handle VAR_8, e_FmMacExceptions VAR_9, bool VAR_10)
{
    t_Dtsec *VAR_11 = (t_Dtsec *)VAR_8;
    uint32_t VAR_12 = 0;

    FUNC_2(VAR_11, VAR_0);
    FUNC_2(VAR_11->p_DtsecDriverParam, VAR_1);

    if (VAR_9 != VAR_7)
    {
        FUNC_0(VAR_12, VAR_9);
        if (VAR_12)
        {
            if (VAR_10)
                VAR_11->exceptions |= VAR_12;
            else
                VAR_11->exceptions &= ~VAR_12;
        }
        else
            FUNC_1(VAR_5, VAR_2, ("Undefined exception"));
    }
    else
    {
        if (!VAR_11->ptpTsuEnabled)
            FUNC_1(VAR_5, VAR_2, ("Exception valid for 1588 only"));

        if (VAR_10)
            VAR_11->enTsuErrExeption = VAR_6;
        else
            VAR_11->enTsuErrExeption = VAR_4;
    }

    return VAR_3;
}
