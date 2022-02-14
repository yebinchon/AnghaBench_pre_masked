
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_16__ {int taskCompVal; int queueCompVal; int dmaCompVal; int fifoCompVal; } ;
typedef TYPE_4__ t_FmPortPerformanceCnt ;
struct TYPE_15__ {int num; } ;
struct TYPE_14__ {scalar_t__ num; } ;
struct TYPE_13__ {scalar_t__ num; } ;
struct TYPE_17__ {scalar_t__ portType; TYPE_3__ fifoBufs; TYPE_2__ openDmas; TYPE_1__ tasks; int portId; } ;
typedef TYPE_5__ t_FmPort ;
typedef int t_Error ;
typedef int savedParams ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int VAR_7 ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (TYPE_4__*,int ,int) ;

t_Error FUNC_9(t_Handle VAR_13)
{
    t_FmPort *VAR_14 = (t_FmPort*)VAR_13;
    t_FmPortPerformanceCnt VAR_15, VAR_16;
    t_Error VAR_17;
    bool VAR_18, VAR_19 = VAR_4;

    FUNC_5(VAR_14, VAR_1);

    FUNC_6("Analyzing Performance parameters for port (type %d, id%d)\n",
             VAR_14->portType, VAR_14->portId);

    VAR_15.taskCompVal = (uint8_t)VAR_14->tasks.num;
    if ((VAR_14->portType == VAR_12)
            || (VAR_14->portType == VAR_11))
        VAR_15.queueCompVal = 0;
    else
        VAR_15.queueCompVal = 1;
    VAR_15.dmaCompVal = (uint8_t)VAR_14->openDmas.num;
    VAR_15.fifoCompVal = VAR_14->fifoBufs.num;

    FUNC_2(VAR_14, VAR_4);
    FUNC_0(VAR_14);
    if ((VAR_17 = FUNC_3(VAR_14, &VAR_15))
            != VAR_3)
        FUNC_4(VAR_5, VAR_17, VAR_6);
    FUNC_2(VAR_14, VAR_7);
    FUNC_7(1000000);
    FUNC_2(VAR_14, VAR_4);
    if (FUNC_1(VAR_14, VAR_10))
    {
        FUNC_6(
                "Max num of defined port tasks (%d) utilized - Please enlarge\n",
                VAR_14->tasks.num);
        VAR_19 = VAR_7;
    }
    if (FUNC_1(VAR_14, VAR_8))
    {
        FUNC_6(
                "Max num of defined port openDmas (%d) utilized - Please enlarge\n",
                VAR_14->openDmas.num);
        VAR_19 = VAR_7;
    }
    if (FUNC_1(VAR_14, VAR_9))
    {
        FUNC_6(
                "Max size of defined port fifo (%d) utilized - Please enlarge\n",
                VAR_14->fifoBufs.num);
        VAR_19 = VAR_7;
    }
    if (VAR_19)
        FUNC_4(VAR_5, VAR_2, VAR_6);

    FUNC_8(&VAR_16, 0, sizeof(VAR_16));
    while (VAR_7)
    {
        VAR_18 = VAR_4;
        if ((VAR_15.taskCompVal != 1) && !VAR_16.taskCompVal)
        {
            VAR_15.taskCompVal--;
            VAR_18 = VAR_7;
        }
        if ((VAR_15.dmaCompVal != 1) && !VAR_16.dmaCompVal)
        {
            VAR_15.dmaCompVal--;
            VAR_18 = VAR_7;
        }
        if ((VAR_15.fifoCompVal != VAR_0)
                && !VAR_16.fifoCompVal)
        {
            VAR_15.fifoCompVal -= VAR_0;
            VAR_18 = VAR_7;
        }
        if (!VAR_18)
            break;

        FUNC_0(VAR_14);
        if ((VAR_17 = FUNC_3(VAR_14, &VAR_15))
                != VAR_3)
            FUNC_4(VAR_5, VAR_17, VAR_6);
        FUNC_2(VAR_14, VAR_7);
        FUNC_7(1000000);
        FUNC_2(VAR_14, VAR_4);

        if (!VAR_16.taskCompVal
                && FUNC_1(VAR_14, VAR_10))
            VAR_16.taskCompVal = (uint8_t)(VAR_15.taskCompVal + 2);
        if (!VAR_16.dmaCompVal
                && FUNC_1(VAR_14, VAR_8))
            VAR_16.dmaCompVal = (uint8_t)(VAR_15.dmaCompVal + 2);
        if (!VAR_16.fifoCompVal
                && FUNC_1(VAR_14, VAR_9))
            VAR_16.fifoCompVal = VAR_15.fifoCompVal
                    + (2 * VAR_0);
    }

    FUNC_6("best vals: tasks %d, dmas %d, fifos %d\n",
             VAR_16.taskCompVal, VAR_16.dmaCompVal,
             VAR_16.fifoCompVal);
    return VAR_3;
}
