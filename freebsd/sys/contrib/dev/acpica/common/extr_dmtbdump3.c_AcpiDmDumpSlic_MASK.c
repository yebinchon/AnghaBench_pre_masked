
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Length; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;


 int FUNC_0 (scalar_t__,int,TYPE_1__*,scalar_t__,int ) ;
 int VAR_0 ;

void
FUNC_1 (
    ACPI_TABLE_HEADER *VAR_1)
{

    (void) FUNC_0 (VAR_1->Length, sizeof (ACPI_TABLE_HEADER), VAR_1,
        VAR_1->Length - sizeof (*VAR_1), VAR_0);
}
