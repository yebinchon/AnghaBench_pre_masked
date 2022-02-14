
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {scalar_t__ AmlSubtreeLength; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;

ACPI_STATUS
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_1,
    UINT32 VAR_2,
    void *VAR_3)
{

    VAR_1->Asl.AmlSubtreeLength = 0;
    return (VAR_0);
}
