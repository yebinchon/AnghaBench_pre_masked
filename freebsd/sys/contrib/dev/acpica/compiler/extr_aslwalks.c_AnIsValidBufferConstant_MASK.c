
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ParseOpcode; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef int BOOLEAN ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOLEAN
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_5)
{
    if (!VAR_5)
    {
        return (VAR_0);
    }

    if ((VAR_5->Asl.ParseOpcode == VAR_1) ||
        (VAR_5->Asl.ParseOpcode == VAR_3) ||
        (VAR_5->Asl.ParseOpcode == VAR_2))
    {
        return (VAR_4);
    }

    return (VAR_0);
}
