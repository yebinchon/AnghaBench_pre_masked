
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_10__ {int NodeFlags; int FullPathname; int ReturnFlags; } ;
struct TYPE_8__ {scalar_t__ Type; } ;
struct TYPE_7__ {scalar_t__ Count; TYPE_3__** Elements; } ;
struct TYPE_9__ {TYPE_2__ Common; TYPE_1__ Package; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef TYPE_4__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ACPI_STATUS
FUNC_1 (
    ACPI_EVALUATE_INFO *VAR_4,
    ACPI_OPERAND_OBJECT **VAR_5)
{
    ACPI_OPERAND_OBJECT *VAR_6 = *VAR_5;
    ACPI_OPERAND_OBJECT **VAR_7;
    ACPI_OPERAND_OBJECT **VAR_8;
    ACPI_OPERAND_OBJECT *VAR_9;
    ACPI_OPERAND_OBJECT *VAR_10;
    UINT32 VAR_11;
    UINT32 VAR_12;




    VAR_7 = VAR_6->Package.Elements;
    VAR_11 = VAR_6->Package.Count;



    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++, VAR_7++)
    {
        VAR_10 = *VAR_7;
        VAR_8 = VAR_10->Package.Elements;



        if (VAR_10->Package.Count < 4)
        {
            continue;
        }







        VAR_9 = VAR_8[3];
        if (!VAR_9 || (VAR_9->Common.Type != VAR_1))
        {
            VAR_8[3] = VAR_8[2];
            VAR_8[2] = VAR_9;
            VAR_4->ReturnFlags |= VAR_0;

            FUNC_0 ((VAR_2,
                VAR_4->FullPathname, VAR_4->NodeFlags,
                "PRT[%X]: Fixed reversed SourceName and SourceIndex",
                VAR_12));
        }
    }

    return (VAR_3);
}
