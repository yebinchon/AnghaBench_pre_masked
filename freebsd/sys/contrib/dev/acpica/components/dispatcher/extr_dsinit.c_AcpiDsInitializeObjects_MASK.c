
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_7__ {int OpRegionCount; int MethodCount; int SerializedMethodCount; int NonSerialMethodCount; int SerialMethodCount; int DeviceCount; int ObjectCount; int TableIndex; int OwnerId; } ;
struct TYPE_6__ {int OemTableId; int Signature; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;
typedef int ACPI_OWNER_ID ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_2__ ACPI_INIT_WALK_INFO ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,TYPE_1__**) ;
 int FUNC_7 (int ,int *,int ,int ,int ,int *,TYPE_2__*,int *) ;
 int FUNC_8 (int ,int *) ;
 int VAR_9 ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (int ) ;

ACPI_STATUS
FUNC_11 (
    UINT32 VAR_10,
    ACPI_NAMESPACE_NODE *VAR_11)
{
    ACPI_STATUS VAR_12;
    ACPI_INIT_WALK_INFO VAR_13;
    ACPI_TABLE_HEADER *VAR_14;
    ACPI_OWNER_ID VAR_15;


    FUNC_5 (VAR_9);


    VAR_12 = FUNC_8 (VAR_10, &VAR_15);
    if (FUNC_4 (VAR_12))
    {
        FUNC_10 (VAR_12);
    }

    FUNC_1 ((VAR_0,
        "**** Starting initialization of namespace objects ****\n"));



    FUNC_9 (&VAR_13, 0, sizeof (ACPI_INIT_WALK_INFO));

    VAR_13.OwnerId = VAR_15;
    VAR_13.TableIndex = VAR_10;







    VAR_12 = FUNC_7 (VAR_4, VAR_11, VAR_5,
        VAR_2, VAR_8, ((void*)0), &VAR_13, ((void*)0));
    if (FUNC_4 (VAR_12))
    {
        FUNC_3 ((VAR_6, VAR_12, "During WalkNamespace"));
    }

    VAR_12 = FUNC_6 (VAR_10, &VAR_14);
    if (FUNC_4 (VAR_12))
    {
        FUNC_10 (VAR_12);
    }



    if (FUNC_0 (VAR_14->Signature, VAR_3))
    {
        FUNC_2 ((VAR_1,
            "\nACPI table initialization:\n"));
    }



    FUNC_2 ((VAR_1,
        "Table [%4.4s: %-8.8s] (id %.2X) - %4u Objects with %3u Devices, "
        "%3u Regions, %4u Methods (%u/%u/%u Serial/Non/Cvt)\n",
        VAR_14->Signature, VAR_14->OemTableId, VAR_15, VAR_13.ObjectCount,
        VAR_13.DeviceCount,VAR_13.OpRegionCount, VAR_13.MethodCount,
        VAR_13.SerialMethodCount, VAR_13.NonSerialMethodCount,
        VAR_13.SerializedMethodCount));

    FUNC_1 ((VAR_0, "%u Methods, %u Regions\n",
        VAR_13.MethodCount, VAR_13.OpRegionCount));

    FUNC_10 (VAR_7);
}
