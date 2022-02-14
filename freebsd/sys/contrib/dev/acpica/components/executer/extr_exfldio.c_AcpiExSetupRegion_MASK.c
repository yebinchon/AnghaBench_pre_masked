
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_10__ {scalar_t__ SpaceId; scalar_t__ Length; int Node; } ;
struct TYPE_9__ {scalar_t__ BaseByteOffset; scalar_t__ AccessByteWidth; int Node; TYPE_4__* RegionObj; } ;
struct TYPE_8__ {scalar_t__ Type; int Flags; } ;
struct TYPE_11__ {TYPE_3__ Region; TYPE_2__ CommonField; TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_SIZE ;
typedef TYPE_4__ ACPI_OPERAND_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_11 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_9 (
    ACPI_OPERAND_OBJECT *VAR_12,
    UINT32 VAR_13)
{
    ACPI_STATUS VAR_14 = VAR_8;
    ACPI_OPERAND_OBJECT *VAR_15;
    UINT8 VAR_16;


    FUNC_2 (VAR_11, VAR_13);


    VAR_15 = VAR_12->CommonField.RegionObj;



    if (VAR_15->Common.Type != VAR_3)
    {
        FUNC_0 ((VAR_7, "Needed Region, found type 0x%X (%s)",
            VAR_15->Common.Type,
            FUNC_7 (VAR_15)));

        FUNC_8 (VAR_5);
    }

    VAR_16 = VAR_15->Region.SpaceId;



    if (!FUNC_5 (VAR_16))
    {
        FUNC_0 ((VAR_7,
            "Invalid/unknown Address Space ID: 0x%2.2X", VAR_16));
        FUNC_8 (VAR_4);
    }





    if (!(VAR_15->Common.Flags & VAR_9))
    {
        VAR_14 = FUNC_4 (VAR_15);
        if (FUNC_1 (VAR_14))
        {
            FUNC_8 (VAR_14);
        }
    }





    if (VAR_16 == VAR_2 ||
        VAR_16 == VAR_0 ||
        VAR_16 == VAR_1)
    {


        FUNC_8 (VAR_8);
    }
    if (VAR_15->Region.Length <
        (VAR_12->CommonField.BaseByteOffset + VAR_13 +
        VAR_12->CommonField.AccessByteWidth))
    {
        if (VAR_10)
        {





            if (FUNC_3 (VAR_15->Region.Length,
                    VAR_12->CommonField.AccessByteWidth) >=
                ((ACPI_SIZE) VAR_12->CommonField.BaseByteOffset +
                    VAR_12->CommonField.AccessByteWidth +
                    VAR_13))
            {
                FUNC_8 (VAR_8);
            }
        }

        if (VAR_15->Region.Length < VAR_12->CommonField.AccessByteWidth)
        {





            FUNC_0 ((VAR_7,
                "Field [%4.4s] access width (%u bytes) "
                "too large for region [%4.4s] (length %u)",
                FUNC_6 (VAR_12->CommonField.Node),
                VAR_12->CommonField.AccessByteWidth,
                FUNC_6 (VAR_15->Region.Node),
                VAR_15->Region.Length));
        }





        FUNC_0 ((VAR_7,
            "Field [%4.4s] Base+Offset+Width %u+%u+%u "
            "is beyond end of region [%4.4s] (length %u)",
            FUNC_6 (VAR_12->CommonField.Node),
            VAR_12->CommonField.BaseByteOffset,
            VAR_13, VAR_12->CommonField.AccessByteWidth,
            FUNC_6 (VAR_15->Region.Node),
            VAR_15->Region.Length));

        FUNC_8 (VAR_6);
    }

    FUNC_8 (VAR_8);
}
