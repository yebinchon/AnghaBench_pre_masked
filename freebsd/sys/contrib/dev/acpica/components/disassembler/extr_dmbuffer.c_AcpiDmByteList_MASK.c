
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_19__ {int Level; } ;
struct TYPE_14__ {scalar_t__ Integer; } ;
struct TYPE_16__ {TYPE_10__* Parent; TYPE_1__ Value; } ;
struct TYPE_17__ {int * Data; } ;
struct TYPE_18__ {TYPE_3__ Common; TYPE_4__ Named; } ;
struct TYPE_15__ {int DisasmOpcode; } ;
struct TYPE_13__ {TYPE_2__ Common; } ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;
typedef TYPE_6__ ACPI_OP_WALK_INFO ;
 int VAR_0 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (TYPE_6__*,TYPE_10__*,int *,scalar_t__) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;

void
FUNC_8 (
    ACPI_OP_WALK_INFO *VAR_1,
    ACPI_PARSE_OBJECT *VAR_2)
{
    UINT8 *VAR_3;
    UINT32 VAR_4;


    VAR_3 = VAR_2->Named.Data;
    VAR_4 = (UINT32) VAR_2->Common.Value.Integer;





    switch (VAR_2->Common.Parent->Common.DisasmOpcode)
    {
    case 131:

        FUNC_3 (
            VAR_1, VAR_2->Common.Parent, VAR_3, VAR_4);
        break;

    case 130:

        FUNC_1 (VAR_1->Level);
        FUNC_7 ((char *) VAR_3, VAR_0);
        FUNC_6 ("\n");
        break;

    case 128:

        FUNC_5 (VAR_2);
        break;

    case 129:

        FUNC_4 (VAR_2);
        break;

    case 132:



        FUNC_2 (VAR_1->Level, VAR_3, VAR_4);
        break;

    case 133:
    default:




        FUNC_0 (VAR_1->Level, VAR_3, VAR_4);
        break;
    }
}
