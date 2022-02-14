
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {scalar_t__ Integer; TYPE_4__* Arg; } ;
struct TYPE_8__ {int DisasmFlags; TYPE_2__ Value; TYPE_4__* Next; } ;
struct TYPE_6__ {scalar_t__* Data; } ;
struct TYPE_9__ {TYPE_3__ Common; TYPE_1__ Named; } ;
typedef int BOOLEAN ;
typedef size_t ACPI_SIZE ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;

BOOLEAN
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_3)
{
    UINT8 *VAR_4;
    UINT32 VAR_5;
    UINT32 VAR_6;
    ACPI_PARSE_OBJECT *VAR_7;
    ACPI_PARSE_OBJECT *VAR_8;
    UINT32 VAR_9;




    VAR_7 = VAR_3->Common.Value.Arg;



    VAR_8 = VAR_7->Common.Next;
    if (!VAR_8)
    {
        return (VAR_1);
    }



    VAR_4 = VAR_8->Named.Data;
    VAR_5 = (UINT32) VAR_8->Common.Value.Integer;
    VAR_6 = FUNC_0 (VAR_5);





    if ((!VAR_5) ||
         (VAR_5 < 4) ||
         (VAR_5 & 1) ||
        ((UINT16 *) (void *) VAR_4)[VAR_6 - 1] != 0)
    {
        return (VAR_1);
    }







    for (VAR_9 = 0; VAR_9 < (VAR_5 - 2); VAR_9 += 2)
    {
        if ((VAR_4[VAR_9] == 0) ||
            !(FUNC_1 (VAR_4[VAR_9])) ||
            (VAR_4[(ACPI_SIZE) VAR_9 + 1] != 0))
        {
            return (VAR_1);
        }
    }



    VAR_7->Common.DisasmFlags |= VAR_0;
    return (VAR_2);
}
