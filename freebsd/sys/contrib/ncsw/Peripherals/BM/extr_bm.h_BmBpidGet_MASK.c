
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int t_Error ;
struct TYPE_8__ {TYPE_3__* replyBody; scalar_t__* msgBody; int msgId; } ;
typedef TYPE_1__ t_BmIpcReply ;
typedef TYPE_1__ t_BmIpcMsg ;
struct TYPE_9__ {scalar_t__ bpid; } ;
typedef TYPE_3__ t_BmIpcBpidParams ;
struct TYPE_10__ {int h_BpidMm; scalar_t__ h_Session; } ;
typedef TYPE_4__ t_Bm ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int ,int,scalar_t__,char*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 char* VAR_5 ;
 int FUNC_5 (int ,int ,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (scalar_t__,scalar_t__*,int,scalar_t__*,int*,int *,int *) ;
 int FUNC_7 (scalar_t__*,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static __inline__ uint32_t FUNC_9(t_Bm *VAR_8, bool VAR_9, uint32_t VAR_10)
{
    uint64_t VAR_11, VAR_12 = 1;
    uint64_t VAR_13 = 1;

    if (VAR_9)
    {
        if (FUNC_4(VAR_8->h_BpidMm, (uint64_t)VAR_10))
        {
            VAR_11 = FUNC_3(VAR_8->h_BpidMm,
                              VAR_10,
                              VAR_12,
                              "BM BPID MEM");
            VAR_11 = VAR_10;
        }
        else if (VAR_8->h_Session)
        {
            t_BmIpcMsg VAR_14;
            t_BmIpcReply VAR_15;
            uint32_t VAR_16;
            t_BmIpcBpidParams VAR_17;
            t_Error VAR_18 = VAR_2;

            FUNC_8(&VAR_14, 0, sizeof(t_BmIpcMsg));
            FUNC_8(&VAR_15, 0, sizeof(t_BmIpcReply));
            VAR_17.bpid = (uint8_t)VAR_10;
            VAR_14.msgId = VAR_0;
            FUNC_7(VAR_14.msgBody, &VAR_17, sizeof(t_BmIpcBpidParams));
            VAR_16 = sizeof(uint32_t) + sizeof(uint32_t);
            if ((VAR_18 = FUNC_6(VAR_8->h_Session,
                                             (uint8_t*)&VAR_14,
                                             sizeof(VAR_14.msgId) + sizeof(t_BmIpcBpidParams),
                                             (uint8_t*)&VAR_15,
                                             &VAR_16,
                                             ((void*)0),
                                             ((void*)0))) != VAR_2)
            {
                FUNC_5(VAR_4, VAR_18, VAR_5);
                return (uint32_t)VAR_3;
            }
            if (VAR_16 != (sizeof(uint32_t) + sizeof(uint32_t)))
            {
                FUNC_5(VAR_4, VAR_1, ("IPC reply length mismatch"));
                return (uint32_t)VAR_3;
            }
            FUNC_7((uint8_t*)&VAR_11, VAR_15.replyBody, sizeof(uint32_t));
        }
        else
        {
            FUNC_0(VAR_7, ("No Ipc - can't validate bpid."));
            VAR_11 = VAR_10;
        }
    }
    else
        VAR_11 = FUNC_2(VAR_8->h_BpidMm,
                     VAR_12,
                     VAR_13,
                     "BM BPID MEM");
    FUNC_1(VAR_11 < VAR_6, ("Oops, %lx > UINT32_MAX!\n", VAR_11));
    return (uint32_t)VAR_11;
}
