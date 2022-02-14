
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {int Integer; } ;
struct TYPE_6__ {int AmlOpcode; int DisasmOpcode; TYPE_1__ Value; } ;
struct TYPE_7__ {TYPE_2__ Common; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;



 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_2)
{
    UINT32 VAR_3;
    UINT32 VAR_4[3];
    UINT32 VAR_5;


    switch (VAR_2->Common.AmlOpcode)
    {
    case 129:



        VAR_2->Common.DisasmOpcode = VAR_1;
        break;

    case 128:
    case 130:





        VAR_3 = FUNC_1 ((UINT32) VAR_2->Common.Value.Integer);



        VAR_4[0] = ((VAR_3 >> 26) & 0x1F) + 0x40;
        VAR_4[1] = ((VAR_3 >> 21) & 0x1F) + 0x40;
        VAR_4[2] = ((VAR_3 >> 16) & 0x1F) + 0x40;



        for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
        {
            if (!FUNC_0 (VAR_4[VAR_5]) ||
                !FUNC_2 (VAR_4[VAR_5]))
            {
                return;
            }
        }



        VAR_2->Common.DisasmOpcode = VAR_0;
        break;

    default:
        break;
    }
}
