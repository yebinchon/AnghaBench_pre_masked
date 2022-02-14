
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_3__ {int Opcode; char* Name; } ;
typedef int DT_FIELD ;
typedef int ACPI_IORT_MEMORY_ACCESS ;
typedef int ACPI_HEST_NOTIFY ;
typedef int ACPI_GENERIC_ADDRESS ;
typedef TYPE_1__ ACPI_DMTABLE_INFO ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*) ;

UINT32
FUNC_5 (
    DT_FIELD *VAR_2,
    ACPI_DMTABLE_INFO *VAR_3)
{
    UINT32 VAR_4 = 0;
    char *VAR_5;




    switch (VAR_3->Opcode)
    {
    case 180:
    case 179:
    case 178:
    case 177:
    case 176:
    case 175:
    case 174:
    case 173:
    case 172:
    case 171:
    case 169:
    case 168:
    case 167:
    case 165:
    case 164:
    case 166:
    case 170:
    case 155:
    case 182:

        VAR_4 = 0;
        break;

    case 130:
    case 189:
    case 141:
    case 197:
    case 156:
    case 162:
    case 153:
    case 148:
    case 146:
    case 145:
    case 143:
    case 140:
    case 196:
    case 159:
    case 181:
    case 186:
    case 185:
    case 184:
    case 183:
    case 187:

        VAR_4 = 1;
        break;

    case 137:
    case 188:
    case 161:
    case 158:
    case 149:
    case 147:

        VAR_4 = 2;
        break;

    case 136:

        VAR_4 = 3;
        break;

    case 135:
    case 152:
    case 142:
    case 154:
    case 138:

        VAR_4 = 4;
        break;

    case 134:

        VAR_4 = 5;
        break;

    case 133:
    case 151:

        VAR_4 = 6;
        break;

    case 132:
    case 191:

        VAR_4 = 7;
        break;

    case 131:
    case 150:

        VAR_4 = 8;
        break;

    case 139:

        VAR_5 = FUNC_2 (VAR_2);
        if (VAR_5)
        {
            VAR_4 = FUNC_4 (VAR_5) + 1;
        }
        else
        {

            FUNC_3 (VAR_1, "Expected \"%s\"", VAR_3->Name);
            FUNC_0 (VAR_0, ((void*)0), VAR_1);
            return (0);
        }
        break;

    case 163:

        VAR_4 = sizeof (ACPI_GENERIC_ADDRESS);
        break;

    case 160:

        VAR_4 = sizeof (ACPI_HEST_NOTIFY);
        break;

    case 157:

        VAR_4 = sizeof (ACPI_IORT_MEMORY_ACCESS);
        break;

    case 190:
    case 144:

        VAR_5 = FUNC_2 (VAR_2);
        if (VAR_5)
        {
            VAR_4 = FUNC_1 (VAR_5);
        }
        else
        {

            FUNC_3 (VAR_1, "Expected \"%s\"", VAR_3->Name);
            FUNC_0 (VAR_0, ((void*)0), VAR_1);
            return (0);
        }
        break;

    case 195:

        VAR_4 = 10;
        break;

    case 194:

        VAR_4 = 12;
        break;

    case 192:
    case 128:

        VAR_4 = 16;
        break;

    case 193:

        VAR_4 = 128;
        break;

    case 129:

        VAR_5 = FUNC_2 (VAR_2);



        VAR_4 = (FUNC_4 (VAR_5) + 1) * sizeof(UINT16);
        break;

    default:

        FUNC_0 (VAR_0, VAR_2, "Invalid table opcode");
        return (0);
    }

    return (VAR_4);
}
