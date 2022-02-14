
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int t_Error ;
struct TYPE_7__ {int msgBody; int msgId; } ;
typedef TYPE_1__ t_BmIpcMsg ;
struct TYPE_8__ {scalar_t__ bpid; } ;
typedef TYPE_2__ t_BmIpcBpidParams ;
struct TYPE_9__ {scalar_t__ h_Session; int h_BpidMm; } ;
typedef TYPE_3__ t_Bm ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__,scalar_t__*,int,int *,int *,int *,int *) ;
 int FUNC_6 (int ,TYPE_2__*,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static __inline__ t_Error FUNC_8(t_Bm *VAR_6, uint32_t VAR_7)
{
    if (FUNC_2(VAR_6->h_BpidMm, (uint64_t)VAR_7))
    {
        if (FUNC_3(VAR_6->h_BpidMm, (uint64_t)VAR_7) != VAR_7)
            return VAR_2;
        else
            return FUNC_1(VAR_1);
    }
    else if (VAR_6->h_Session)
    {
        t_BmIpcMsg VAR_8;
        t_BmIpcBpidParams VAR_9;
        t_Error VAR_10 = VAR_2;

        FUNC_7(&VAR_8, 0, sizeof(t_BmIpcMsg));
        VAR_9.bpid = (uint8_t)VAR_7;
        VAR_8.msgId = VAR_0;
        FUNC_6(VAR_8.msgBody, &VAR_9, sizeof(t_BmIpcBpidParams));
        if ((VAR_10 = FUNC_5(VAR_6->h_Session,
                                         (uint8_t*)&VAR_8,
                                         sizeof(VAR_8.msgId) + sizeof(t_BmIpcBpidParams),
                                         ((void*)0),
                                         ((void*)0),
                                         ((void*)0),
                                         ((void*)0))) != VAR_2)
            FUNC_4(VAR_3, VAR_10, VAR_4);
    }
    else
        FUNC_0(VAR_5, ("No Ipc - can't validate bpid."));
    return VAR_2;
}
