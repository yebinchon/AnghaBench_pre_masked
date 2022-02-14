
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int error; int msgBody; int msgId; } ;
typedef TYPE_2__ t_FmPcdIpcReply ;
typedef TYPE_2__ t_FmPcdIpcMsg ;
struct TYPE_13__ {int numOfSchemes; scalar_t__ guestId; int schemesIds; } ;
typedef TYPE_4__ t_FmPcdIpcKgSchemesParams ;
struct TYPE_14__ {scalar_t__ guestId; TYPE_1__* p_FmPcdKg; int h_IpcSession; int h_Fm; } ;
typedef TYPE_5__ t_FmPcd ;
typedef scalar_t__ t_Error ;
typedef int reply ;
typedef int msg ;
typedef int kgAlloc ;
struct TYPE_11__ {int numOfSchemes; scalar_t__ h_HwSpinlock; TYPE_4__* schemesIds; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_5__*,int,scalar_t__,TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_3 (int ,scalar_t__,char*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *,int,int *,int*,int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,TYPE_4__*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

t_Error FUNC_8(t_FmPcd *VAR_9)
{
    t_FmPcdIpcKgSchemesParams VAR_10;
    t_Error VAR_11 = VAR_1;
    t_FmPcdIpcMsg VAR_12;
    uint32_t VAR_13;
    t_FmPcdIpcReply VAR_14;

    FUNC_2(VAR_9->h_Fm, VAR_8, 0, VAR_7);

    if (VAR_9->guestId == VAR_5)
    {
        VAR_11 = FUNC_1(VAR_9,
                                    VAR_9->p_FmPcdKg->numOfSchemes,
                                    VAR_9->guestId,
                                    VAR_9->p_FmPcdKg->schemesIds);
        if (VAR_11)
            FUNC_3(VAR_4, VAR_11, VAR_6);

        if (VAR_9->p_FmPcdKg->h_HwSpinlock)
            FUNC_4(VAR_9->p_FmPcdKg->h_HwSpinlock);

        return VAR_1;
    }


    FUNC_7(&VAR_14, 0, sizeof(VAR_14));
    FUNC_7(&VAR_12, 0, sizeof(VAR_12));
    VAR_10.numOfSchemes = VAR_9->p_FmPcdKg->numOfSchemes;
    VAR_10.guestId = VAR_9->guestId;
    FUNC_0(VAR_10.numOfSchemes < VAR_3);
    FUNC_6(VAR_10.schemesIds, VAR_9->p_FmPcdKg->schemesIds, (sizeof(uint8_t))*VAR_10.numOfSchemes);
    VAR_12.msgId = VAR_2;
    FUNC_6(VAR_12.msgBody, &VAR_10, sizeof(VAR_10));
    VAR_13 = sizeof(uint32_t);
    if ((VAR_11 = FUNC_5(VAR_9->h_IpcSession,
                                 (uint8_t*)&VAR_12,
                                 sizeof(VAR_12.msgId) + sizeof(VAR_10),
                                 (uint8_t*)&VAR_14,
                                 &VAR_13,
                                 ((void*)0),
                                 ((void*)0))) != VAR_1)
        FUNC_3(VAR_4, VAR_11, VAR_6);
    if (VAR_13 != sizeof(uint32_t))
        FUNC_3(VAR_4, VAR_0, ("IPC reply length mismatch"));

    if (VAR_9->p_FmPcdKg->h_HwSpinlock)
        FUNC_4(VAR_9->p_FmPcdKg->h_HwSpinlock);

    return (t_Error)VAR_14.error;
}
