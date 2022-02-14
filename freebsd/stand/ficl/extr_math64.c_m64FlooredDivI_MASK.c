
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UNSQR ;
struct TYPE_4__ {scalar_t__ rem; int quot; } ;
typedef TYPE_1__ INTQR ;
typedef int FICL_UNS ;
typedef scalar_t__ FICL_INT ;
typedef int DPINT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

INTQR FUNC_5(DPINT VAR_0, FICL_INT VAR_1)
{
    INTQR VAR_2;
    UNSQR VAR_3;
    int VAR_4 = 1;
    int VAR_5 = 1;

    if (FUNC_3(VAR_0))
    {
        VAR_0 = FUNC_4(VAR_0);
        VAR_5 = -VAR_5;
    }

    if (VAR_1 < 0)
    {
        VAR_1 = -VAR_1;
        VAR_4 = -VAR_4;
        VAR_5 = -VAR_5;
    }

    VAR_3 = FUNC_0(FUNC_1(VAR_0), (FICL_UNS)VAR_1);
    VAR_2 = FUNC_2(VAR_3);
    if (VAR_5 < 0)
    {
        VAR_2.quot = -VAR_2.quot;
        if (VAR_2.rem != 0)
        {
            VAR_2.quot--;
            VAR_2.rem = VAR_1 - VAR_2.rem;
        }
    }

    if (VAR_4 < 0)
        VAR_2.rem = -VAR_2.rem;

    return VAR_2;
}
