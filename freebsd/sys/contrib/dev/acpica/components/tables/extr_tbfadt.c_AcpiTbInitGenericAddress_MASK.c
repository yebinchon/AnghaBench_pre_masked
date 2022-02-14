
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT64 ;
struct TYPE_3__ {int SpaceId; int BitWidth; scalar_t__ AccessWidth; scalar_t__ BitOffset; int Address; } ;
typedef TYPE_1__ ACPI_GENERIC_ADDRESS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_GENERIC_ADDRESS *VAR_2,
    UINT8 VAR_3,
    UINT8 VAR_4,
    UINT64 VAR_5,
    const char *VAR_6,
    UINT8 VAR_7)
{
    UINT8 VAR_8;






    VAR_8 = (UINT8) (VAR_4 * 8);
    if (VAR_4 > 31)
    {





        if (!(VAR_7 & VAR_0))
        {
            FUNC_0 ((VAR_1,
                "%s - 32-bit FADT register is too long (%u bytes, %u bits) "
                "to convert to GAS struct - 255 bits max, truncating",
                VAR_6, VAR_4, (VAR_4 * 8)));
        }

        VAR_8 = 255;
    }





    FUNC_1 (&VAR_2->Address, &VAR_5);



    VAR_2->SpaceId = VAR_3;
    VAR_2->BitWidth = VAR_8;
    VAR_2->BitOffset = 0;
    VAR_2->AccessWidth = 0;
}
