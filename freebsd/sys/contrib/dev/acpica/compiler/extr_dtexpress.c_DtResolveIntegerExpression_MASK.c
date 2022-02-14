
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_4__ {int Value; } ;
typedef TYPE_1__ DT_FIELD ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;

ACPI_STATUS
FUNC_2 (
    DT_FIELD *VAR_3,
    UINT64 *VAR_4)
{
    UINT64 VAR_5;


    FUNC_0 (VAR_1, "Full Integer expression: %s\n",
        VAR_3->Value);

    VAR_2 = VAR_3;

    VAR_5 = FUNC_1 (VAR_3->Value);
    *VAR_4 = VAR_5;
    return (VAR_0);
}
