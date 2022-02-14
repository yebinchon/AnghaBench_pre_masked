
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_7__ {int Aml; } ;
struct TYPE_10__ {TYPE_1__ Common; } ;
struct TYPE_8__ {int AmlStart; } ;
struct TYPE_9__ {scalar_t__ UserBreakpoint; TYPE_2__ ParserState; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,int *,int) ;

void
FUNC_3 (
    char *VAR_0,
    ACPI_WALK_STATE *VAR_1,
    ACPI_PARSE_OBJECT *VAR_2)
{
    UINT32 VAR_3;
    UINT32 VAR_4;


    if (!VAR_2)
    {
        FUNC_1 ("There is no method currently executing\n");
        return;
    }



    VAR_3 = FUNC_2 (VAR_0, ((void*)0), 16);
    VAR_4 = (UINT32) FUNC_0 (VAR_2->Common.Aml,
        VAR_1->ParserState.AmlStart);
    if (VAR_3 <= VAR_4)
    {
        FUNC_1 ("Breakpoint %X is beyond current address %X\n",
            VAR_3, VAR_4);
    }



    VAR_1->UserBreakpoint = VAR_3;
    FUNC_1 ("Breakpoint set at AML offset %X\n", VAR_3);
}
