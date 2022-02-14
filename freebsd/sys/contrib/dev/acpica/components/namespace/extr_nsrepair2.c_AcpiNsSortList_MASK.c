
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_6__ {scalar_t__ Value; } ;
struct TYPE_5__ {TYPE_3__** Elements; } ;
struct TYPE_7__ {TYPE_2__ Integer; TYPE_1__ Package; } ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0 (
    ACPI_OPERAND_OBJECT **VAR_2,
    UINT32 VAR_3,
    UINT32 VAR_4,
    UINT8 VAR_5)
{
    ACPI_OPERAND_OBJECT *VAR_6;
    ACPI_OPERAND_OBJECT *VAR_7;
    ACPI_OPERAND_OBJECT *VAR_8;
    UINT32 VAR_9;
    UINT32 VAR_10;




    for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++)
    {
        for (VAR_10 = (VAR_3 - 1); VAR_10 >= VAR_9; VAR_10--)
        {
            VAR_6 = VAR_2[VAR_10-1]->Package.Elements[VAR_4];
            VAR_7 = VAR_2[VAR_10]->Package.Elements[VAR_4];

            if (((VAR_5 == VAR_0) &&
                    (VAR_6->Integer.Value > VAR_7->Integer.Value)) ||

                ((VAR_5 == VAR_1) &&
                    (VAR_6->Integer.Value < VAR_7->Integer.Value)))
            {
                VAR_8 = VAR_2[VAR_10-1];
                VAR_2[VAR_10-1] = VAR_2[VAR_10];
                VAR_2[VAR_10] = VAR_8;
            }
        }
    }
}
