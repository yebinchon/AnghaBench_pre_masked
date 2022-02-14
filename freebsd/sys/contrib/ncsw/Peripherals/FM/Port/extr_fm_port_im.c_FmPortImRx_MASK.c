
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int t_Handle ;
struct TYPE_11__ {int h_BufferPool; scalar_t__ (* f_PutBuf ) (int ,scalar_t__*,int ) ;int f_VirtToPhys; int f_PhysToVirt; scalar_t__* (* f_GetBuf ) (int ,int *) ;} ;
struct TYPE_12__ {size_t currBdId; size_t firstBdOfFrameId; int rxFrameAccumLength; scalar_t__ (* f_RxStore ) (int ,scalar_t__*,scalar_t__,scalar_t__,scalar_t__ volatile,int ) ;TYPE_3__ rxPool; TYPE_2__* p_FmPortImPram; int * p_BdShadow; } ;
struct TYPE_13__ {void* lock; TYPE_4__ im; int h_App; int h_Spinlock; } ;
typedef TYPE_5__ t_FmPort ;
typedef int t_Error ;
struct TYPE_9__ {int offsetOut; } ;
struct TYPE_10__ {TYPE_1__ rxQd; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ volatile VAR_8 ;
 size_t FUNC_6 (TYPE_5__*,size_t) ;
 size_t VAR_9 ;
 scalar_t__ volatile VAR_10 ;
 int VAR_11 ;
 scalar_t__ volatile VAR_12 ;
 int FUNC_7 (int ,int ,char*) ;
 scalar_t__ volatile VAR_13 ;
 void* VAR_14 ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ VAR_15 ;
 scalar_t__* FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,scalar_t__*,scalar_t__,scalar_t__,scalar_t__ volatile,int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__*,int ) ;

t_Error FUNC_14(t_FmPort *VAR_16)
{
    t_Handle VAR_17, VAR_18;
    uint32_t VAR_19;
    volatile uint8_t VAR_20;
    uint16_t VAR_21;
    uint16_t VAR_22;
    uint8_t *VAR_23, *VAR_24;
    uint32_t VAR_25;

    FUNC_0(VAR_16);

    VAR_25 = FUNC_9(VAR_16->h_Spinlock);
    if (VAR_16->lock)
    {
        FUNC_10(VAR_16->h_Spinlock, VAR_25);
        return VAR_6;
    }
    VAR_16->lock = VAR_14;
    FUNC_10(VAR_16->h_Spinlock, VAR_25);

    VAR_19 = FUNC_2(FUNC_1(VAR_16->im.currBdId));

    while (!(VAR_19 & VAR_3))
    {
        if ((VAR_24 = VAR_16->im.rxPool.f_GetBuf(VAR_16->im.rxPool.h_BufferPool, &VAR_18)) == ((void*)0))
        {
            VAR_16->lock = VAR_7;
            FUNC_7(VAR_11, VAR_5, ("Data buffer"));
        }

        if (VAR_16->im.firstBdOfFrameId == VAR_9)
            VAR_16->im.firstBdOfFrameId = VAR_16->im.currBdId;

        VAR_23 = FUNC_4(VAR_16->im.rxPool.f_PhysToVirt, FUNC_1(VAR_16->im.currBdId));
        VAR_17 = VAR_16->im.p_BdShadow[VAR_16->im.currBdId];
        VAR_21 = (uint16_t)((VAR_19 & VAR_0) ?
                            ((VAR_19 & VAR_1) - VAR_16->im.rxFrameAccumLength):
                            (VAR_19 & VAR_1));
        VAR_16->im.rxFrameAccumLength += VAR_21;



        VAR_20 = (uint8_t)((VAR_16->im.currBdId == VAR_16->im.firstBdOfFrameId) ?
                            ((VAR_19 & VAR_0) ? VAR_13 : VAR_8) :
                            ((VAR_19 & VAR_0) ? VAR_10 : VAR_12));

        if (VAR_19 & VAR_0)
        {
            VAR_16->im.rxFrameAccumLength = 0;
            VAR_16->im.firstBdOfFrameId = VAR_9;
        }

        FUNC_5(VAR_16->im.rxPool.f_VirtToPhys, FUNC_1(VAR_16->im.currBdId), VAR_24);

        FUNC_3(FUNC_1(VAR_16->im.currBdId), VAR_3);

        VAR_22 = (uint16_t)((VAR_19 & VAR_2) >> 16);
        VAR_16->im.p_BdShadow[VAR_16->im.currBdId] = VAR_18;

        VAR_16->im.currBdId = FUNC_6(VAR_16, VAR_16->im.currBdId);
        FUNC_8(VAR_16->im.p_FmPortImPram->rxQd.offsetOut, (uint16_t)(VAR_16->im.currBdId<<4));



        if ((VAR_20 != VAR_13) || !VAR_22)
        {
            if (VAR_16->im.f_RxStore(VAR_16->h_App,
                                       VAR_23,
                                       VAR_21,
                                       VAR_22,
                                       VAR_20,
                                       VAR_17) == VAR_15)
                break;
        }
        else if (VAR_16->im.rxPool.f_PutBuf(VAR_16->im.rxPool.h_BufferPool,
                                              VAR_23,
                                              VAR_17))
        {
            VAR_16->lock = VAR_7;
            FUNC_7(VAR_11, VAR_4, ("Failed freeing data buffer"));
        }

        VAR_19 = FUNC_2(FUNC_1(VAR_16->im.currBdId));
    }
    VAR_16->lock = VAR_7;
    return VAR_6;
}
