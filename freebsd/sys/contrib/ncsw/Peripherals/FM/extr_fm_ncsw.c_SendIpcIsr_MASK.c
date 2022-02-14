
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_9__ {int msgBody; int msgId; } ;
typedef TYPE_2__ t_FmIpcMsg ;
struct TYPE_10__ {size_t pendingReg; int boolErr; } ;
typedef TYPE_3__ t_FmIpcIsr ;
struct TYPE_11__ {scalar_t__ guestId; TYPE_1__* intrMng; scalar_t__* h_IpcSessions; } ;
typedef TYPE_4__ t_Fm ;
typedef scalar_t__ t_Error ;
typedef int msg ;
typedef int fmIpcIsr ;
struct TYPE_8__ {scalar_t__ guestId; int h_SrcHandle; int (* f_Isr ) (int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int,int *,int *,int *,int *) ;
 int FUNC_4 (int ,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(t_Fm *VAR_7, uint32_t VAR_8, uint32_t VAR_9)
{
    FUNC_0(VAR_7->guestId == VAR_4);

    if (VAR_7->intrMng[VAR_8].guestId == VAR_4)
        VAR_7->intrMng[VAR_8].f_Isr(VAR_7->intrMng[VAR_8].h_SrcHandle);



    else if (VAR_7->h_IpcSessions[VAR_7->intrMng[VAR_8].guestId])
    {
        t_Error VAR_10;
        t_FmIpcIsr VAR_11;
        t_FmIpcMsg VAR_12;

        FUNC_5(&VAR_12, 0, sizeof(VAR_12));
        VAR_12.msgId = VAR_2;
        VAR_11.pendingReg = VAR_9;
        VAR_11.boolErr = VAR_1;
        FUNC_4(VAR_12.msgBody, &VAR_11, sizeof(VAR_11));
        VAR_10 = FUNC_3(VAR_7->h_IpcSessions[VAR_7->intrMng[VAR_8].guestId],
                                (uint8_t*)&VAR_12,
                                sizeof(VAR_12.msgId) + sizeof(VAR_11),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_10 != VAR_0)
            FUNC_2(VAR_3, VAR_10, VAR_5);
    }
    else
        FUNC_1(VAR_6, ("FM Guest mode, without IPC - can't call ISR!"));
}
