
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_3__ {int exceptions; struct TYPE_3__* p_BmDriverParams; } ;
typedef TYPE_1__ t_Bm ;
typedef int e_BmExceptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

t_Error FUNC_3(t_Handle VAR_4, e_BmExceptions VAR_5, bool VAR_6)
{
    t_Bm *VAR_7 = (t_Bm*)VAR_4;
    uint32_t VAR_8 = 0;

    FUNC_2(VAR_7, VAR_0);
    FUNC_2(VAR_7->p_BmDriverParams, VAR_0);

    FUNC_0(VAR_8, VAR_5);
    if(VAR_8)
    {
        if (VAR_6)
            VAR_7->exceptions |= VAR_8;
        else
            VAR_7->exceptions &= ~VAR_8;
   }
    else
        FUNC_1(VAR_3, VAR_1, ("Undefined exception"));

    return VAR_2;
}
