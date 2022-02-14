
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_17__ {int timeoutThresholdForReassmProcess; int maxNumFramesInProcess; int* minFragSize; scalar_t__ nonConsistentSpFqid; int sgBpid; int dataLiodnOffset; int dataMemId; int fqidForTimeOutFrames; int timeOutMode; int * numOfFramesPerHashEntry; int * relativeSchemeId; } ;
struct TYPE_13__ {TYPE_5__ ipReassem; } ;
struct TYPE_16__ {scalar_t__ hdr; TYPE_1__ u; } ;
typedef TYPE_4__ t_FmPcdManipReassemParams ;
typedef TYPE_5__ t_FmPcdManipReassemIpParams ;
struct TYPE_14__ {int* minFragSize; scalar_t__ nonConsistentSpFqid; int * numOfFramesPerHashEntry; int * relativeSchemeId; } ;
struct TYPE_15__ {int maxNumFramesInProcess; int timeoutThresholdForReassmProcess; scalar_t__ hdr; TYPE_2__ ip; int sgBpid; int dataLiodnOffset; int dataMemId; int fqidForTimeOutFrames; int timeOutMode; } ;
struct TYPE_18__ {TYPE_3__ reassmParams; scalar_t__ h_FmPcd; } ;
typedef TYPE_6__ t_FmPcdManip ;
struct TYPE_19__ {scalar_t__ h_Hc; } ;
typedef TYPE_7__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static t_Error FUNC_5(t_FmPcdManipReassemParams *VAR_6,
                            t_FmPcdManip *VAR_7)
{
    uint32_t VAR_8 = 10000;
    t_FmPcdManipReassemIpParams VAR_9 =
            VAR_6->u.ipReassem;
    t_Error VAR_10;

    FUNC_2(VAR_7->h_FmPcd, VAR_0);
    FUNC_2(((t_FmPcd *)VAR_7->h_FmPcd)->h_Hc,
                              VAR_0);


    if ((VAR_9.timeoutThresholdForReassmProcess < 1000)
            || (VAR_9.timeoutThresholdForReassmProcess > 8000000))
        FUNC_1(
                VAR_5, VAR_1,
                ("timeoutThresholdForReassmProcess should be 1msec - 8sec"));


    if (VAR_9.maxNumFramesInProcess
            > (VAR_9.maxNumFramesInProcess * VAR_8 / 2))
        FUNC_1(
                VAR_5,
                VAR_1,
                ("maxNumFramesInProcess has to be less than (maximun set number * number of ways / 2)"));

    if ((VAR_6->hdr == VAR_4)
            && (VAR_9.minFragSize[1] < 256))
        FUNC_1(VAR_5, VAR_1, ("minFragSize[1] must be >= 256"));


    VAR_7->reassmParams.ip.relativeSchemeId[0] =
            VAR_9.relativeSchemeId[0];
    VAR_7->reassmParams.ip.relativeSchemeId[1] =
            VAR_9.relativeSchemeId[1];
    VAR_7->reassmParams.ip.numOfFramesPerHashEntry[0] =
            VAR_9.numOfFramesPerHashEntry[0];
    VAR_7->reassmParams.ip.numOfFramesPerHashEntry[1] =
            VAR_9.numOfFramesPerHashEntry[1];
    VAR_7->reassmParams.ip.minFragSize[0] = VAR_9.minFragSize[0];
    VAR_7->reassmParams.ip.minFragSize[1] = VAR_9.minFragSize[1];
    VAR_7->reassmParams.maxNumFramesInProcess =
            VAR_9.maxNumFramesInProcess;
    VAR_7->reassmParams.timeOutMode = VAR_9.timeOutMode;
    VAR_7->reassmParams.fqidForTimeOutFrames =
            VAR_9.fqidForTimeOutFrames;
    VAR_7->reassmParams.timeoutThresholdForReassmProcess =
            VAR_9.timeoutThresholdForReassmProcess;
    VAR_7->reassmParams.dataMemId = VAR_9.dataMemId;
    VAR_7->reassmParams.dataLiodnOffset = VAR_9.dataLiodnOffset;
    FUNC_0(VAR_7);


    if ((VAR_7->reassmParams.hdr == VAR_4)
            || (VAR_7->reassmParams.hdr == VAR_3))
    {
        VAR_10 = FUNC_3(VAR_7);
        if (VAR_10 != VAR_2)
            return VAR_10;
    }


    if (VAR_7->reassmParams.hdr == VAR_4)
    {
        VAR_10 = FUNC_4(VAR_7);
        if (VAR_10 != VAR_2)
            return VAR_10;
    }

    return VAR_2;
}
