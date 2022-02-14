
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int t_Handle ;
struct TYPE_8__ {scalar_t__ guestId; scalar_t__ event; } ;
typedef TYPE_2__ t_FmIpcRegisterIntr ;
struct TYPE_9__ {int msgBody; int msgId; } ;
typedef TYPE_3__ t_FmIpcMsg ;
struct TYPE_10__ {scalar_t__ guestId; scalar_t__* h_IpcSessions; TYPE_1__* intrMng; } ;
typedef TYPE_4__ t_Fm ;
typedef scalar_t__ t_Error ;
typedef int msg ;
typedef int fmIpcRegisterIntr ;
typedef int e_FmIntrType ;
typedef int e_FmEventModules ;
struct TYPE_7__ {void (* f_Isr ) (int) ;int h_SrcHandle; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int,int *,int *,int *,int *) ;
 int VAR_6 ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

void FUNC_6(t_Handle VAR_7,
                    e_FmEventModules VAR_8,
                    uint8_t VAR_9,
                    e_FmIntrType VAR_10,
                    void (*VAR_11) (t_Handle VAR_12),
                    t_Handle VAR_13)
{
    t_Fm *VAR_14 = (t_Fm*)VAR_7;
    int VAR_15 = 0;

    FUNC_0(VAR_7);

    FUNC_1(VAR_8, VAR_9, VAR_10, VAR_15);
    FUNC_0(VAR_15 < VAR_6);


    VAR_14->intrMng[VAR_15].f_Isr = VAR_11;
    VAR_14->intrMng[VAR_15].h_SrcHandle = VAR_13;

    if ((VAR_14->guestId != VAR_4) &&
        VAR_14->h_IpcSessions[0])
    {
        t_FmIpcRegisterIntr VAR_16;
        t_Error VAR_17;
        t_FmIpcMsg VAR_18;


        VAR_16.event = (uint32_t)VAR_15;
        VAR_16.guestId = VAR_14->guestId;
        FUNC_5(&VAR_18, 0, sizeof(VAR_18));
        VAR_18.msgId = VAR_2;
        FUNC_4(VAR_18.msgBody, &VAR_16, sizeof(VAR_16));
        VAR_17 = FUNC_3(VAR_14->h_IpcSessions[0],
                                (uint8_t*)&VAR_18,
                                sizeof(VAR_18.msgId) + sizeof(VAR_16),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_17 != VAR_1)
            FUNC_2(VAR_3, VAR_17, VAR_5);
    }
    else if (VAR_14->guestId != VAR_4)
        FUNC_2(VAR_3, VAR_0,
                     ("running in guest-mode without IPC!"));
}
