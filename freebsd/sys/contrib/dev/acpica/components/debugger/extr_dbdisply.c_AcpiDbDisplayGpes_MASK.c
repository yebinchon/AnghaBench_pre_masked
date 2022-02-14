
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_20__ {int Length; char* Pointer; } ;
struct TYPE_19__ {scalar_t__ Node; size_t RegisterCount; int GpeCount; struct TYPE_19__* Next; int BlockBaseNumber; TYPE_7__* EventInfo; TYPE_5__* RegisterInfo; } ;
struct TYPE_14__ {TYPE_6__* NotifyList; } ;
struct TYPE_18__ {int Flags; TYPE_3__ Dispatch; int RuntimeCount; } ;
struct TYPE_17__ {struct TYPE_17__* Next; } ;
struct TYPE_13__ {int Address; } ;
struct TYPE_12__ {int Address; } ;
struct TYPE_16__ {TYPE_2__ EnableAddress; TYPE_1__ StatusAddress; int EnableForWake; int EnableForRun; int BaseGpeNumber; } ;
struct TYPE_15__ {struct TYPE_15__* Next; int InterruptNumber; TYPE_8__* GpeBlockListHead; } ;
typedef int Buffer ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_GPE_XRUPT_INFO ;
typedef TYPE_5__ ACPI_GPE_REGISTER_INFO ;
typedef TYPE_6__ ACPI_GPE_NOTIFY_INFO ;
typedef TYPE_7__ ACPI_GPE_EVENT_INFO ;
typedef TYPE_8__ ACPI_GPE_BLOCK_INFO ;
typedef TYPE_9__ ACPI_BUFFER ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;





 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 (scalar_t__,int ,TYPE_9__*) ;
 int FUNC_4 (char*,...) ;

void
FUNC_5 (
    void)
{
    ACPI_GPE_BLOCK_INFO *VAR_6;
    ACPI_GPE_XRUPT_INFO *VAR_7;
    ACPI_GPE_EVENT_INFO *VAR_8;
    ACPI_GPE_REGISTER_INFO *VAR_9;
    char *VAR_10;
    ACPI_GPE_NOTIFY_INFO *VAR_11;
    UINT32 VAR_12;
    UINT32 VAR_13 = 0;
    UINT32 VAR_14;
    UINT32 VAR_15;
    UINT32 VAR_16;
    char VAR_17[80];
    ACPI_BUFFER VAR_18;
    ACPI_STATUS VAR_19;


    VAR_18.Length = sizeof (VAR_17);
    VAR_18.Pointer = VAR_17;

    VAR_13 = 0;



    VAR_7 = VAR_5;
    while (VAR_7)
    {
        VAR_6 = VAR_7->GpeBlockListHead;
        while (VAR_6)
        {
            VAR_19 = FUNC_3 (VAR_6->Node,
                VAR_0, &VAR_18);
            if (FUNC_0 (VAR_19))
            {
                FUNC_4 ("Could not convert name to pathname\n");
            }

            if (VAR_6->Node == VAR_4)
            {
                VAR_10 = "FADT-defined GPE block";
            }
            else
            {
                VAR_10 = "GPE Block Device";
            }

            FUNC_4 (
                "\nBlock %u - Info %p  DeviceNode %p [%s] - %s\n",
                VAR_13, VAR_6, VAR_6->Node, VAR_17, VAR_10);

            FUNC_4 (
                "    Registers:    %u (%u GPEs)\n",
                VAR_6->RegisterCount, VAR_6->GpeCount);

            FUNC_4 (
                "    GPE range:    0x%X to 0x%X on interrupt %u\n",
                VAR_6->BlockBaseNumber,
                VAR_6->BlockBaseNumber + (VAR_6->GpeCount - 1),
                VAR_7->InterruptNumber);

            FUNC_4 (
                "    RegisterInfo: %p  Status %8.8X%8.8X Enable %8.8X%8.8X\n",
                VAR_6->RegisterInfo,
                FUNC_1 (
                    VAR_6->RegisterInfo->StatusAddress.Address),
                FUNC_1 (
                    VAR_6->RegisterInfo->EnableAddress.Address));

            FUNC_4 ("    EventInfo:    %p\n", VAR_6->EventInfo);



            for (VAR_14 = 0; VAR_14 < VAR_6->RegisterCount; VAR_14++)
            {
                VAR_9 = &VAR_6->RegisterInfo[VAR_14];

                FUNC_4 (
                    "    Reg %u: (GPE %.2X-%.2X)  "
                    "RunEnable %2.2X WakeEnable %2.2X"
                    " Status %8.8X%8.8X Enable %8.8X%8.8X\n",
                    VAR_14, VAR_9->BaseGpeNumber,
                    VAR_9->BaseGpeNumber +
                        (VAR_3 - 1),
                    VAR_9->EnableForRun,
                    VAR_9->EnableForWake,
                    FUNC_1 (
                        VAR_9->StatusAddress.Address),
                    FUNC_1 (
                        VAR_9->EnableAddress.Address));



                for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
                {
                    VAR_12 = (VAR_14 * VAR_3) + VAR_15;
                    VAR_8 = &VAR_6->EventInfo[VAR_12];

                    if (FUNC_2 (VAR_8->Flags) ==
                        130)
                    {


                        continue;
                    }

                    FUNC_4 (
                        "        GPE %.2X: %p  RunRefs %2.2X Flags %2.2X (",
                        VAR_6->BlockBaseNumber + VAR_12, VAR_8,
                        VAR_8->RuntimeCount, VAR_8->Flags);



                    if (VAR_8->Flags & VAR_2)
                    {
                        FUNC_4 ("Level, ");
                    }
                    else
                    {
                        FUNC_4 ("Edge,  ");
                    }

                    if (VAR_8->Flags & VAR_1)
                    {
                        FUNC_4 ("CanWake, ");
                    }
                    else
                    {
                        FUNC_4 ("RunOnly, ");
                    }

                    switch (FUNC_2 (VAR_8->Flags))
                    {
                    case 130:

                        FUNC_4 ("NotUsed");
                        break;

                    case 131:

                        FUNC_4 ("Method");
                        break;

                    case 132:

                        FUNC_4 ("Handler");
                        break;

                    case 129:

                        VAR_16 = 0;
                        VAR_11 = VAR_8->Dispatch.NotifyList;
                        while (VAR_11)
                        {
                            VAR_16++;
                            VAR_11 = VAR_11->Next;
                        }

                        FUNC_4 ("Implicit Notify on %u devices",
                            VAR_16);
                        break;

                    case 128:

                        FUNC_4 ("RawHandler");
                        break;

                    default:

                        FUNC_4 ("UNKNOWN: %X",
                            FUNC_2 (VAR_8->Flags));
                        break;
                    }

                    FUNC_4 (")\n");
                }
            }

            VAR_13++;
            VAR_6 = VAR_6->Next;
        }

        VAR_7 = VAR_7->Next;
    }
}
