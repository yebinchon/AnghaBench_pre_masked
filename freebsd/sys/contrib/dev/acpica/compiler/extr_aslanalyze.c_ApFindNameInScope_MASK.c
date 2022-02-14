
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ParseOpcode; TYPE_2__* Next; int NameSeg; TYPE_2__* Child; TYPE_2__* Parent; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef int BOOLEAN ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

BOOLEAN
FUNC_1 (
    char *VAR_4,
    ACPI_PARSE_OBJECT *VAR_5)
{
    ACPI_PARSE_OBJECT *VAR_6;
    ACPI_PARSE_OBJECT *VAR_7;




    VAR_7 = VAR_5->Asl.Parent;
    VAR_6 = VAR_7->Asl.Child;



    while (VAR_6)
    {
        if ((VAR_6->Asl.ParseOpcode == VAR_1) ||
            (VAR_6->Asl.ParseOpcode == VAR_2))
        {
            if (FUNC_0 (VAR_4, VAR_6->Asl.NameSeg))
            {
                return (VAR_3);
            }
        }

        VAR_6 = VAR_6->Asl.Next;
    }

    return (VAR_0);
}
