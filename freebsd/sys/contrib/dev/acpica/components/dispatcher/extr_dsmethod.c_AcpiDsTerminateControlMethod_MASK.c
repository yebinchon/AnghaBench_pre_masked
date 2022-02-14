
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int Ascii; } ;
struct TYPE_22__ {TYPE_4__ Name; } ;
struct TYPE_19__ {int InfoFlags; int ThreadCount; scalar_t__ Node; int OwnerId; scalar_t__ SyncLevel; TYPE_3__* Mutex; } ;
struct TYPE_21__ {TYPE_5__ Method; } ;
struct TYPE_20__ {TYPE_8__* MethodNode; TYPE_1__* Thread; } ;
struct TYPE_16__ {scalar_t__ ThreadId; int OsMutex; int OriginalSyncLevel; int AcquisitionDepth; } ;
struct TYPE_17__ {TYPE_2__ Mutex; } ;
struct TYPE_15__ {int CurrentSyncLevel; } ;
typedef TYPE_6__ ACPI_WALK_STATE ;
typedef TYPE_7__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,TYPE_7__*,TYPE_6__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_12 (
    ACPI_OPERAND_OBJECT *VAR_9,
    ACPI_WALK_STATE *VAR_10)
{

    FUNC_2 (VAR_7, VAR_10);




    if (!VAR_9)
    {
        VAR_8;
    }

    if (VAR_10)
    {


        FUNC_4 (VAR_10);
        if (!(VAR_9->Method.InfoFlags & VAR_3) &&
             (VAR_9->Method.ThreadCount == 1))
        {


            (void) FUNC_6 ();
            FUNC_9 (VAR_10->MethodNode);
            (void) FUNC_5 ();
            if (VAR_9->Method.InfoFlags & VAR_2)
            {
                (void) FUNC_6 ();
                FUNC_8 (VAR_9->Method.OwnerId);
                (void) FUNC_5 ();
                VAR_9->Method.InfoFlags &=
                    ~VAR_2;
            }
        }





        if (VAR_9->Method.Mutex)
        {


            VAR_9->Method.Mutex->Mutex.AcquisitionDepth--;
            if (!VAR_9->Method.Mutex->Mutex.AcquisitionDepth)
            {
                VAR_10->Thread->CurrentSyncLevel =
                    VAR_9->Method.Mutex->Mutex.OriginalSyncLevel;

                FUNC_10 (
                    VAR_9->Method.Mutex->Mutex.OsMutex);
                VAR_9->Method.Mutex->Mutex.ThreadId = 0;
            }
        }
    }



    if (VAR_9->Method.ThreadCount)
    {
        VAR_9->Method.ThreadCount--;
    }
    else
    {
        FUNC_1 ((VAR_6,
            "Invalid zero thread count in method"));
    }



    if (VAR_9->Method.ThreadCount)
    {




        FUNC_0 ((VAR_0,
            "*** Completed execution of one thread, %u threads remaining\n",
            VAR_9->Method.ThreadCount));
    }
    else
    {
        if (VAR_9->Method.InfoFlags & VAR_5)
        {
            if (VAR_10)
            {
                FUNC_3 ((
                    "Marking method %4.4s as Serialized "
                    "because of AE_ALREADY_EXISTS error",
                    VAR_10->MethodNode->Name.Ascii));
            }
            VAR_9->Method.InfoFlags &=
                ~VAR_5;

            VAR_9->Method.InfoFlags |=
                (VAR_4 | VAR_1);
            VAR_9->Method.SyncLevel = 0;
        }



        if (!(VAR_9->Method.InfoFlags & VAR_3))
        {
            FUNC_11 (&VAR_9->Method.OwnerId);
        }
    }

    FUNC_7 ((ACPI_NAMESPACE_NODE *) VAR_9->Method.Node,
        VAR_9, VAR_10);

    VAR_8;
}
