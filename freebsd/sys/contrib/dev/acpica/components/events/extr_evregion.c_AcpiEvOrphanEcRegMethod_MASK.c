
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ Type; TYPE_2__* Object; } ;
struct TYPE_15__ {scalar_t__ Value; } ;
struct TYPE_17__ {TYPE_3__ Integer; void* Type; } ;
struct TYPE_16__ {int Count; TYPE_5__* Pointer; } ;
struct TYPE_13__ {scalar_t__ SpaceId; } ;
struct TYPE_14__ {TYPE_1__ Region; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OBJECT_LIST ;
typedef TYPE_5__ ACPI_OBJECT ;
typedef TYPE_6__ ACPI_NAMESPACE_NODE ;
typedef int ACPI_HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int *,TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_6__*,int ,int *) ;
 TYPE_6__* FUNC_4 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_7 (
    ACPI_NAMESPACE_NODE *VAR_8)
{
    ACPI_HANDLE VAR_9;
    ACPI_NAMESPACE_NODE *VAR_10;
    ACPI_STATUS VAR_11;
    ACPI_OBJECT_LIST VAR_12;
    ACPI_OBJECT VAR_13[2];


    FUNC_1 (VAR_5);


    if (!VAR_8)
    {
        VAR_7;
    }



    (void) FUNC_6 (VAR_1);



    VAR_11 = FUNC_3 (VAR_8, VAR_6, &VAR_9);
    if (FUNC_0 (VAR_11))
    {
        goto Exit;
    }
    VAR_10 = FUNC_4 (VAR_8, ((void*)0));
    while (VAR_10)
    {
        if ((VAR_10->Type == VAR_4) &&
            (VAR_10->Object) &&
            (VAR_10->Object->Region.SpaceId == VAR_0))
        {
            goto Exit;
        }

        VAR_10 = FUNC_4 (VAR_8, VAR_10);
    }



    VAR_12.Count = 2;
    VAR_12.Pointer = VAR_13;
    VAR_13[0].Type = VAR_3;
    VAR_13[0].Integer.Value = VAR_0;
    VAR_13[1].Type = VAR_3;
    VAR_13[1].Integer.Value = VAR_2;

    (void) FUNC_2 (VAR_9, ((void*)0), &VAR_12, ((void*)0));

Exit:


    (void) FUNC_5 (VAR_1);
    VAR_7;
}
