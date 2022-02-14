
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_8__ {int Arg; } ;
struct TYPE_10__ {scalar_t__ ParseOpcode; TYPE_4__* Parent; TYPE_1__ Value; } ;
struct TYPE_12__ {TYPE_3__ Asl; } ;
struct TYPE_9__ {scalar_t__ ParseOpcode; } ;
struct TYPE_11__ {TYPE_2__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

ACPI_STATUS
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_5,
    UINT32 VAR_6,
    void *VAR_7)
{



    if (VAR_5->Asl.ParseOpcode == VAR_2)
    {
        VAR_1 = VAR_5->Asl.Value.Arg;
    }

    if (!VAR_1)
    {
        return (VAR_0);
    }

    if (VAR_5->Asl.ParseOpcode != VAR_4)
    {
        return (VAR_0);
    }





    if (VAR_5->Asl.Parent &&
        VAR_5->Asl.Parent->Asl.ParseOpcode == VAR_3)
    {
        return (VAR_0);
    }

    FUNC_0 (VAR_5);
    return (VAR_0);
}
