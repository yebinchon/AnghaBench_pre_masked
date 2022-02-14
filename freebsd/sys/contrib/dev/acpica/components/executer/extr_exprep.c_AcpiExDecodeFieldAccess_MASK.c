
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_6__ {scalar_t__ Type; } ;
struct TYPE_5__ {int BitLength; int StartFieldBitOffset; } ;
struct TYPE_7__ {TYPE_2__ Common; TYPE_1__ CommonField; } ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;

 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static UINT32
FUNC_4 (
    ACPI_OPERAND_OBJECT *VAR_4,
    UINT8 VAR_5,
    UINT32 *VAR_6)
{
    UINT32 VAR_7;
    UINT32 VAR_8;
    UINT32 VAR_9;


    FUNC_1 (VAR_3);


    VAR_7 = (VAR_5 & VAR_2);

    switch (VAR_7)
    {
    case 133:
        VAR_8 = 1;
        VAR_9 = 8;
        break;

    case 131:
    case 132:

        VAR_8 = 1;
        VAR_9 = 8;
        break;

    case 128:

        VAR_8 = 2;
        VAR_9 = 16;
        break;

    case 130:

        VAR_8 = 4;
        VAR_9 = 32;
        break;

    case 129:

        VAR_8 = 8;
        VAR_9 = 64;
        break;

    default:



        FUNC_0 ((VAR_1,
            "Unknown field access type 0x%X",
            VAR_7));

        FUNC_3 (0);
    }

    if (VAR_4->Common.Type == VAR_0)
    {





        VAR_8 = 1;
    }

    *VAR_6 = VAR_8;
    FUNC_3 (VAR_9);
}
