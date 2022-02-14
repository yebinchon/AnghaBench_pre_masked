
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_18__ {int* msgBody; scalar_t__ replyBody; int msgId; } ;
typedef TYPE_1__ t_FmPcdIpcReply ;
typedef TYPE_1__ t_FmPcdIpcMsg ;
struct TYPE_19__ {int guestId; int h_Fm; struct TYPE_19__* p_FmPcdDriverParam; void* capwapFrameIdAddr; int h_FmMuram; void* ipv6FrameIdAddr; TYPE_1__* fmPcdModuleName; scalar_t__ p_FmPcdPrs; scalar_t__ p_FmPcdPlcr; scalar_t__ p_FmPcdKg; scalar_t__ h_IpcSession; TYPE_1__* fmPcdIpcHandlerModuleName; int fmRevInfo; } ;
typedef TYPE_3__ t_FmPcd ;
typedef scalar_t__ t_Error ;
typedef int reply ;
typedef int msg ;
typedef int isMasterAlive ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 void* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,scalar_t__,char*) ;
 int FUNC_12 (int ,scalar_t__,char*) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_1__*,char*,int ,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_15 (void*) ;
 int FUNC_16 (TYPE_3__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*,int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__*,int,scalar_t__*,int*,int ,scalar_t__) ;
 scalar_t__ VAR_15 ;
 int FUNC_20 (TYPE_1__*,int ,int) ;

t_Error FUNC_21(t_Handle VAR_16)
{
    t_FmPcd *VAR_17 = (t_FmPcd*)VAR_16;
    t_Error VAR_18 = VAR_5;
    t_FmPcdIpcMsg VAR_19;

    FUNC_13(VAR_17, VAR_1);
    FUNC_13(VAR_17->p_FmPcdDriverParam, VAR_1);

    FUNC_1(VAR_17->h_Fm, &VAR_17->fmRevInfo);

    if (VAR_17->guestId != VAR_12)
    {
        FUNC_20(VAR_17->fmPcdIpcHandlerModuleName, 0, (sizeof(char)) * VAR_11);
        if (FUNC_14 (VAR_17->fmPcdIpcHandlerModuleName, "FM_PCD_%d_%d", FUNC_4(VAR_17->h_Fm), VAR_12) != 10)
            FUNC_12(VAR_10, VAR_2, ("Sprint failed"));
        FUNC_20(VAR_17->fmPcdModuleName, 0, (sizeof(char)) * VAR_11);
        if (FUNC_14 (VAR_17->fmPcdModuleName, "FM_PCD_%d_%d",FUNC_4(VAR_17->h_Fm), VAR_17->guestId) != (VAR_17->guestId<10 ? 10:11))
            FUNC_12(VAR_10, VAR_2, ("Sprint failed"));

        VAR_17->h_IpcSession = FUNC_17(VAR_17->fmPcdIpcHandlerModuleName, VAR_17->fmPcdModuleName);
        if (VAR_17->h_IpcSession)
        {
            t_FmPcdIpcReply VAR_20;
            uint32_t VAR_21;
            uint8_t VAR_22 = 0;

            FUNC_20(&VAR_19, 0, sizeof(VAR_19));
            FUNC_20(&VAR_20, 0, sizeof(VAR_20));
            VAR_19.msgId = VAR_6;
            VAR_19.msgBody[0] = VAR_17->guestId;
            VAR_15 = VAR_14;

            do
            {
                VAR_21 = sizeof(uint32_t) + sizeof(VAR_22);
                if ((VAR_18 = FUNC_19(VAR_17->h_IpcSession,
                                             (uint8_t*)&VAR_19,
                                             sizeof(VAR_19.msgId)+sizeof(VAR_17->guestId),
                                             (uint8_t*)&VAR_20,
                                             &VAR_21,
                                             VAR_8,
                                             VAR_16)) != VAR_5)
                    FUNC_11(VAR_10, VAR_18, VAR_13);
                while (VAR_15) ;
                if (VAR_21 != (sizeof(uint32_t) + sizeof(VAR_22)))
                    FUNC_11(VAR_10, VAR_3, ("IPC reply length mismatch"));
                VAR_22 = *(uint8_t*)(VAR_20.replyBody);
            } while (!VAR_22);
        }
    }

    FUNC_0(VAR_17, VAR_0);

    if (VAR_17->p_FmPcdKg)
    {
        VAR_18 = FUNC_7(VAR_17);
        if (VAR_18)
            FUNC_12(VAR_10, VAR_18, VAR_13);
    }

    if (VAR_17->p_FmPcdPlcr)
    {
        VAR_18 = FUNC_9(VAR_17);
        if (VAR_18)
            FUNC_12(VAR_10, VAR_18, VAR_13);
    }

    if (VAR_17->p_FmPcdPrs)
    {
        VAR_18 = FUNC_10(VAR_17);
        if (VAR_18)
            FUNC_12(VAR_10, VAR_18, VAR_13);
    }

    if (VAR_17->guestId == VAR_12)
    {

        FUNC_20(VAR_17->fmPcdModuleName, 0, (sizeof(char)) * VAR_11);
        if (FUNC_14 (VAR_17->fmPcdModuleName, "FM_PCD_%d_%d",FUNC_4(VAR_17->h_Fm),VAR_12) != 10)
            FUNC_12(VAR_10, VAR_2, ("Sprint failed"));
        VAR_18 = FUNC_18(VAR_17->fmPcdModuleName, VAR_9, VAR_17, VAR_7);
        if (VAR_18)
            FUNC_12(VAR_10, VAR_18, VAR_13);
    }


    VAR_17->ipv6FrameIdAddr = FUNC_8(FUNC_2(VAR_17->h_FmMuram, 4, 4));
    if (!VAR_17->ipv6FrameIdAddr)
    {
        FUNC_3(VAR_17);
        FUNC_12(VAR_10, VAR_4, ("MURAM allocation for IPv6 Frame-Id"));
    }
    FUNC_6(FUNC_15(VAR_17->ipv6FrameIdAddr), 0, 4);


    VAR_17->capwapFrameIdAddr = FUNC_8(FUNC_2(VAR_17->h_FmMuram, 2, 4));
    if (!VAR_17->capwapFrameIdAddr)
    {
        FUNC_3(VAR_17);
        FUNC_12(VAR_10, VAR_4, ("MURAM allocation for CAPWAP Frame-Id"));
    }
    FUNC_6(FUNC_15(VAR_17->capwapFrameIdAddr), 0, 2);

    FUNC_16(VAR_17->p_FmPcdDriverParam);
    VAR_17->p_FmPcdDriverParam = ((void*)0);

    FUNC_5(VAR_17->h_Fm, VAR_17);

    return VAR_5;
}
