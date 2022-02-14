
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_11__ {size_t Count; TYPE_3__* Ids; } ;
struct TYPE_9__ {int String; } ;
struct TYPE_8__ {int String; } ;
struct TYPE_12__ {int Valid; TYPE_4__ CompatibleIdList; TYPE_2__ UniqueId; TYPE_1__ HardwareId; int * LowestDstates; int * HighestDstates; int Flags; int Address; } ;
struct TYPE_10__ {int String; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef int ACPI_HANDLE ;
typedef TYPE_5__ ACPI_DEVICE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_5__**) ;
 int FUNC_6 (char*,size_t,...) ;
 int FUNC_7 (char*,int *,int) ;

void
FUNC_8 (
    char *VAR_3)
{
    ACPI_SIZE VAR_4;
    ACPI_HANDLE VAR_5;
    ACPI_DEVICE_INFO *VAR_6;
    ACPI_STATUS VAR_7;
    UINT32 VAR_8;


    VAR_4 = FUNC_7 (VAR_3, ((void*)0), 16);
    VAR_5 = FUNC_3 (VAR_4);

    VAR_7 = FUNC_5 (VAR_5, &VAR_6);
    if (FUNC_0 (VAR_7))
    {
        FUNC_6 ("Could not get object info, %s\n",
            FUNC_4 (VAR_7));
        return;
    }

    FUNC_6 ("ADR: %8.8X%8.8X, Flags: %X\n",
        FUNC_1 (VAR_6->Address), VAR_6->Flags);

    FUNC_6 ("S1D-%2.2X S2D-%2.2X S3D-%2.2X S4D-%2.2X\n",
        VAR_6->HighestDstates[0], VAR_6->HighestDstates[1],
        VAR_6->HighestDstates[2], VAR_6->HighestDstates[3]);

    FUNC_6 ("S0W-%2.2X S1W-%2.2X S2W-%2.2X S3W-%2.2X S4W-%2.2X\n",
        VAR_6->LowestDstates[0], VAR_6->LowestDstates[1],
        VAR_6->LowestDstates[2], VAR_6->LowestDstates[3],
        VAR_6->LowestDstates[4]);

    if (VAR_6->Valid & VAR_1)
    {
        FUNC_6 ("HID: %s\n", VAR_6->HardwareId.String);
    }

    if (VAR_6->Valid & VAR_2)
    {
        FUNC_6 ("UID: %s\n", VAR_6->UniqueId.String);
    }

    if (VAR_6->Valid & VAR_0)
    {
        for (VAR_8 = 0; VAR_8 < VAR_6->CompatibleIdList.Count; VAR_8++)
        {
            FUNC_6 ("CID %u: %s\n", VAR_8,
                VAR_6->CompatibleIdList.Ids[VAR_8].String);
        }
    }

    FUNC_2 (VAR_6);
}
