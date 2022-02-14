
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_10__ {int msgBody; int msgId; } ;
typedef TYPE_3__ t_FmIpcMsg ;
struct TYPE_8__ {size_t id; scalar_t__ enumType; } ;
struct TYPE_11__ {scalar_t__ maxFrameLength; TYPE_1__ macParams; } ;
typedef TYPE_4__ t_FmIpcMacMaxFrameParams ;
struct TYPE_12__ {scalar_t__ guestId; TYPE_2__* p_FmStateStruct; scalar_t__* h_IpcSessions; } ;
typedef TYPE_5__ t_Fm ;
typedef scalar_t__ t_Error ;
typedef int msg ;
typedef int macMaxFrameLengthParams ;
typedef scalar_t__ e_FmMacType ;
struct TYPE_9__ {scalar_t__* portMaxFrameLengths10G; scalar_t__* portMaxFrameLengths1G; scalar_t__* macMaxFrameLengths1G; scalar_t__* macMaxFrameLengths10G; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int ,scalar_t__,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,size_t*,int,int *,int *,int *,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,TYPE_4__*,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

t_Error FUNC_5(t_Handle VAR_8, e_FmMacType VAR_9, uint8_t VAR_10, uint16_t VAR_11)
{
    t_Fm *VAR_12 = (t_Fm*)VAR_8;

    if ((VAR_12->guestId != VAR_5) &&
        VAR_12->h_IpcSessions[0])
    {
        t_FmIpcMacMaxFrameParams VAR_13;
        t_Error VAR_14;
        t_FmIpcMsg VAR_15;

        FUNC_4(&VAR_15, 0, sizeof(VAR_15));
        VAR_13.macParams.id = VAR_10;
        VAR_13.macParams.enumType = (uint32_t)VAR_9;
        VAR_13.maxFrameLength = (uint16_t)VAR_11;
        VAR_15.msgId = VAR_3;
        FUNC_3(VAR_15.msgBody, &VAR_13, sizeof(VAR_13));
        VAR_14 = FUNC_2(VAR_12->h_IpcSessions[0],
                                (uint8_t*)&VAR_15,
                                sizeof(VAR_15.msgId)+sizeof(VAR_13),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_14 != VAR_2)
            FUNC_0(VAR_4, VAR_14, VAR_6);
        return VAR_2;
    }
    else if (VAR_12->guestId != VAR_5)
        FUNC_0(VAR_4, VAR_1,
                     ("running in guest-mode without IPC!"));
    FUNC_1(VAR_9);

    if ((!VAR_12->p_FmStateStruct->portMaxFrameLengths1G[VAR_10])
       || (VAR_12->p_FmStateStruct->portMaxFrameLengths1G[VAR_10] &&
          (VAR_11 <= VAR_12->p_FmStateStruct->portMaxFrameLengths1G[VAR_10])))
        VAR_12->p_FmStateStruct->macMaxFrameLengths1G[VAR_10] = VAR_11;
    else
        FUNC_0(VAR_4, VAR_0, ("MAC maxFrameLength is larger than Port maxFrameLength"));

    return VAR_2;
}
