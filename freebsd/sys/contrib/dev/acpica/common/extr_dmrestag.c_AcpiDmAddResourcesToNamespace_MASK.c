
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_12__ {TYPE_4__* Op; } ;
struct TYPE_9__ {scalar_t__ Integer; TYPE_4__* Arg; } ;
struct TYPE_10__ {TYPE_2__ Value; TYPE_5__* Node; TYPE_4__* Next; } ;
struct TYPE_8__ {scalar_t__ Data; } ;
struct TYPE_11__ {TYPE_3__ Common; TYPE_1__ Named; } ;
typedef int ACPI_SIZE ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ,void**) ;

__attribute__((used)) static void
FUNC_1 (
    ACPI_NAMESPACE_NODE *VAR_1,
    ACPI_PARSE_OBJECT *VAR_2)
{
    ACPI_PARSE_OBJECT *VAR_3;




    VAR_3 = VAR_2->Common.Value.Arg;
    VAR_3 = VAR_3->Common.Next;
    if (!VAR_3)
    {
        return;
    }



    VAR_1->Op = VAR_2;
    VAR_2->Common.Node = VAR_1;





    FUNC_0 (((void*)0), (UINT8 *) VAR_3->Named.Data,
        (ACPI_SIZE) VAR_3->Common.Value.Integer,
        VAR_0, (void **) VAR_1);
}
