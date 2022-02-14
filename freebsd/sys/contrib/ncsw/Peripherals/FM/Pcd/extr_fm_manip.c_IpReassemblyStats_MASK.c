
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* p_Ipv6ReassTbl; TYPE_1__* p_Ipv4ReassTbl; } ;
struct TYPE_15__ {TYPE_4__ ip; TYPE_6__* p_ReassCommonTbl; } ;
struct TYPE_16__ {TYPE_5__ reassmParams; TYPE_2__* specificHdrStatistics; int totalNCSPCounter; void* nonConsistentSp; int totalDmaSemaphoreDepletionCounter; void* dmaSemaphoreDepletion; int totalSgFragmentCounter; void* sgFragments; int totalExternalBufferBusy; void* externalBufferBusy; int totalInternalBufferBusy; void* internalBufferBusy; int totalRfdPoolBusyCounter; void* rfdPoolBusy; int totalTimeOutCounter; void* timeout; } ;
typedef TYPE_6__ t_FmPcdManipReassemIpStats ;
typedef TYPE_6__ t_FmPcdManip ;
typedef int t_Error ;
struct TYPE_13__ {int totalMoreThan16FramesCounter; int totalDiscardedFragsCounter; int totalSetBusyCounter; int totalMalformdFragCounter; int totalProcessedFragCounter; int totalValidFragmentCounter; int totalSuccessfullyReasmFramesCounter; } ;
struct TYPE_12__ {void* moreThan16Fragments; void* discardedFragments; void* autoLearnBusy; void* malformedFragments; void* processedFragments; void* validFragments; void* successfullyReassembled; } ;
struct TYPE_11__ {int totalMoreThan16FramesCounter; int totalDiscardedFragsCounter; int totalSetBusyCounter; int totalMalformdFragCounter; int totalProcessedFragCounter; int totalValidFragmentCounter; int totalSuccessfullyReasmFramesCounter; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static t_Error FUNC_2(t_FmPcdManip *VAR_1,
                                 t_FmPcdManipReassemIpStats *VAR_2)
{
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_1->reassmParams.p_ReassCommonTbl);

    VAR_2->timeout =
            FUNC_1(VAR_1->reassmParams.p_ReassCommonTbl->totalTimeOutCounter);
    VAR_2->rfdPoolBusy =
            FUNC_1(VAR_1->reassmParams.p_ReassCommonTbl->totalRfdPoolBusyCounter);
    VAR_2->internalBufferBusy =
            FUNC_1(VAR_1->reassmParams.p_ReassCommonTbl->totalInternalBufferBusy);
    VAR_2->externalBufferBusy =
            FUNC_1(VAR_1->reassmParams.p_ReassCommonTbl->totalExternalBufferBusy);
    VAR_2->sgFragments =
            FUNC_1(VAR_1->reassmParams.p_ReassCommonTbl->totalSgFragmentCounter);
    VAR_2->dmaSemaphoreDepletion =
            FUNC_1(VAR_1->reassmParams.p_ReassCommonTbl->totalDmaSemaphoreDepletionCounter);





    if (VAR_1->reassmParams.ip.p_Ipv4ReassTbl)
    {
        VAR_2->specificHdrStatistics[0].successfullyReassembled =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv4ReassTbl->totalSuccessfullyReasmFramesCounter);
        VAR_2->specificHdrStatistics[0].validFragments =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv4ReassTbl->totalValidFragmentCounter);
        VAR_2->specificHdrStatistics[0].processedFragments =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv4ReassTbl->totalProcessedFragCounter);
        VAR_2->specificHdrStatistics[0].malformedFragments =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv4ReassTbl->totalMalformdFragCounter);
        VAR_2->specificHdrStatistics[0].autoLearnBusy =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv4ReassTbl->totalSetBusyCounter);
        VAR_2->specificHdrStatistics[0].discardedFragments =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv4ReassTbl->totalDiscardedFragsCounter);
        VAR_2->specificHdrStatistics[0].moreThan16Fragments =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv4ReassTbl->totalMoreThan16FramesCounter);
    }
    if (VAR_1->reassmParams.ip.p_Ipv6ReassTbl)
    {
        VAR_2->specificHdrStatistics[1].successfullyReassembled =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv6ReassTbl->totalSuccessfullyReasmFramesCounter);
        VAR_2->specificHdrStatistics[1].validFragments =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv6ReassTbl->totalValidFragmentCounter);
        VAR_2->specificHdrStatistics[1].processedFragments =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv6ReassTbl->totalProcessedFragCounter);
        VAR_2->specificHdrStatistics[1].malformedFragments =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv6ReassTbl->totalMalformdFragCounter);
        VAR_2->specificHdrStatistics[1].autoLearnBusy =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv6ReassTbl->totalSetBusyCounter);
        VAR_2->specificHdrStatistics[1].discardedFragments =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv6ReassTbl->totalDiscardedFragsCounter);
        VAR_2->specificHdrStatistics[1].moreThan16Fragments =
                FUNC_1(VAR_1->reassmParams.ip.p_Ipv6ReassTbl->totalMoreThan16FramesCounter);
    }
    return VAR_0;
}
