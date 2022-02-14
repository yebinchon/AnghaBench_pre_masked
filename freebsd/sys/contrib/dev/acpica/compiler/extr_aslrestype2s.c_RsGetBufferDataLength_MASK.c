
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT16 ;
struct TYPE_6__ {scalar_t__ ParseOpcode; TYPE_2__* Child; } ;
struct TYPE_7__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static UINT16
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_1)
{
    UINT16 VAR_2 = 0;
    ACPI_PARSE_OBJECT *VAR_3;




    while (VAR_1)
    {
        if (VAR_1->Asl.ParseOpcode == VAR_0)
        {


            VAR_3 = VAR_1->Asl.Child;
            VAR_3 = FUNC_0 (VAR_3);



            while (VAR_3)
            {
                VAR_2++;
                VAR_3 = FUNC_0 (VAR_3);
            }

            return (VAR_2);
        }

        VAR_1 = FUNC_0 (VAR_1);
    }

    return (VAR_2);
}
