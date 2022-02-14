
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_23__ {scalar_t__ CurrentTableCount; } ;
struct TYPE_19__ {int * CvFilename; } ;
struct TYPE_22__ {TYPE_1__ Common; } ;
struct TYPE_21__ {scalar_t__ Signature; scalar_t__ Length; } ;
struct TYPE_20__ {int ParseFlags; } ;
struct TYPE_18__ {int * Filename; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef TYPE_3__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef int ACPI_OWNER_ID ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,int *,scalar_t__) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 TYPE_2__* FUNC_4 (int ,TYPE_7__*,int *,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_7__*,int *,int *,scalar_t__,int *,int ) ;
 scalar_t__ VAR_7 ;
 TYPE_10__* VAR_8 ;
 TYPE_7__* VAR_9 ;
 TYPE_8__ VAR_10 ;
 int FUNC_6 (int ,scalar_t__,int *) ;
 TYPE_7__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int *) ;
 int FUNC_11 (TYPE_3__*,scalar_t__*) ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_11 ;

ACPI_STATUS
FUNC_13 (
    ACPI_TABLE_HEADER *VAR_12,
    ACPI_OWNER_ID *VAR_13,
    BOOLEAN VAR_14,
    BOOLEAN VAR_15)
{
    ACPI_STATUS VAR_16 = VAR_6;
    ACPI_WALK_STATE *VAR_17;
    UINT8 *VAR_18;
    UINT32 VAR_19;
    UINT32 VAR_20;


    if (!VAR_12)
    {
        return (VAR_4);
    }



    FUNC_12 (VAR_11, "Pass 1 parse of [%4.4s]\n", (char *) VAR_12->Signature);

    VAR_19 = VAR_12->Length - sizeof (ACPI_TABLE_HEADER);
    VAR_18 = ((UINT8 *) VAR_12 + sizeof (ACPI_TABLE_HEADER));
    FUNC_1(VAR_12, VAR_18, VAR_19);



    VAR_9 = FUNC_7 (VAR_18);
    if (!VAR_9)
    {
        return (VAR_5);
    }
    VAR_17 = FUNC_4 (0, VAR_9, ((void*)0), ((void*)0));
    if (!VAR_17)
    {
        return (VAR_5);
    }

    VAR_16 = FUNC_5 (VAR_17, VAR_9,
        ((void*)0), VAR_18, VAR_19, ((void*)0), VAR_0);
    if (FUNC_0 (VAR_16))
    {
        return (VAR_16);
    }

    VAR_17->ParseFlags &= ~VAR_2;
    VAR_17->ParseFlags |= VAR_3;

    VAR_16 = FUNC_8 (VAR_17);
    if (FUNC_0 (VAR_16))
    {
        return (VAR_16);
    }



    VAR_20 = VAR_10.CurrentTableCount - 1;



    if (VAR_14)
    {
        VAR_16 = FUNC_11 (VAR_12, &VAR_20);
        if (FUNC_0 (VAR_16))
        {
            return (VAR_16);
        }
        VAR_16 = FUNC_9 (VAR_20);
        if (FUNC_0 (VAR_16))
        {
            return (VAR_16);
        }
        if (VAR_13)
        {
            VAR_16 = FUNC_10 (VAR_20, VAR_13);
            if (FUNC_0 (VAR_16))
            {
                return (VAR_16);
            }
        }
    }

    FUNC_12 (VAR_11, "Pass 2 parse of [%4.4s]\n", (char *) VAR_12->Signature);

    VAR_16 = FUNC_6 (VAR_1, VAR_20, ((void*)0));
    if (FUNC_0 (VAR_16))
    {
        return (VAR_16);
    }



    if (VAR_15)
    {
        return (VAR_6);
    }





    FUNC_12 (VAR_11,
        "Parsing Deferred Opcodes (Methods/Buffers/Packages/Regions)\n");

    (void) FUNC_3 (VAR_9);
    FUNC_12 (VAR_11, "\n");



    FUNC_2 (VAR_9);

    FUNC_12 (VAR_11, "Parsing completed\n");
    return (VAR_6);
}
