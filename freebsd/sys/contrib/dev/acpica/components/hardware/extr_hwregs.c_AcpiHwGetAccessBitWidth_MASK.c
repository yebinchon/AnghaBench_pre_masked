
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT64 ;
struct TYPE_3__ {int BitOffset; int BitWidth; scalar_t__ SpaceId; scalar_t__ AccessWidth; } ;
typedef TYPE_1__ ACPI_GENERIC_ADDRESS ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static UINT8
FUNC_4 (
    UINT64 VAR_1,
    ACPI_GENERIC_ADDRESS *VAR_2,
    UINT8 VAR_3)
{
    UINT8 VAR_4;
    if (!VAR_2->BitOffset && VAR_2->BitWidth &&
        FUNC_2 (VAR_2->BitWidth) &&
        FUNC_1 (VAR_2->BitWidth, 8))
    {
        VAR_4 = VAR_2->BitWidth;
    }
    else if (VAR_2->AccessWidth)
    {
        VAR_4 = FUNC_0 (VAR_2->AccessWidth);
    }
    else
    {
        VAR_4 = FUNC_3 (
            VAR_2->BitOffset + VAR_2->BitWidth);
        if (VAR_4 <= 8)
        {
            VAR_4 = 8;
        }
        else
        {
            while (!FUNC_1 (VAR_1, VAR_4 >> 3))
            {
                VAR_4 >>= 1;
            }
        }
    }



    if (VAR_2->SpaceId == VAR_0)
    {
        VAR_3 = 32;
    }






    if (VAR_4 < VAR_3)
    {
        return (VAR_4);
    }
    return (VAR_3);
}
