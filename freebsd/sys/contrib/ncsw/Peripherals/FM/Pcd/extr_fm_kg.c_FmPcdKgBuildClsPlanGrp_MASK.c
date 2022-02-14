
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_16__ {int numOfClsPlanEntries; int* vectors; void* baseEntry; } ;
typedef TYPE_2__ t_FmPcdKgInterModuleClsPlanSet ;
struct TYPE_17__ {int numOfOptions; int* optVectors; int * options; int netEnvId; void* clsPlanGrpId; } ;
typedef TYPE_3__ t_FmPcdKgInterModuleClsPlanGrpParams ;
struct TYPE_18__ {int sizeOfGrp; int * optArray; void* baseEntry; scalar_t__ owners; int netEnvId; scalar_t__ used; } ;
typedef TYPE_4__ t_FmPcdKgClsPlanGrp ;
struct TYPE_19__ {scalar_t__ guestId; int numOfClsPlanEntries; scalar_t__ replyBody; scalar_t__ error; int msgBody; int msgId; } ;
typedef TYPE_5__ t_FmPcdIpcReply ;
typedef TYPE_5__ t_FmPcdIpcMsg ;
typedef TYPE_5__ t_FmPcdIpcKgClsPlanParams ;
struct TYPE_20__ {scalar_t__ guestId; int h_IpcSession; TYPE_1__* p_FmPcdKg; } ;
typedef TYPE_8__ t_FmPcd ;
typedef scalar_t__ t_Error ;
typedef int reply ;
typedef int msg ;
typedef int kgAlloc ;
struct TYPE_15__ {TYPE_4__* clsPlanGrps; void* emptyClsPlanGrpId; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_8__*,int ) ;
 int FUNC_2 (TYPE_8__*,int ,void*) ;
 scalar_t__ FUNC_3 (scalar_t__,int,scalar_t__,void**) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 char* VAR_11 ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_5 (int ,void**,int,void**,int*,int *,int *) ;
 int FUNC_6 (int ,TYPE_5__*,int) ;
 int FUNC_7 (TYPE_5__*,int ,int) ;

t_Error FUNC_8(t_Handle VAR_13, t_FmPcdKgInterModuleClsPlanGrpParams *VAR_14, t_FmPcdKgInterModuleClsPlanSet *VAR_15)
{
    t_FmPcd *VAR_16 = (t_FmPcd*)VAR_13;
    t_FmPcdKgClsPlanGrp *VAR_17;
    t_FmPcdIpcKgClsPlanParams VAR_18;
    t_Error VAR_19 = VAR_4;
    uint32_t VAR_20 = 0;
    int VAR_21, VAR_22;


    if (VAR_14->numOfOptions >= FUNC_0(VAR_7))
        FUNC_4(VAR_8, VAR_3,("Too many classification plan basic options selected."));


    for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++)
        if (!VAR_16->p_FmPcdKg->clsPlanGrps[VAR_21].used)
            break;
    if (VAR_21 == VAR_5)
        FUNC_4(VAR_8, VAR_1,("No classification plan groups available."));

    VAR_16->p_FmPcdKg->clsPlanGrps[VAR_21].used = VAR_12;

    VAR_14->clsPlanGrpId = (uint8_t)VAR_21;

    if (VAR_14->numOfOptions == 0)
        VAR_16->p_FmPcdKg->emptyClsPlanGrpId = (uint8_t)VAR_21;

    VAR_17 = &VAR_16->p_FmPcdKg->clsPlanGrps[VAR_21];
    VAR_17->netEnvId = VAR_14->netEnvId;
    VAR_17->owners = 0;
    FUNC_2(VAR_16, VAR_14->netEnvId, VAR_14->clsPlanGrpId);
    if (VAR_14->numOfOptions != 0)
        FUNC_1(VAR_16, VAR_14->netEnvId);

    VAR_17->sizeOfGrp = (uint16_t)(1 << VAR_14->numOfOptions);

    if (VAR_17->sizeOfGrp < VAR_0)
        VAR_17->sizeOfGrp = VAR_0;
    if (VAR_16->guestId == VAR_10)
    {
        VAR_19 = FUNC_3(VAR_13, VAR_17->sizeOfGrp, VAR_16->guestId, &VAR_17->baseEntry);

        if (VAR_19)
            FUNC_4(VAR_9, VAR_2, VAR_11);
    }
    else
    {
        t_FmPcdIpcMsg VAR_23;
        uint32_t VAR_24;
        t_FmPcdIpcReply VAR_25;


        FUNC_7(&VAR_25, 0, sizeof(VAR_25));
        FUNC_7(&VAR_23, 0, sizeof(VAR_23));
        FUNC_7(&VAR_18, 0, sizeof(VAR_18));
        VAR_18.guestId = VAR_16->guestId;
        VAR_18.numOfClsPlanEntries = VAR_17->sizeOfGrp;
        VAR_23.msgId = VAR_6;
        FUNC_6(VAR_23.msgBody, &VAR_18, sizeof(VAR_18));
        VAR_24 = (sizeof(uint32_t) + sizeof(VAR_17->baseEntry));
        if ((VAR_19 = FUNC_5(VAR_16->h_IpcSession,
                                     (uint8_t*)&VAR_23,
                                     sizeof(VAR_23.msgId) + sizeof(VAR_18),
                                     (uint8_t*)&VAR_25,
                                     &VAR_24,
                                     ((void*)0),
                                     ((void*)0))) != VAR_4)
            FUNC_4(VAR_8, VAR_19, VAR_11);

        if (VAR_24 != (sizeof(uint32_t) + sizeof(VAR_17->baseEntry)))
            FUNC_4(VAR_8, VAR_3, ("IPC reply length mismatch"));
        if ((t_Error)VAR_25.error != VAR_4)
            FUNC_4(VAR_9, (t_Error)VAR_25.error, VAR_11);

        VAR_17->baseEntry = *(uint8_t*)(VAR_25.replyBody);
    }


    VAR_15->baseEntry = VAR_17->baseEntry;
    VAR_15->numOfClsPlanEntries = VAR_17->sizeOfGrp;

    VAR_20 = 0;
    for (VAR_21 = 0; VAR_21<VAR_14->numOfOptions; VAR_21++)
    {
        VAR_20 |= VAR_14->optVectors[VAR_21];

        VAR_17->optArray[VAR_21] = VAR_14->options[VAR_21];
    }



    for (VAR_22 = 0; VAR_22<VAR_17->sizeOfGrp; VAR_22++)
        VAR_15->vectors[VAR_22] = ~VAR_20;

    for (VAR_21 = 0; VAR_21<VAR_14->numOfOptions; VAR_21++)
    {
        for (VAR_22 = 0; VAR_22<VAR_17->sizeOfGrp; VAR_22++)
        {
            if (VAR_22 & (1<<VAR_21))
                VAR_15->vectors[VAR_22] |= VAR_14->optVectors[VAR_21];
        }
    }

    return VAR_4;
}
