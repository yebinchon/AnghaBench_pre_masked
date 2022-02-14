
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {TYPE_3__* replyBody; int * msgBody; int msgId; } ;
typedef TYPE_1__ t_QmIpcReply ;
typedef TYPE_1__ t_QmIpcMsg ;
struct TYPE_9__ {int fqid; int size; } ;
typedef TYPE_3__ t_QmIpcFqidParams ;
struct TYPE_10__ {int lock; int h_FqidMm; scalar_t__ h_Session; int h_RsrvFqidMm; } ;
typedef TYPE_4__ t_Qm ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int,int,char*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__,char*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (scalar_t__,int *,int,int *,int*,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,TYPE_3__*,int) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;

uint32_t FUNC_10(t_Qm *VAR_8, uint32_t VAR_9, uint32_t VAR_10, bool VAR_11, uint32_t VAR_12)
{
    uint64_t VAR_13;
    uint32_t VAR_14;

    VAR_14 = FUNC_6(VAR_8->lock);
    if (VAR_11)
    {
        VAR_13 = FUNC_3(VAR_8->h_FqidMm,
                          (uint64_t)VAR_12,
                          (uint64_t)VAR_9,
                          "QM FQID MEM");
        if (VAR_13 == VAR_2)
        {
            VAR_13 = FUNC_3(VAR_8->h_RsrvFqidMm,
                              (uint64_t)VAR_12,
                              (uint64_t)VAR_9,
                              "QM rsrv FQID MEM");
            if (VAR_13 == VAR_2)
                VAR_13 = VAR_12;
            else if (VAR_8->h_Session)
            {
                t_QmIpcMsg VAR_15;
                t_QmIpcReply VAR_16;
                uint32_t VAR_17;
                t_QmIpcFqidParams VAR_18;
                t_Error VAR_19 = VAR_1;

                FUNC_9(&VAR_15, 0, sizeof(t_QmIpcMsg));
                FUNC_9(&VAR_16, 0, sizeof(t_QmIpcReply));
                VAR_18.fqid = VAR_12;
                VAR_18.size = VAR_9;
                VAR_15.msgId = VAR_5;
                FUNC_8(VAR_15.msgBody, &VAR_18, sizeof(t_QmIpcFqidParams));
                VAR_17 = sizeof(uint32_t) + sizeof(uint32_t);
                if ((VAR_19 = FUNC_5(VAR_8->h_Session,
                                                 (uint8_t*)&VAR_15,
                                                 sizeof(VAR_15.msgId) + sizeof(t_QmIpcFqidParams),
                                                 (uint8_t*)&VAR_16,
                                                 &VAR_17,
                                                 ((void*)0),
                                                 ((void*)0))) != VAR_1)
                    FUNC_4(VAR_3, VAR_19, VAR_4);
                if (VAR_17 != (sizeof(uint32_t) + sizeof(uint32_t)))
                   FUNC_4(VAR_3, VAR_0, ("IPC reply length mismatch"));

                if ((VAR_19 != VAR_1) ||
                    (VAR_17 != (sizeof(uint32_t) + sizeof(uint32_t))))
                    VAR_13 = VAR_2;
                else
                    FUNC_8((uint8_t*)&VAR_13, VAR_16.replyBody, sizeof(uint32_t));
            }
            else
            {
                FUNC_0(VAR_7, ("No Ipc - can't validate fqid."));
                VAR_13 = VAR_12;
            }
        }
    }
    else
        VAR_13 = FUNC_2(VAR_8->h_FqidMm,
                     VAR_9,
                     VAR_10,
                     "QM FQID MEM");
    FUNC_7(VAR_8->lock, VAR_14);

    FUNC_1(VAR_13 < VAR_6, ("Oops, %lx > UINT32_MAX!\n", VAR_13));
    return (uint32_t)VAR_13;
}
