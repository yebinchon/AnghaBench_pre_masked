
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_8__ {scalar_t__ error; int msgId; } ;
typedef TYPE_1__ t_FmPcdIpcReply ;
typedef TYPE_1__ t_FmPcdIpcMsg ;
struct TYPE_9__ {scalar_t__ guestId; scalar_t__ numOfEnabledGuestPartitionsPcds; void* enabled; scalar_t__ p_FmPcdPrs; scalar_t__ p_FmPcdPlcr; scalar_t__ p_FmPcdKg; scalar_t__ h_IpcSession; } ;
typedef TYPE_3__ t_FmPcd ;
typedef scalar_t__ t_Error ;
typedef int reply ;
typedef int msg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,scalar_t__,char*) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int *,int,int *,int*,int *,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

t_Error FUNC_7(t_Handle VAR_11)
{
    t_FmPcd *VAR_12 = (t_FmPcd*)VAR_11;
    t_Error VAR_13 = VAR_4;

    FUNC_4(VAR_11, VAR_0);

    if (!VAR_12->enabled)
        return VAR_4;

    if ((VAR_12->guestId != VAR_9) &&
        VAR_12->h_IpcSession)
    {
        t_FmPcdIpcMsg VAR_14;
        t_FmPcdIpcReply VAR_15;
        uint32_t VAR_16;

        FUNC_6(&VAR_15, 0, sizeof(VAR_15));
        FUNC_6(&VAR_14, 0, sizeof(VAR_14));
        VAR_14.msgId = VAR_6;
        VAR_16 = sizeof(uint32_t);
        if ((VAR_13 = FUNC_5(VAR_12->h_IpcSession,
                                     (uint8_t*)&VAR_14,
                                     sizeof(VAR_14.msgId),
                                     (uint8_t*)&VAR_15,
                                     &VAR_16,
                                     ((void*)0),
                                     ((void*)0))) != VAR_4)
            FUNC_3(VAR_7, VAR_13, VAR_10);
        if (VAR_16 != sizeof(uint32_t))
            FUNC_3(VAR_7, VAR_2, ("IPC reply length mismatch"));
        if (VAR_15.error == VAR_4)
            VAR_12->enabled = VAR_5;

        return (t_Error)(VAR_15.error);
    }
    else if (VAR_12->guestId != VAR_9)
        FUNC_3(VAR_8, VAR_3,
                     ("running in guest-mode without IPC!"));

    if (VAR_12->numOfEnabledGuestPartitionsPcds != 0)
        FUNC_3(VAR_7, VAR_1,
                     ("Trying to disable a master partition PCD while"
                      "guest partitions are still enabled!"));

    if (VAR_12->p_FmPcdKg)
         FUNC_0(VAR_12);

    if (VAR_12->p_FmPcdPlcr)
        FUNC_1(VAR_12);

    if (VAR_12->p_FmPcdPrs)
        FUNC_2(VAR_12);

    VAR_12->enabled = VAR_5;

    return VAR_4;
}
