
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_8__ {scalar_t__ AmlOpcode; TYPE_2__* Next; } ;
struct TYPE_9__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_3)
{
    UINT32 VAR_4;
    ACPI_PARSE_OBJECT *VAR_5;




    VAR_4 = FUNC_3 (VAR_3);
    if (!VAR_4)
    {
        return;
    }

    VAR_5 = FUNC_2 (((void*)0), VAR_3);
    if (!VAR_5)
    {
        return;
    }



    if (FUNC_0 (&VAR_4, VAR_2))
    {
        FUNC_1 (VAR_5);
        return;
    }



    if (!FUNC_0 (&VAR_4, VAR_1))
    {
        return;
    }



    if (VAR_5->Common.AmlOpcode != VAR_0)
    {
        FUNC_1 (VAR_5);
        return;
    }



    VAR_5 = FUNC_2 (((void*)0), VAR_5);
    if (!VAR_5)
    {
        return;
    }



    VAR_5 = VAR_5->Common.Next;
    while (VAR_5)
    {
        FUNC_1 (VAR_5);
        VAR_5 = VAR_5->Common.Next;
    }
}
