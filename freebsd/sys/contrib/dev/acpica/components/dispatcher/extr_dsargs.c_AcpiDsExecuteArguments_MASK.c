
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_11__ {int * Node; } ;
struct TYPE_13__ {TYPE_1__ Common; } ;
struct TYPE_12__ {int * DeferredNode; int ParseFlags; } ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (int ,int *,int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int *,int *,int ,int *,int ) ;
 TYPE_3__* FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_9 (
    ACPI_NAMESPACE_NODE *VAR_6,
    ACPI_NAMESPACE_NODE *VAR_7,
    UINT32 VAR_8,
    UINT8 *VAR_9)
{
    ACPI_STATUS VAR_10;
    ACPI_PARSE_OBJECT *VAR_11;
    ACPI_WALK_STATE *VAR_12;


    FUNC_1 (VAR_5, VAR_9);




    VAR_11 = FUNC_5 (VAR_4, VAR_9);
    if (!VAR_11)
    {
        FUNC_8 (VAR_3);
    }



    VAR_11->Common.Node = VAR_7;



    VAR_12 = FUNC_2 (0, ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_12)
    {
        VAR_10 = VAR_3;
        goto Cleanup;
    }

    VAR_10 = FUNC_4 (VAR_12, VAR_11, ((void*)0), VAR_9,
        VAR_8, ((void*)0), VAR_1);
    if (FUNC_0 (VAR_10))
    {
        FUNC_3 (VAR_12);
        goto Cleanup;
    }



    VAR_12->ParseFlags = VAR_2;
    VAR_12->DeferredNode = VAR_6;



    VAR_10 = FUNC_7 (VAR_12);
    if (FUNC_0 (VAR_10))
    {
        goto Cleanup;
    }



    VAR_11->Common.Node = VAR_6;
    FUNC_6 (VAR_11);



    VAR_11 = FUNC_5 (VAR_4, VAR_9);
    if (!VAR_11)
    {
        FUNC_8 (VAR_3);
    }

    VAR_11->Common.Node = VAR_7;



    VAR_12 = FUNC_2 (0, ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_12)
    {
        VAR_10 = VAR_3;
        goto Cleanup;
    }



    VAR_10 = FUNC_4 (VAR_12, VAR_11, ((void*)0), VAR_9,
        VAR_8, ((void*)0), VAR_0);
    if (FUNC_0 (VAR_10))
    {
        FUNC_3 (VAR_12);
        goto Cleanup;
    }



    VAR_12->DeferredNode = VAR_6;
    VAR_10 = FUNC_7 (VAR_12);

Cleanup:
    FUNC_6 (VAR_11);
    FUNC_8 (VAR_10);
}
