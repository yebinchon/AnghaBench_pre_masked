
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_7__ {size_t Count; TYPE_3__* Elements; } ;
struct TYPE_6__ {TYPE_3__* Pointer; } ;
struct TYPE_8__ {int Type; TYPE_2__ Package; TYPE_1__ Buffer; } ;
typedef TYPE_3__ ACPI_OBJECT ;


 int FUNC_0 (TYPE_3__*) ;



void
FUNC_1 (
    UINT32 VAR_0,
    ACPI_OBJECT *VAR_1)
{
    UINT32 VAR_2;


    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
        switch (VAR_1[VAR_2].Type)
        {
        case 129:

            FUNC_0 (VAR_1[VAR_2].Buffer.Pointer);
            break;

        case 128:



            FUNC_1 (VAR_1[VAR_2].Package.Count,
                VAR_1[VAR_2].Package.Elements);



            FUNC_0 (VAR_1[VAR_2].Package.Elements);
            break;

        default:

            break;
        }
    }
}
