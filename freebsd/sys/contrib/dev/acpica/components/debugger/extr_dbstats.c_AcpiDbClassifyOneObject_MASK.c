
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_7__ {int Opcode; } ;
struct TYPE_6__ {size_t Type; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;
typedef int ACPI_OPERAND_OBJECT ;
typedef TYPE_1__ ACPI_NAMESPACE_NODE ;
typedef scalar_t__ ACPI_HANDLE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;

__attribute__((used)) static ACPI_STATUS
FUNC_4 (
    ACPI_HANDLE VAR_15,
    UINT32 VAR_16,
    void *VAR_17,
    void **VAR_18)
{
    ACPI_NAMESPACE_NODE *VAR_19;
    ACPI_OPERAND_OBJECT *VAR_20;
    UINT32 VAR_21;


    VAR_4++;

    VAR_19 = (ACPI_NAMESPACE_NODE *) VAR_15;
    VAR_20 = FUNC_1 (VAR_19);

    FUNC_0 (VAR_20);

    VAR_21 = VAR_19->Type;
    if (VAR_21 > VAR_0)
    {
        VAR_3++;
    }
    else
    {
        VAR_2 [VAR_21]++;
    }

    return (VAR_1);
}
