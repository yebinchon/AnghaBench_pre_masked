
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int String; } ;
struct TYPE_8__ {int Namepath; TYPE_1__ Value; int ExternalName; void* ParentMethod; } ;
struct TYPE_9__ {TYPE_2__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_0,
    ACPI_PARSE_OBJECT *VAR_1)
{
    ACPI_STATUS VAR_2;




    VAR_0->Asl.ExternalName = VAR_1->Asl.Value.String;



    VAR_0->Asl.ParentMethod = (void *) VAR_1;



    FUNC_1 (VAR_0, VAR_0->Asl.ExternalName);



    VAR_2 = FUNC_2 (VAR_1->Asl.Value.String, &VAR_0->Asl.Namepath);
    if (FUNC_0 (VAR_2))
    {

    }
}
