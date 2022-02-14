
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int Flags; int Length; int Address; int SpaceId; int * Node; } ;
struct TYPE_8__ {int AmlStart; int AmlLength; int ScopeNode; } ;
struct TYPE_10__ {TYPE_2__ Region; TYPE_1__ Extra; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int ,int ) ;
 TYPE_3__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int FUNC_9 (int ) ;

ACPI_STATUS
FUNC_10 (
    ACPI_OPERAND_OBJECT *VAR_6)
{
    ACPI_NAMESPACE_NODE *VAR_7;
    ACPI_STATUS VAR_8;
    ACPI_OPERAND_OBJECT *VAR_9;


    FUNC_3 (VAR_5, VAR_6);


    if (VAR_6->Region.Flags & VAR_4)
    {
        FUNC_9 (VAR_3);
    }

    VAR_9 = FUNC_5 (VAR_6);
    if (!VAR_9)
    {
        FUNC_9 (VAR_2);
    }



    VAR_7 = VAR_6->Region.Node;

    FUNC_0 (FUNC_7 (
        VAR_1, VAR_7, ((void*)0)));

    FUNC_1 ((VAR_0,
        "[%4.4s] OpRegion Arg Init at AML %p\n",
        FUNC_8 (VAR_7), VAR_9->Extra.AmlStart));



    VAR_8 = FUNC_4 (VAR_7, VAR_9->Extra.ScopeNode,
        VAR_9->Extra.AmlLength, VAR_9->Extra.AmlStart);
    if (FUNC_2 (VAR_8))
    {
        FUNC_9 (VAR_8);
    }

    VAR_8 = FUNC_6 (VAR_6->Region.SpaceId,
        VAR_6->Region.Address, VAR_6->Region.Length, VAR_7);
    FUNC_9 (VAR_8);
}
