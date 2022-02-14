
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_7__ {scalar_t__ Integer; TYPE_4__* Arg; } ;
struct TYPE_8__ {TYPE_2__ Value; TYPE_4__* Next; } ;
struct TYPE_6__ {int* Data; } ;
struct TYPE_9__ {TYPE_3__ Common; TYPE_1__ Named; } ;
typedef int BOOLEAN ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

BOOLEAN
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_2)
{
    UINT8 *VAR_3;
    UINT32 VAR_4;
    ACPI_PARSE_OBJECT *VAR_5;
    ACPI_PARSE_OBJECT *VAR_6;
    UINT32 VAR_7;




    VAR_5 = VAR_2->Common.Value.Arg;



    VAR_6 = VAR_5->Common.Next;
    if (!VAR_6)
    {
        return (VAR_0);
    }



    VAR_3 = VAR_6->Named.Data;
    VAR_4 = (UINT32) VAR_6->Common.Value.Integer;



    if ((!VAR_4) ||
         (VAR_4 < 2) ||
         (VAR_3[VAR_4-1] != 0))
    {
        return (VAR_0);
    }






    if ((VAR_4 == 2) && (VAR_3[0] == 0x79))
    {
        return (VAR_0);
    }



    for (VAR_7 = 0; VAR_7 < (VAR_4 - 1); VAR_7++)
    {







        if (!FUNC_0 (VAR_3[VAR_7]))
        {
            return (VAR_0);
        }
    }

    return (VAR_1);
}
