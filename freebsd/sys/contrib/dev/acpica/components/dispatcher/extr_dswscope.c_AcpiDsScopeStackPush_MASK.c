
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_10__ {scalar_t__ Value; int DescriptorType; } ;
struct TYPE_9__ {int * Node; } ;
struct TYPE_12__ {TYPE_2__ Common; TYPE_1__ Scope; } ;
struct TYPE_11__ {TYPE_4__* ScopeInfo; scalar_t__ ScopeDepth; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_4__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_4__**,TYPE_4__*) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_10 (int ) ;

ACPI_STATUS
FUNC_11 (
    ACPI_NAMESPACE_NODE *VAR_8,
    ACPI_OBJECT_TYPE VAR_9,
    ACPI_WALK_STATE *VAR_10)
{
    ACPI_GENERIC_STATE *VAR_11;
    ACPI_GENERIC_STATE *VAR_12;


    FUNC_3 (VAR_7);


    if (!VAR_8)
    {


        FUNC_2 ((VAR_4, "Null scope parameter"));
        FUNC_10 (VAR_3);
    }



    if (!FUNC_9 (VAR_9))
    {
        FUNC_4 ((VAR_4,
            "Invalid object type: 0x%X", VAR_9));
    }



    VAR_11 = FUNC_5 ();
    if (!VAR_11)
    {
        FUNC_10 (VAR_5);
    }



    VAR_11->Common.DescriptorType = VAR_1;
    VAR_11->Scope.Node = VAR_8;
    VAR_11->Common.Value = (UINT16) VAR_9;

    VAR_10->ScopeDepth++;

    FUNC_0 ((VAR_0,
        "[%.2d] Pushed scope ", (UINT32) VAR_10->ScopeDepth));

    VAR_12 = VAR_10->ScopeInfo;
    if (VAR_12)
    {
        FUNC_1 ((VAR_0,
            "[%4.4s] (%s)",
            FUNC_6 (VAR_12->Scope.Node),
            FUNC_7 (VAR_12->Common.Value)));
    }
    else
    {
        FUNC_1 ((VAR_0, VAR_2));
    }

    FUNC_1 ((VAR_0,
        ", New scope -> [%4.4s] (%s)\n",
        FUNC_6 (VAR_11->Scope.Node),
        FUNC_7 (VAR_11->Common.Value)));



    FUNC_8 (&VAR_10->ScopeInfo, VAR_11);
    FUNC_10 (VAR_6);
}
