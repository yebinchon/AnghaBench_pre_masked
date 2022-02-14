
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT64 ;
typedef int UINT32 ;
struct TYPE_5__ {int BitOffset; int BitWidth; scalar_t__ SpaceId; } ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_PHYSICAL_ADDRESS ;
typedef scalar_t__ ACPI_IO_ADDRESS ;
typedef TYPE_1__ ACPI_GENERIC_ADDRESS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__*,int,int ,scalar_t__) ;
 int FUNC_7 (scalar_t__,TYPE_1__*,int) ;
 int FUNC_8 (scalar_t__,int*,int) ;
 int FUNC_9 (TYPE_1__*,int,scalar_t__*) ;
 int FUNC_10 (scalar_t__,scalar_t__*,int) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_2 ;

ACPI_STATUS
FUNC_12 (
    UINT64 *VAR_3,
    ACPI_GENERIC_ADDRESS *VAR_4)
{
    UINT64 VAR_5;
    UINT8 VAR_6;
    UINT32 VAR_7;
    UINT8 VAR_8;
    UINT64 VAR_9;
    UINT32 VAR_10;
    UINT8 VAR_11;
    ACPI_STATUS VAR_12;


    FUNC_4 (VAR_2);




    VAR_12 = FUNC_9 (VAR_4, 64, &VAR_5);
    if (FUNC_2 (VAR_12))
    {
        return (VAR_12);
    }





    *VAR_3 = 0;
    VAR_6 = FUNC_7 (VAR_5, VAR_4, 64);
    VAR_7 = VAR_4->BitOffset + VAR_4->BitWidth;
    VAR_8 = VAR_4->BitOffset;





    VAR_11 = 0;
    while (VAR_7)
    {
        if (VAR_8 >= VAR_6)
        {
            VAR_9 = 0;
            VAR_8 -= VAR_6;
        }
        else
        {
            if (VAR_4->SpaceId == VAR_0)
            {
                VAR_12 = FUNC_10 ((ACPI_PHYSICAL_ADDRESS)
                    VAR_5 + VAR_11 * FUNC_1 (VAR_6),
                    &VAR_9, VAR_6);
            }
            else
            {
                VAR_12 = FUNC_8 ((ACPI_IO_ADDRESS)
                    VAR_5 + VAR_11 * FUNC_1 (VAR_6),
                    &VAR_10, VAR_6);
                VAR_9 = (UINT64) VAR_10;
            }
        }





        FUNC_6 (VAR_3, VAR_11 * VAR_6,
            FUNC_5 (VAR_6), VAR_9);

        VAR_7 -= VAR_7 > VAR_6 ? VAR_6 : VAR_7;
        VAR_11++;
    }

    FUNC_0 ((VAR_1,
        "Read:  %8.8X%8.8X width %2d from %8.8X%8.8X (%s)\n",
        FUNC_3 (*VAR_3), VAR_6,
        FUNC_3 (VAR_5), FUNC_11 (VAR_4->SpaceId)));

    return (VAR_12);
}
