
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FICL_INT ;
typedef int DPUNS ;
typedef int DPINT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

DPINT FUNC_3(FICL_INT VAR_0, FICL_INT VAR_1)
{
    DPUNS VAR_2;
    int VAR_3 = 1;

    if (VAR_0 < 0)
    {
        VAR_3 = -VAR_3;
        VAR_0 = -VAR_0;
    }

    if (VAR_1 < 0)
    {
        VAR_3 = -VAR_3;
        VAR_1 = -VAR_1;
    }

    VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_3 > 0)
        return FUNC_1(VAR_2);
    else
        return FUNC_2(FUNC_1(VAR_2));
}
