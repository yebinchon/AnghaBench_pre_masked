
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ParseOpcode; int ParseOpName; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_1)
{

    FUNC_0 (VAR_1->Asl.ParseOpName, FUNC_1 (VAR_1->Asl.ParseOpcode),
        VAR_0);
}
