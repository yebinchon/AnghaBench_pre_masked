
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_3__ {int Flags; int Opcode; } ;
typedef TYPE_1__ ACPI_DMTABLE_INFO ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

UINT8
FUNC_0 (
    ACPI_DMTABLE_INFO *VAR_11)
{
    UINT8 VAR_12;





    if (VAR_11->Flags & VAR_10)
    {
        return (VAR_3);
    }



    switch (VAR_11->Opcode)
    {
    case 157:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 151:
    case 150:
    case 149:
    case 148:
    case 146:
    case 145:
    case 144:
    case 142:
    case 141:
    case 143:
    case 147:

        VAR_12 = VAR_2;
        break;

    case 136:
    case 131:
    case 135:
    case 134:
    case 130:

        VAR_12 = VAR_7;
        break;

    case 159:
    case 132:
    case 160:
    case 164:
    case 163:
    case 161:
    case 162:
    case 133:

        VAR_12 = VAR_0;
        break;

    case 140:
    case 139:
    case 138:

        VAR_12 = VAR_4;
        break;

    case 129:

        VAR_12 = VAR_8;
        break;

    case 128:

        VAR_12 = VAR_9;
        break;

    case 158:

        VAR_12 = VAR_1;
        break;

    case 137:

        VAR_12 = VAR_6;
        break;

    default:

        VAR_12 = VAR_5;
        break;
    }

    return (VAR_12);
}
