
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ ThreadId; int * OwnerThread; scalar_t__ AcquisitionDepth; TYPE_5__* Next; int * Prev; int OriginalSyncLevel; int OsMutex; int SyncLevel; TYPE_2__* Node; } ;
struct TYPE_12__ {TYPE_3__ Mutex; } ;
struct TYPE_11__ {int CurrentSyncLevel; TYPE_5__* AcquiredMutexList; } ;
struct TYPE_8__ {int Ascii; } ;
struct TYPE_9__ {TYPE_1__ Name; } ;
typedef TYPE_4__ ACPI_THREAD_STATE ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_5__* VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_4 (
    ACPI_THREAD_STATE *VAR_4)
{
    ACPI_OPERAND_OBJECT *VAR_5 = VAR_4->AcquiredMutexList;
    ACPI_OPERAND_OBJECT *VAR_6;


    FUNC_1 (VAR_2);




    while (VAR_5)
    {
        VAR_6 = VAR_5;
        FUNC_0 ((VAR_0,
            "Mutex [%4.4s] force-release, SyncLevel %u Depth %u\n",
            VAR_6->Mutex.Node->Name.Ascii, VAR_6->Mutex.SyncLevel,
            VAR_6->Mutex.AcquisitionDepth));



        if (VAR_6 == VAR_1)
        {


            (void) FUNC_2 ();
        }
        else
        {
            FUNC_3 (VAR_6->Mutex.OsMutex);
        }



        VAR_4->CurrentSyncLevel = VAR_6->Mutex.OriginalSyncLevel;



        VAR_5 = VAR_6->Mutex.Next;

        VAR_6->Mutex.Prev = ((void*)0);
        VAR_6->Mutex.Next = ((void*)0);
        VAR_6->Mutex.AcquisitionDepth = 0;
        VAR_6->Mutex.OwnerThread = ((void*)0);
        VAR_6->Mutex.ThreadId = 0;
    }

    VAR_3;
}
