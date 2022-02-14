
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {scalar_t__ AmlOpcode; TYPE_2__* Parent; scalar_t__ EndNodeComment; } ;
struct TYPE_7__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,int *,int ) ;

void
FUNC_3(
    ACPI_PARSE_OBJECT *VAR_5,
    UINT32 VAR_6)
{

    if (!VAR_3)
    {
        FUNC_1 (")");
        return;
    }





    if (FUNC_0 (VAR_5) == VAR_4)
    {
        FUNC_2 (VAR_5, VAR_0, ((void*)0), VAR_6);
    }

    FUNC_1 (")");

    if (VAR_5->Common.EndNodeComment)
    {
        FUNC_2 (VAR_5, VAR_1, ((void*)0), VAR_6);
    }
    else if ((VAR_5->Common.Parent->Common.AmlOpcode == VAR_2) &&
         VAR_5->Common.Parent->Common.EndNodeComment)
    {
        FUNC_2 (VAR_5->Common.Parent,
            VAR_1, ((void*)0), VAR_6);
    }
}
