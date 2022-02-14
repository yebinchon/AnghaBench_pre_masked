
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int numOfSchemes; scalar_t__ guestId; int error; scalar_t__ replyBody; int msgBody; int msgId; } ;
typedef TYPE_2__ uint8_t ;
typedef int uint32_t ;
typedef TYPE_2__ t_FmPcdIpcReply ;
typedef TYPE_2__ t_FmPcdIpcMsg ;
typedef TYPE_2__ t_FmPcdIpcKgSchemesParams ;
struct TYPE_14__ {scalar_t__ guestId; TYPE_1__* p_FmPcdKg; int h_IpcSession; } ;
typedef TYPE_6__ t_FmPcd ;
typedef int t_Error ;
typedef int reply ;
typedef int msg ;
typedef int kgAlloc ;
struct TYPE_12__ {int numOfSchemes; int schemesIds; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,TYPE_2__*,int,TYPE_2__*,int*,int *,int *) ;
 int FUNC_3 (int ,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static t_Error FUNC_5(t_FmPcd *VAR_6)
{
    t_Error VAR_7 = VAR_1;
    t_FmPcdIpcKgSchemesParams VAR_8;
    uint32_t VAR_9;
    t_FmPcdIpcReply VAR_10;
    t_FmPcdIpcMsg VAR_11;

    FUNC_0(VAR_6->guestId != VAR_4);


    FUNC_4(&VAR_10, 0, sizeof(VAR_10));
    FUNC_4(&VAR_11, 0, sizeof(VAR_11));
    FUNC_4(&VAR_8, 0, sizeof(t_FmPcdIpcKgSchemesParams));
    VAR_8.numOfSchemes = VAR_6->p_FmPcdKg->numOfSchemes;
    VAR_8.guestId = VAR_6->guestId;
    VAR_11.msgId = VAR_2;
    FUNC_3(VAR_11.msgBody, &VAR_8, sizeof(VAR_8));
    VAR_9 = sizeof(uint32_t) + VAR_6->p_FmPcdKg->numOfSchemes*sizeof(uint8_t);
    if ((VAR_7 = FUNC_2(VAR_6->h_IpcSession,
                                 (uint8_t*)&VAR_11,
                                 sizeof(VAR_11.msgId) + sizeof(VAR_8),
                                 (uint8_t*)&VAR_10,
                                 &VAR_9,
                                 ((void*)0),
                                 ((void*)0))) != VAR_1)
        FUNC_1(VAR_3, VAR_7, VAR_5);
    if (VAR_9 != (sizeof(uint32_t) + VAR_6->p_FmPcdKg->numOfSchemes*sizeof(uint8_t)))
        FUNC_1(VAR_3, VAR_0, ("IPC reply length mismatch"));
    FUNC_3(VAR_6->p_FmPcdKg->schemesIds, (uint8_t*)(VAR_10.replyBody),VAR_6->p_FmPcdKg->numOfSchemes*sizeof(uint8_t));

    return (t_Error)VAR_10.error;
}
