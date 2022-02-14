
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {scalar_t__ ParseOpcode; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;

ACPI_STATUS
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_2,
    UINT32 VAR_3,
    void *VAR_4)
{
    if (VAR_2->Asl.ParseOpcode == VAR_1)
    {
        FUNC_0 (VAR_2);
    }

    return (VAR_0);
}
