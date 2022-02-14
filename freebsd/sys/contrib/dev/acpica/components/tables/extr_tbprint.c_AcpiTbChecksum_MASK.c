
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef int UINT32 ;



UINT8
FUNC_0 (
    UINT8 *VAR_0,
    UINT32 VAR_1)
{
    UINT8 VAR_2 = 0;
    UINT8 *VAR_3 = VAR_0 + VAR_1;


    while (VAR_0 < VAR_3)
    {
        VAR_2 = (UINT8) (VAR_2 + *(VAR_0++));
    }

    return (VAR_2);
}
