
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int num; } ;
struct TYPE_13__ {int num; } ;
struct TYPE_10__ {int numOfPools; int largestBufSize; int secondLargestBufSize; } ;
struct TYPE_9__ {int majorRev; } ;
struct TYPE_15__ {scalar_t__ portType; TYPE_6__ fifoBufs; TYPE_5__ tasks; TYPE_4__* p_FmPortDriverParam; int maxFrameLength; TYPE_2__ rxPoolsParams; TYPE_1__ fmRevInfo; scalar_t__ imEn; } ;
typedef TYPE_7__ t_FmPort ;
typedef int t_Error ;
struct TYPE_11__ {int tx_fifo_deq_pipeline_depth; } ;
struct TYPE_12__ {TYPE_3__ dfltCfg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static t_Error FUNC_4(t_FmPort *VAR_9)
{
    uint32_t VAR_10 = 0, VAR_11 = 0;




    if ((VAR_9->portType == VAR_7)
            || (VAR_9->portType == VAR_8))
    {
        VAR_10 =
                (uint32_t)(FUNC_3(VAR_9->maxFrameLength, VAR_0)
                        + (3 * VAR_0));
        if (!VAR_9->imEn)
            VAR_10 +=
                    VAR_9->p_FmPortDriverParam->dfltCfg.tx_fifo_deq_pipeline_depth
                            * VAR_0;

        VAR_11 = VAR_10;




        if (VAR_9->portType == VAR_8)
            VAR_11 += 3 * VAR_0;
        else
            VAR_11 += 2 * VAR_0;
    }




    else
        if (((VAR_9->portType == VAR_5)
                || (VAR_9->portType == VAR_6))
                && VAR_9->imEn)
        {
            VAR_11 =
                    VAR_10 =
                            (uint32_t)(FUNC_3(VAR_9->maxFrameLength, VAR_0)
                                    + (4 * VAR_0));
        }




        else
            if (((VAR_9->portType == VAR_5)
                    || (VAR_9->portType == VAR_6))
                    && !VAR_9->imEn)
            {
                if (VAR_9->fmRevInfo.majorRev == 4)
                {
                    if (VAR_9->rxPoolsParams.numOfPools == 1)
                        VAR_10 = 8 * VAR_0;
                    else
                        VAR_10 =
                                (uint32_t)(FUNC_3(VAR_9->rxPoolsParams.secondLargestBufSize, VAR_0)
                                        + (7 * VAR_0));
                }
                else
                {






                    VAR_10 = (uint32_t)
                    (FUNC_3(FUNC_2(VAR_9->maxFrameLength, VAR_9->rxPoolsParams.largestBufSize), VAR_0)
                            + (7*VAR_0));

                }

                VAR_11 = VAR_10;




                if (VAR_9->portType == VAR_6)
                    VAR_11 += 8 * VAR_0;
                else
                    VAR_11 += 3 * VAR_0;
            }


            else
                if ((VAR_9->portType == VAR_4)
                        || (VAR_9->portType == VAR_3))
                {
                    VAR_11 = VAR_10 = (uint32_t)((VAR_9->tasks.num + 2) * VAR_0);

                }

    FUNC_0(VAR_10 > 0);
    FUNC_0(VAR_11 >= VAR_10);


    if (VAR_9->fifoBufs.num < VAR_10)
        FUNC_1(VAR_2,
           ("FIFO size is %d and should be enlarged to %d bytes",VAR_9->fifoBufs.num, VAR_10));
    else if (VAR_9->fifoBufs.num < VAR_11)
        FUNC_1(VAR_2,
     ("For back-to-back frames processing, FIFO size is %d and needs to enlarge to %d bytes", VAR_9->fifoBufs.num, VAR_11));

    return VAR_1;
}
