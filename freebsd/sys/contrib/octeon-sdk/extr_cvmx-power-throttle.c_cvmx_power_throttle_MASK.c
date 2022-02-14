
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;

int FUNC_1(uint8_t VAR_2, uint64_t VAR_3)
{
    int VAR_4;
    int VAR_5;

    if (!VAR_1)
        return -1;

    VAR_5 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
        if ((((uint64_t) 1) << VAR_4) & VAR_3)
 {
            if (FUNC_0(VAR_4, VAR_2) == 0)
         VAR_5 = -2;
        }
    }

    return VAR_5;
}
