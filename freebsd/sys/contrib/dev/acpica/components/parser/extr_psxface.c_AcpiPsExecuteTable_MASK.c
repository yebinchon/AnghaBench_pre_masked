
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int Node; TYPE_2__* ObjDesc; int FullPathname; int PassNumber; } ;
struct TYPE_14__ {int ParseFlags; int MethodIsNested; int MethodPathname; } ;
struct TYPE_12__ {int InfoFlags; int AmlLength; int AmlStart; int OwnerId; } ;
struct TYPE_13__ {TYPE_1__ Method; } ;
typedef TYPE_3__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_EVALUATE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (int ,int *,int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *,int ,int ,int ,TYPE_4__*,int ) ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_4 ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int ) ;

ACPI_STATUS
FUNC_12 (
    ACPI_EVALUATE_INFO *VAR_7)
{
    ACPI_STATUS VAR_8;
    ACPI_PARSE_OBJECT *VAR_9 = ((void*)0);
    ACPI_WALK_STATE *VAR_10 = ((void*)0);


    FUNC_1 (VAR_6);




    VAR_9 = FUNC_8 (VAR_7->ObjDesc->Method.AmlStart);
    if (!VAR_9)
    {
        VAR_8 = VAR_3;
        goto Cleanup;
    }



    VAR_10 = FUNC_2 (
        VAR_7->ObjDesc->Method.OwnerId, ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_10)
    {
        VAR_8 = VAR_3;
        goto Cleanup;
    }

    VAR_8 = FUNC_4 (VAR_10, VAR_9, VAR_7->Node,
        VAR_7->ObjDesc->Method.AmlStart,
        VAR_7->ObjDesc->Method.AmlLength, VAR_7, VAR_7->PassNumber);
    if (FUNC_0 (VAR_8))
    {
        goto Cleanup;
    }

    VAR_10->MethodPathname = VAR_7->FullPathname;
    VAR_10->MethodIsNested = VAR_5;

    if (VAR_7->ObjDesc->Method.InfoFlags & VAR_0)
    {
        VAR_10->ParseFlags |= VAR_1;
    }



    if (VAR_7->Node && VAR_7->Node != VAR_4)
    {
        VAR_8 = FUNC_5 (
            VAR_7->Node, VAR_2, VAR_10);
        if (FUNC_0 (VAR_8))
        {
            goto Cleanup;
        }
    }




    FUNC_6 ();
    VAR_8 = FUNC_10 (VAR_10);
    FUNC_7 ();
    VAR_10 = ((void*)0);

Cleanup:
    if (VAR_10)
    {
        FUNC_3 (VAR_10);
    }
    if (VAR_9)
    {
        FUNC_9 (VAR_9);
    }
    FUNC_11 (VAR_8);
}
