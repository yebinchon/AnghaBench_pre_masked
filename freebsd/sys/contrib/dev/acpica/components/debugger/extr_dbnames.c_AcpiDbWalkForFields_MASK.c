
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int UINT32 ;
struct TYPE_23__ {TYPE_4__* Object; } ;
struct TYPE_20__ {int Length; int Pointer; } ;
struct TYPE_19__ {int Value; } ;
struct TYPE_22__ {int Type; TYPE_6__ Buffer; TYPE_5__ Integer; } ;
struct TYPE_21__ {scalar_t__ AddressSpaceId; int Count; } ;
struct TYPE_17__ {TYPE_2__* RegionObj; } ;
struct TYPE_18__ {TYPE_3__ Field; } ;
struct TYPE_15__ {scalar_t__ SpaceId; } ;
struct TYPE_16__ {TYPE_1__ Region; } ;
struct TYPE_14__ {scalar_t__ Pointer; void* Length; } ;
typedef int ACPI_STATUS ;
typedef TYPE_7__ ACPI_REGION_WALK_INFO ;
typedef TYPE_8__ ACPI_OBJECT ;
typedef TYPE_9__ ACPI_NAMESPACE_NODE ;
typedef int ACPI_HANDLE ;
typedef TYPE_10__ ACPI_BUFFER ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;


 int VAR_1 ;
 int FUNC_3 (int ,int *,int *,TYPE_10__*) ;
 int FUNC_4 (int ,TYPE_10__*,int ) ;
 TYPE_9__* FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ACPI_STATUS
FUNC_8 (
    ACPI_HANDLE VAR_5,
    UINT32 VAR_6,
    void *VAR_7,
    void **VAR_8)
{
    ACPI_OBJECT *VAR_9;
    ACPI_REGION_WALK_INFO *VAR_10 = (ACPI_REGION_WALK_INFO *) VAR_7;
    ACPI_BUFFER VAR_11;
    ACPI_STATUS VAR_12;
    ACPI_NAMESPACE_NODE *VAR_13 = FUNC_5 (VAR_5);


    if (!VAR_13)
    {
       return (VAR_1);
    }
    if (VAR_13->Object->Field.RegionObj->Region.SpaceId != VAR_10->AddressSpaceId)
    {
       return (VAR_1);
    }

    VAR_10->Count++;



    VAR_11.Length = VAR_0;
    VAR_12 = FUNC_4 (VAR_5, &VAR_11, VAR_4);
    if (FUNC_0 (VAR_12))
    {
        FUNC_6 ("Could Not get pathname for object %p\n", VAR_5);
        return (VAR_1);
    }

    FUNC_6 ("%s ", (char *) VAR_11.Pointer);
    FUNC_2 (VAR_11.Pointer);

    VAR_11.Length = VAR_0;
    FUNC_3 (VAR_5, ((void*)0), ((void*)0), &VAR_11);




    FUNC_6 ("{");

    VAR_9 = (ACPI_OBJECT *) VAR_11.Pointer;
    switch (VAR_9->Type)
    {
        case 128:

            FUNC_6 ("%8.8X%8.8X", FUNC_1 (VAR_9->Integer.Value));
            break;

        case 129:

            FUNC_7 (VAR_9->Buffer.Pointer,
                VAR_9->Buffer.Length, VAR_3 | VAR_2, 0);
            break;

        default:

            break;
    }

    FUNC_6 ("}\n");

    FUNC_2 (VAR_11.Pointer);
    return (VAR_1);
}
