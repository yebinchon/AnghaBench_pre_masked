
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
struct TYPE_7__ {int msgBody; int msgId; } ;
typedef TYPE_1__ t_QmIpcMsg ;
struct TYPE_8__ {scalar_t__ size; scalar_t__ fqid; } ;
typedef TYPE_2__ t_QmIpcFqidParams ;
struct TYPE_9__ {int lock; scalar_t__ h_Session; int h_FqidMm; int h_RsrvFqidMm; } ;
typedef TYPE_3__ t_Qm ;
typedef int t_Error ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__,scalar_t__*,int,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,TYPE_2__*,int) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;

t_Error FUNC_12(t_Qm *VAR_7, uint32_t VAR_8)
{
    uint32_t VAR_9;

    VAR_9 = FUNC_8(VAR_7->lock);

    if (FUNC_2(VAR_7->h_RsrvFqidMm,
                    (uint64_t)VAR_8,
                    (uint64_t)1,
                    "QM rsrv FQID MEM") == VAR_2)
    {
        FUNC_9(VAR_7->lock, VAR_9);
        return VAR_1;
    }
    else
        FUNC_5(VAR_7->h_RsrvFqidMm,
                    (uint64_t)VAR_8,
                    (uint64_t)1);
    if (FUNC_3(VAR_7->h_FqidMm, (uint64_t)VAR_8))
    {
        if (FUNC_4(VAR_7->h_FqidMm, (uint64_t)VAR_8) != 0)
        {
            FUNC_9(VAR_7->lock, VAR_9);
            return VAR_1;
        }
        else
        {
            FUNC_9(VAR_7->lock, VAR_9);
            return FUNC_1(VAR_0);
        }
    }
    else if (VAR_7->h_Session)
    {
        t_QmIpcMsg VAR_10;
        t_QmIpcFqidParams VAR_11;
        t_Error VAR_12 = VAR_1;

        FUNC_11(&VAR_10, 0, sizeof(t_QmIpcMsg));
        VAR_11.fqid = (uint8_t)VAR_8;
        VAR_11.size = 0;
        VAR_10.msgId = VAR_5;
        FUNC_10(VAR_10.msgBody, &VAR_11, sizeof(t_QmIpcFqidParams));
        if ((VAR_12 = FUNC_7(VAR_7->h_Session,
                                         (uint8_t*)&VAR_10,
                                         sizeof(VAR_10.msgId) + sizeof(t_QmIpcFqidParams),
                                         ((void*)0),
                                         ((void*)0),
                                         ((void*)0),
                                         ((void*)0))) != VAR_1)
        {
            FUNC_9(VAR_7->lock, VAR_9);
            FUNC_6(VAR_3, VAR_12, VAR_4);
        }
    }
    else
        FUNC_0(VAR_6, ("No Ipc - can't validate fqid."));
    FUNC_9(VAR_7->lock, VAR_9);

    return VAR_1;
}
