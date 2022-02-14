
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {int * Arg; } ;
struct TYPE_6__ {scalar_t__ ParseOpcode; TYPE_1__ Value; } ;
struct TYPE_7__ {TYPE_2__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;

ACPI_STATUS
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_3,
    UINT32 VAR_4,
    void *VAR_5)
{



    if (VAR_3->Asl.ParseOpcode == VAR_2)
    {
        VAR_3->Asl.Value.Arg = VAR_1;
        VAR_1 = ((void*)0);
    }

    return (VAR_0);
}
