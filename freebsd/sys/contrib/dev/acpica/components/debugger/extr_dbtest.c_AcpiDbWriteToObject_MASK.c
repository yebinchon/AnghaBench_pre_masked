
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int Type; } ;
struct TYPE_11__ {int Handle; int ActualType; } ;
struct TYPE_13__ {TYPE_1__ Reference; int Type; } ;
struct TYPE_12__ {int Count; TYPE_3__* Pointer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT_LIST ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef TYPE_4__ ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,TYPE_2__*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static ACPI_STATUS
FUNC_6 (
    ACPI_NAMESPACE_NODE *VAR_6,
    ACPI_OBJECT *VAR_7)
{
    ACPI_OBJECT_LIST VAR_8;
    ACPI_OBJECT VAR_9[2];
    ACPI_STATUS VAR_10;


    VAR_9[0].Type = VAR_1;
    VAR_9[0].Reference.ActualType = VAR_6->Type;
    VAR_9[0].Reference.Handle = FUNC_0 (VAR_0, VAR_6);



    FUNC_5 (&VAR_9[1], VAR_7, sizeof (ACPI_OBJECT));

    VAR_8.Count = 2;
    VAR_8.Pointer = VAR_9;

    VAR_2 = VAR_4;
    VAR_10 = FUNC_2 (VAR_5, ((void*)0), &VAR_8, ((void*)0));
    VAR_2 = VAR_3;

    if (FUNC_1 (VAR_10))
    {
        FUNC_4 ("Could not write to object, %s",
            FUNC_3 (VAR_10));
    }

    return (VAR_10);
}
