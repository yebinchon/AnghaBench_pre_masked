
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_10__ {TYPE_3__* Object; } ;
struct TYPE_8__ {TYPE_4__* Node; } ;
struct TYPE_7__ {int ParamCount; } ;
struct TYPE_9__ {TYPE_2__ Region; TYPE_1__ Method; } ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef TYPE_4__ ACPI_NAMESPACE_NODE ;




 TYPE_3__* FUNC_0 (int const) ;

void
FUNC_1 (
    UINT8 VAR_0,
    ACPI_NAMESPACE_NODE **VAR_1,
    UINT32 VAR_2)
{
    ACPI_OPERAND_OBJECT *VAR_3;


    switch (VAR_0)
    {
    case 129:



        VAR_3 = FUNC_0 (129);
        VAR_3->Method.ParamCount = (UINT8) VAR_2;
        (*VAR_1)->Object = VAR_3;
        break;

    case 128:



        VAR_3 = FUNC_0 (128);
        VAR_3->Region.Node = *VAR_1;
        (*VAR_1)->Object = VAR_3;
        break;

    default:

        break;
    }
}
