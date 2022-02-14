
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ParseOpcode; TYPE_2__* Next; TYPE_2__* Child; TYPE_2__* Parent; int NameSeg; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_2__*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_4)
{
    ACPI_PARSE_OBJECT *VAR_5;
    ACPI_PARSE_OBJECT *VAR_6;




    if (!FUNC_0 (VAR_2, &VAR_4->Asl.NameSeg))
    {
        return;
    }



    VAR_6 = VAR_4->Asl.Parent;
    VAR_5 = VAR_6->Asl.Child;



    while (VAR_5)
    {
        if (VAR_5->Asl.ParseOpcode == VAR_3)
        {
            return;
        }

        VAR_5 = VAR_5->Asl.Next;
    }



    FUNC_1 (VAR_1, VAR_0, VAR_4, ((void*)0));
}
