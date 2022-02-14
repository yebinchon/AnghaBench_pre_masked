
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int enetMode; } ;
typedef TYPE_1__ t_Memac ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static t_Error FUNC_3(t_Handle VAR_5)
{
    t_Memac *VAR_6 = (t_Memac *)VAR_5;
    uint8_t VAR_7, VAR_8;

    if (FUNC_0(VAR_6->enetMode) == VAR_4)
    {

        if (VAR_6->enetMode & VAR_0)
            FUNC_2(VAR_6, VAR_2);
        else
            FUNC_1(VAR_6, VAR_2);
    }
    else if (FUNC_0(VAR_6->enetMode) == VAR_3)
    {

        for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
        {




            VAR_8 = (uint8_t)((VAR_2 << 2) | VAR_7);
            if (VAR_6->enetMode & VAR_0)
                FUNC_2(VAR_6, VAR_8);
            else
                FUNC_1(VAR_6, VAR_8);
        }
    }
    return VAR_1;
}
