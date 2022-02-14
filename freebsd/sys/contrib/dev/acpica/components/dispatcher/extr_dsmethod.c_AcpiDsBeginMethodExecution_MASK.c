
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ ThreadCount; int InfoFlags; scalar_t__ SyncLevel; TYPE_3__* Mutex; int OwnerId; } ;
struct TYPE_17__ {TYPE_4__ Method; } ;
struct TYPE_16__ {TYPE_1__* Thread; } ;
struct TYPE_13__ {scalar_t__ SyncLevel; scalar_t__ ThreadId; scalar_t__ OriginalSyncLevel; int OsMutex; int AcquisitionDepth; } ;
struct TYPE_14__ {TYPE_2__ Mutex; } ;
struct TYPE_12__ {scalar_t__ CurrentSyncLevel; scalar_t__ ThreadId; } ;
typedef TYPE_5__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_6__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *,TYPE_6__*,TYPE_5__*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_10 ;
 int FUNC_10 (int ) ;

ACPI_STATUS
FUNC_11 (
    ACPI_NAMESPACE_NODE *VAR_11,
    ACPI_OPERAND_OBJECT *VAR_12,
    ACPI_WALK_STATE *VAR_13)
{
    ACPI_STATUS VAR_14 = VAR_8;


    FUNC_2 (VAR_10, VAR_11);


    if (!VAR_11)
    {
        FUNC_10 (VAR_7);
    }

    FUNC_4 (VAR_11, VAR_12, VAR_13);



    if (VAR_12->Method.ThreadCount == VAR_2)
    {
        FUNC_0 ((VAR_6,
            "Method reached maximum reentrancy limit (255)"));
        FUNC_10 (VAR_4);
    }




    if (VAR_12->Method.InfoFlags & VAR_1)
    {





        if (!VAR_12->Method.Mutex)
        {
            VAR_14 = FUNC_3 (VAR_12);
            if (FUNC_1 (VAR_14))
            {
                FUNC_10 (VAR_14);
            }
        }
        if (VAR_13 &&
            (!(VAR_12->Method.InfoFlags & VAR_0)) &&
            (VAR_13->Thread->CurrentSyncLevel >
                VAR_12->Method.Mutex->Mutex.SyncLevel))
        {
            FUNC_0 ((VAR_6,
                "Cannot acquire Mutex for method [%4.4s]"
                ", current SyncLevel is too large (%u)",
                FUNC_9 (VAR_11),
                VAR_13->Thread->CurrentSyncLevel));

            FUNC_10 (VAR_5);
        }





        if (!VAR_13 ||
            !VAR_12->Method.Mutex->Mutex.ThreadId ||
            (VAR_13->Thread->ThreadId !=
                VAR_12->Method.Mutex->Mutex.ThreadId))
        {




            VAR_14 = FUNC_5 (
                VAR_12->Method.Mutex->Mutex.OsMutex, VAR_3);
            if (FUNC_1 (VAR_14))
            {
                FUNC_10 (VAR_14);
            }



            if (VAR_13)
            {
                VAR_12->Method.Mutex->Mutex.OriginalSyncLevel =
                    VAR_13->Thread->CurrentSyncLevel;

                VAR_12->Method.Mutex->Mutex.ThreadId =
                    VAR_13->Thread->ThreadId;
                if (!(VAR_12->Method.InfoFlags &
                    VAR_0))
                {
                    VAR_13->Thread->CurrentSyncLevel =
                        VAR_12->Method.SyncLevel;
                }
            }
            else
            {
                VAR_12->Method.Mutex->Mutex.OriginalSyncLevel =
                    VAR_12->Method.Mutex->Mutex.SyncLevel;

                VAR_12->Method.Mutex->Mutex.ThreadId =
                    FUNC_6 ();
            }
        }



        VAR_12->Method.Mutex->Mutex.AcquisitionDepth++;
    }






    if (!VAR_12->Method.OwnerId)
    {
        VAR_14 = FUNC_8 (&VAR_12->Method.OwnerId);
        if (FUNC_1 (VAR_14))
        {
            goto Cleanup;
        }
    }





    VAR_12->Method.ThreadCount++;
    VAR_9++;
    FUNC_10 (VAR_14);


Cleanup:


    if (VAR_12->Method.Mutex)
    {
        FUNC_7 (VAR_12->Method.Mutex->Mutex.OsMutex);
    }
    FUNC_10 (VAR_14);
}
