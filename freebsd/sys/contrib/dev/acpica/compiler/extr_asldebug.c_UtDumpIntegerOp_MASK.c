
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {int Integer; } ;
struct TYPE_7__ {TYPE_1__ Value; } ;
struct TYPE_8__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (TYPE_3__*,int,int) ;

void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_1,
    UINT32 VAR_2,
    UINT32 VAR_3)
{



    FUNC_2 (VAR_1, VAR_2, VAR_3);



    switch (VAR_3)
    {
    case 2:
    case 4:
    case 8:

        FUNC_1 (VAR_0,
            "%*.*X", VAR_3, VAR_3, (UINT32) VAR_1->Asl.Value.Integer);
        break;

    case 16:

        FUNC_1 (VAR_0,
            "%8.8X%8.8X", FUNC_0 (VAR_1->Asl.Value.Integer));
        break;

    default:
        break;
    }
}
