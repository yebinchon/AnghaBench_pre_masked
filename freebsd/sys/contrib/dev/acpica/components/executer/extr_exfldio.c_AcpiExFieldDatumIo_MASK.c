
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT32 ;
struct TYPE_18__ {int AccessByteWidth; } ;
struct TYPE_17__ {int Type; int Flags; } ;
struct TYPE_16__ {scalar_t__ Value; int DataObj; int IndexObj; } ;
struct TYPE_15__ {scalar_t__ Value; int BankObj; } ;
struct TYPE_14__ {scalar_t__ BaseByteOffset; TYPE_2__* BufferObj; } ;
struct TYPE_19__ {TYPE_7__ CommonField; TYPE_6__ Common; TYPE_5__ IndexField; TYPE_4__ BankField; TYPE_3__ BufferField; } ;
struct TYPE_12__ {scalar_t__ Pointer; } ;
struct TYPE_13__ {TYPE_1__ Buffer; } ;
typedef int FieldDatumByteOffset ;
typedef int ACPI_STATUS ;
typedef TYPE_8__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__*,int) ;
 int FUNC_9 (int ,scalar_t__*,int) ;
 int FUNC_10 (int ,scalar_t__) ;
 int VAR_7 ;
 int FUNC_11 (scalar_t__,scalar_t__*,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_13 (
    ACPI_OPERAND_OBJECT *VAR_8,
    UINT32 VAR_9,
    UINT64 *VAR_10,
    UINT32 VAR_11)
{
    ACPI_STATUS VAR_12;
    UINT64 VAR_13;


    FUNC_4 (VAR_7, VAR_9);


    if (VAR_11 == VAR_1)
    {
        if (!VAR_10)
        {
            VAR_13 = 0;


            VAR_10 = &VAR_13;
        }



        *VAR_10 = 0;
    }
    switch (VAR_8->Common.Type)
    {
    case 131:




        if (!(VAR_8->Common.Flags & VAR_6))
        {
            VAR_12 = FUNC_6 (VAR_8);
            if (FUNC_2 (VAR_12))
            {
                FUNC_12 (VAR_12);
            }
        }

        if (VAR_11 == VAR_1)
        {




            FUNC_11 (*VAR_10,
                (VAR_8->BufferField.BufferObj)->Buffer.Pointer +
                    VAR_8->BufferField.BaseByteOffset +
                    VAR_9,
                VAR_8->CommonField.AccessByteWidth);
        }
        else
        {




            FUNC_11 ((VAR_8->BufferField.BufferObj)->Buffer.Pointer +
                VAR_8->BufferField.BaseByteOffset +
                VAR_9,
                VAR_10, VAR_8->CommonField.AccessByteWidth);
        }

        VAR_12 = VAR_5;
        break;

    case 130:




        if (FUNC_10 (VAR_8->BankField.BankObj,
                (UINT64) VAR_8->BankField.Value))
        {
            FUNC_12 (VAR_3);
        }





        VAR_12 = FUNC_9 (VAR_8->BankField.BankObj,
                    &VAR_8->BankField.Value,
                    sizeof (VAR_8->BankField.Value));
        if (FUNC_2 (VAR_12))
        {
            FUNC_12 (VAR_12);
        }
    case 128:




        VAR_12 = FUNC_7 (
            VAR_8, VAR_9, VAR_10, VAR_11);
        break;

    case 129:




        if (FUNC_10 (VAR_8->IndexField.IndexObj,
                (UINT64) VAR_8->IndexField.Value))
        {
            FUNC_12 (VAR_3);
        }



        VAR_9 += VAR_8->IndexField.Value;

        FUNC_0 ((VAR_0,
            "Write to Index Register: Value %8.8X\n",
            VAR_9));

        VAR_12 = FUNC_9 (VAR_8->IndexField.IndexObj,
            &VAR_9, sizeof (VAR_9));
        if (FUNC_2 (VAR_12))
        {
            FUNC_12 (VAR_12);
        }

        if (VAR_11 == VAR_1)
        {


            FUNC_0 ((VAR_0,
                "Read from Data Register\n"));

            VAR_12 = FUNC_8 (
                VAR_8->IndexField.DataObj, VAR_10, sizeof (UINT64));
        }
        else
        {


            FUNC_0 ((VAR_0,
                "Write to Data Register: Value %8.8X%8.8X\n",
                FUNC_3 (*VAR_10)));

            VAR_12 = FUNC_9 (
                VAR_8->IndexField.DataObj, VAR_10, sizeof (UINT64));
        }
        break;

    default:

        FUNC_1 ((VAR_4, "Wrong object type in field I/O %u",
            VAR_8->Common.Type));
        VAR_12 = VAR_2;
        break;
    }

    if (FUNC_5 (VAR_12))
    {
        if (VAR_11 == VAR_1)
        {
            FUNC_0 ((VAR_0,
                "Value Read %8.8X%8.8X, Width %u\n",
                FUNC_3 (*VAR_10),
                VAR_8->CommonField.AccessByteWidth));
        }
        else
        {
            FUNC_0 ((VAR_0,
                "Value Written %8.8X%8.8X, Width %u\n",
                FUNC_3 (*VAR_10),
                VAR_8->CommonField.AccessByteWidth));
        }
    }

    FUNC_12 (VAR_12);
}
