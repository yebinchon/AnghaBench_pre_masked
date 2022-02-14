
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_5__ {int ParseOpcode; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_0,
    UINT16 VAR_1)
{

    VAR_0->Asl.ParseOpcode = VAR_1;
    FUNC_0 (VAR_0);
}
