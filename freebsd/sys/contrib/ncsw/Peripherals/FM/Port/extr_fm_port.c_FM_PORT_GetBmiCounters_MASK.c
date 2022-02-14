
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_4__ {void* cntUnsupportedFormat; void* cntLengthErr; void* cntWredDiscard; void* cntRxOutOfBuffersDiscard; void* cntRxListDmaErr; void* cntRxFilterFrame; void* cntRxLargeFrame; void* cntRxBadFrame; void* cntDeallocBuf; void* cntDiscardFrame; void* cntFrame; void* cntRxPauseActivation; void* cntFifoUtil; void* cntDmaUtil; void* cntQueueUtil; void* cntTaskUtil; void* cntCycle; } ;
typedef TYPE_1__ t_FmPortBmiStats ;
struct TYPE_5__ {scalar_t__ portType; } ;
typedef TYPE_2__ t_FmPort ;
typedef int t_Error ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;

t_Error FUNC_1(t_Handle VAR_23, t_FmPortBmiStats *VAR_24)
{
    t_FmPort *VAR_25 = (t_FmPort*)VAR_23;

    if ((VAR_25->portType == VAR_19)
            || (VAR_25->portType == VAR_20)){
        VAR_24->cntCycle =
            FUNC_0(VAR_23, VAR_1);

        VAR_24->cntTaskUtil =
            FUNC_0(VAR_23, VAR_15);

        VAR_24->cntQueueUtil =
            FUNC_0(VAR_23, VAR_8);

        VAR_24->cntDmaUtil =
            FUNC_0(VAR_23, VAR_4);

        VAR_24->cntFifoUtil =
            FUNC_0(VAR_23, VAR_5);

        VAR_24->cntRxPauseActivation =
            FUNC_0(VAR_23, VAR_14);

        VAR_24->cntFrame =
            FUNC_0(VAR_23, VAR_6);

        VAR_24->cntDiscardFrame =
            FUNC_0(VAR_23, VAR_3);

        VAR_24->cntDeallocBuf =
            FUNC_0(VAR_23, VAR_2);

        VAR_24->cntRxBadFrame =
            FUNC_0(VAR_23, VAR_9);

        VAR_24->cntRxLargeFrame =
            FUNC_0(VAR_23, VAR_11);

        VAR_24->cntRxFilterFrame =
            FUNC_0(VAR_23, VAR_10);

        VAR_24->cntRxListDmaErr =
            FUNC_0(VAR_23, VAR_12);

        VAR_24->cntRxOutOfBuffersDiscard =
            FUNC_0(VAR_23, VAR_13);

        VAR_24->cntWredDiscard = 0;
        VAR_24->cntLengthErr = 0;
        VAR_24->cntUnsupportedFormat = 0;
    }
    else if ((VAR_25->portType == VAR_21)
                || (VAR_25->portType == VAR_22)){
        VAR_24->cntCycle =
            FUNC_0(VAR_23, VAR_1);

        VAR_24->cntTaskUtil =
            FUNC_0(VAR_23, VAR_15);

        VAR_24->cntQueueUtil =
            FUNC_0(VAR_23, VAR_8);

        VAR_24->cntDmaUtil =
            FUNC_0(VAR_23, VAR_4);

        VAR_24->cntFifoUtil =
            FUNC_0(VAR_23, VAR_5);

        VAR_24->cntRxPauseActivation = 0;
        VAR_24->cntFrame =
            FUNC_0(VAR_23, VAR_6);

        VAR_24->cntDiscardFrame =
            FUNC_0(VAR_23, VAR_3);

        VAR_24->cntDeallocBuf =
            FUNC_0(VAR_23, VAR_2);

        VAR_24->cntRxBadFrame = 0;
        VAR_24->cntRxLargeFrame = 0;
        VAR_24->cntRxFilterFrame = 0;
        VAR_24->cntRxListDmaErr = 0;
        VAR_24->cntRxOutOfBuffersDiscard = 0;
        VAR_24->cntWredDiscard = 0;
        VAR_24->cntLengthErr =
            FUNC_0(VAR_23, VAR_7);

        VAR_24->cntUnsupportedFormat =
            FUNC_0(VAR_23, VAR_16);

    }
    else if (VAR_25->portType == VAR_18) {
        VAR_24->cntCycle =
            FUNC_0(VAR_23, VAR_1);

        VAR_24->cntTaskUtil =
            FUNC_0(VAR_23, VAR_15);

        VAR_24->cntQueueUtil = 0;
        VAR_24->cntDmaUtil =
            FUNC_0(VAR_23, VAR_4);

        VAR_24->cntFifoUtil =
            FUNC_0(VAR_23, VAR_5);

        VAR_24->cntRxPauseActivation = 0;
        VAR_24->cntFrame =
            FUNC_0(VAR_23, VAR_6);

        VAR_24->cntDiscardFrame =
            FUNC_0(VAR_23, VAR_3);

        VAR_24->cntDeallocBuf =
            FUNC_0(VAR_23, VAR_2);

        VAR_24->cntRxBadFrame = 0;
        VAR_24->cntRxLargeFrame = 0;
        VAR_24->cntRxFilterFrame =
            FUNC_0(VAR_23, VAR_10);

        VAR_24->cntRxListDmaErr =
            FUNC_0(VAR_23, VAR_12);

        VAR_24->cntRxOutOfBuffersDiscard =
            FUNC_0(VAR_23, VAR_13);

        VAR_24->cntWredDiscard =
            FUNC_0(VAR_23, VAR_17);

        VAR_24->cntLengthErr =
            FUNC_0(VAR_23, VAR_7);

        VAR_24->cntUnsupportedFormat =
            FUNC_0(VAR_23, VAR_16);

    }
    return VAR_0;
}
