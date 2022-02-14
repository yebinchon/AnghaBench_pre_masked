
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_7__ {size_t RegisterCount; struct TYPE_7__* Next; int * EventInfo; TYPE_2__* RegisterInfo; int * Node; } ;
struct TYPE_6__ {int EnableForRun; int EnableForWake; int BaseGpeNumber; } ;
struct TYPE_5__ {TYPE_3__* GpeBlockListHead; } ;
typedef int ACPI_SIZE ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_1__ ACPI_GPE_XRUPT_INFO ;
typedef TYPE_2__ ACPI_GPE_REGISTER_INFO ;
typedef int ACPI_GPE_EVENT_INFO ;
typedef TYPE_3__ ACPI_GPE_BLOCK_INFO ;
typedef int ACPI_CPU_FLAGS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_2 (int *,int *,size_t) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;

UINT32
FUNC_5 (
    ACPI_GPE_XRUPT_INFO *VAR_5)
{
    ACPI_GPE_BLOCK_INFO *VAR_6;
    ACPI_NAMESPACE_NODE *VAR_7;
    ACPI_GPE_REGISTER_INFO *VAR_8;
    ACPI_GPE_EVENT_INFO *VAR_9;
    UINT32 VAR_10;
    UINT32 VAR_11 = VAR_2;
    ACPI_CPU_FLAGS VAR_12;
    UINT32 VAR_13;
    UINT32 VAR_14;


    FUNC_1 (VAR_4);



    if (!VAR_5)
    {
        return (VAR_11);
    }






    VAR_12 = FUNC_3 (VAR_3);



    VAR_6 = VAR_5->GpeBlockListHead;
    while (VAR_6)
    {
        VAR_7 = VAR_6->Node;





        for (VAR_13 = 0; VAR_13 < VAR_6->RegisterCount; VAR_13++)
        {


            VAR_8 = &VAR_6->RegisterInfo[VAR_13];





            if (!(VAR_8->EnableForRun |
                  VAR_8->EnableForWake))
            {
                FUNC_0 ((VAR_0,
                    "Ignore disabled registers for GPE %02X-%02X: "
                    "RunEnable=%02X, WakeEnable=%02X\n",
                    VAR_8->BaseGpeNumber,
                    VAR_8->BaseGpeNumber + (VAR_1 - 1),
                    VAR_8->EnableForRun,
                    VAR_8->EnableForWake));
                continue;
            }



            for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
            {


                VAR_9 = &VAR_6->EventInfo[((ACPI_SIZE) VAR_13 *
                    VAR_1) + VAR_14];
                VAR_10 = VAR_14 + VAR_8->BaseGpeNumber;
                FUNC_4 (VAR_3, VAR_12);
                VAR_11 |= FUNC_2 (
                    VAR_7, VAR_9, VAR_10);
                VAR_12 = FUNC_3 (VAR_3);
            }
        }

        VAR_6 = VAR_6->Next;
    }

    FUNC_4 (VAR_3, VAR_12);
    return (VAR_11);
}
