
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_8__ {int Opcode; } ;
struct TYPE_7__ {int Value; } ;
typedef TYPE_1__ DT_FIELD ;
typedef TYPE_2__ ACPI_DMTABLE_INFO ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int ,TYPE_1__*,char*) ;
 int FUNC_3 (int ,char*,int) ;

void
FUNC_4 (
    UINT8 *VAR_4,
    DT_FIELD *VAR_5,
    ACPI_DMTABLE_INFO *VAR_6)
{
    UINT64 VAR_7 = 0;
    UINT32 VAR_8 = 1;
    UINT8 VAR_9 = 0;


    VAR_7 = FUNC_0 (VAR_5->Value);

    switch (VAR_6->Opcode)
    {
    case 144:
    case 143:
    case 142:
    case 141:
    case 140:
    case 139:
    case 138:
    case 137:

        VAR_9 = VAR_6->Opcode;
        VAR_8 = 1;
        break;

    case 136:

        VAR_9 = 0;
        VAR_8 = 2;
        break;


    case 135:

        VAR_9 = 1;
        VAR_8 = 2;
        break;


    case 133:

        VAR_9 = 2;
        VAR_8 = 2;
        break;

    case 132:

        VAR_9 = 4;
        VAR_8 = 2;
        break;

    case 131:

        VAR_9 = 0;
        VAR_8 = 4;
        break;

    case 129:

        VAR_9 = 4;
        VAR_8 = 4;
        break;

    case 128:

        VAR_9 = 8;
        VAR_8 = 4;
        break;

    case 130:

        VAR_9 = 12;
        VAR_8 = 4;
        break;

    case 134:

        VAR_9 = 16;
        VAR_8 = 16;
        break;

    default:

        FUNC_2 (VAR_1, VAR_5, "Invalid flag opcode");
        break;
    }



    if (VAR_7 >= ((UINT64) 1 << VAR_8))
    {
        FUNC_3 (VAR_3, "Maximum %u bit", VAR_8);
        FUNC_1 (VAR_0, VAR_2, VAR_5, VAR_3);
        VAR_7 = 0;
    }

    *VAR_4 |= (UINT8) (VAR_7 << VAR_9);
}
