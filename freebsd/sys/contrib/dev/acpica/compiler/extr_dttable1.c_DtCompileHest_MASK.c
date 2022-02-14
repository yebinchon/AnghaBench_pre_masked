
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
typedef int UINT16 ;
struct TYPE_8__ {scalar_t__ NumHardwareBanks; } ;
struct TYPE_7__ {int Buffer; } ;
typedef TYPE_1__ DT_SUBTABLE ;
typedef int DT_FIELD ;
typedef int ACPI_STATUS ;
typedef int ACPI_DMTABLE_INFO ;


 TYPE_6__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_2 (int *,int *,int,int ) ;
 int FUNC_3 (int **,int *,TYPE_1__**) ;
 int FUNC_4 (int ,int *,char*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_6 () ;

ACPI_STATUS
FUNC_7 (
    void **VAR_17)
{
    ACPI_STATUS VAR_18;
    DT_SUBTABLE *VAR_19;
    DT_SUBTABLE *VAR_20;
    DT_FIELD **VAR_21 = (DT_FIELD **) VAR_17;
    DT_FIELD *VAR_22;
    ACPI_DMTABLE_INFO *VAR_23;
    UINT16 VAR_24;
    UINT32 VAR_25;


    VAR_18 = FUNC_3 (VAR_21, VAR_6,
        &VAR_19);
    if (FUNC_1 (VAR_18))
    {
        return (VAR_18);
    }

    VAR_20 = FUNC_6 ();
    FUNC_5 (VAR_20, VAR_19);

    while (*VAR_21)
    {


        VAR_22 = *VAR_21;
        FUNC_2 ((UINT8 *) &VAR_24, *VAR_21, 2, 0);

        switch (VAR_24)
        {
        case 131:

            VAR_23 = VAR_7;
            break;

        case 130:

            VAR_23 = VAR_8;
            break;

        case 128:

            VAR_23 = VAR_11;
            break;

        case 134:

            VAR_23 = VAR_12;
            break;

        case 135:

            VAR_23 = VAR_13;
            break;

        case 136:

            VAR_23 = VAR_14;
            break;

        case 133:

            VAR_23 = VAR_15;
            break;

        case 132:

            VAR_23 = VAR_9;
            break;

        case 129:

            VAR_23 = VAR_10;
            break;

        default:



            FUNC_4 (VAR_5, VAR_22, "HEST");
            return (VAR_3);
        }

        VAR_18 = FUNC_3 (VAR_21, VAR_23, &VAR_19);
        if (FUNC_1 (VAR_18))
        {
            return (VAR_18);
        }

        FUNC_5 (VAR_20, VAR_19);




        VAR_25 = 0;
        switch (VAR_24)
        {
        case 131:

            VAR_25 = (FUNC_0 (VAR_2,
                VAR_19->Buffer))->NumHardwareBanks;
            break;

        case 130:

            VAR_25 = (FUNC_0 (VAR_0,
                VAR_19->Buffer))->NumHardwareBanks;
            break;

        case 129:

            VAR_25 = (FUNC_0 (VAR_1,
                VAR_19->Buffer))->NumHardwareBanks;
            break;

        default:

            break;
        }

        while (VAR_25)
        {
            VAR_18 = FUNC_3 (VAR_21, VAR_16,
                &VAR_19);
            if (FUNC_1 (VAR_18))
            {
                return (VAR_18);
            }

            FUNC_5 (VAR_20, VAR_19);
            VAR_25--;
        }
    }

    return (VAR_4);
}
