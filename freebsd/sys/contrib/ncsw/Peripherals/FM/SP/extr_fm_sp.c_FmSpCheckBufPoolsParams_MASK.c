
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_9__ {int numOfPoolsUsed; TYPE_1__* extBufPool; } ;
typedef TYPE_2__ t_FmExtPools ;
struct TYPE_10__ {scalar_t__ numOfPools; scalar_t__* poolsToConsiderForSingleMode; scalar_t__ singlePoolModeEnable; scalar_t__* poolsToConsider; scalar_t__ poolsGrpModeEnable; } ;
typedef TYPE_3__ t_FmBufPoolDepletion ;
struct TYPE_11__ {int numOfBackupPools; int* poolIds; } ;
typedef TYPE_4__ t_FmBackupBmPools ;
typedef int t_Error ;
struct TYPE_8__ {int id; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_7 ;

t_Error FUNC_1(t_FmExtPools *VAR_8,
                                t_FmBackupBmPools *VAR_9,
                                t_FmBufPoolDepletion *VAR_10)
{

    int VAR_11 = 0, VAR_12 = 0;
    bool VAR_13;
    uint8_t VAR_14 = 0;

    if (VAR_8)
    {
        if (VAR_8->numOfPoolsUsed > VAR_5)
                FUNC_0(VAR_6, VAR_2, ("numOfPoolsUsed can't be larger than %d", VAR_5));

        for (VAR_11=0;VAR_11<VAR_8->numOfPoolsUsed;VAR_11++)
        {
            if (VAR_8->extBufPool[VAR_11].id >= VAR_0)
                FUNC_0(VAR_6, VAR_2, ("extBufPools.extBufPool[%d].id can't be larger than %d", VAR_11, VAR_0));
            if (!VAR_8->extBufPool[VAR_11].size)
                FUNC_0(VAR_6, VAR_2, ("extBufPools.extBufPool[%d].size is 0", VAR_11));
        }
    }
    if (!VAR_8 && (VAR_9 || VAR_10))
          FUNC_0(VAR_6, VAR_2, ("backupBmPools ot bufPoolDepletion can not be defined without external pools"));



    if (VAR_9)
    {
        if (VAR_9->numOfBackupPools >= VAR_8->numOfPoolsUsed)
            FUNC_0(VAR_6, VAR_2, ("p_BackupBmPools must be smaller than extBufPools.numOfPoolsUsed"));
        VAR_13 = VAR_4;
        for (VAR_11 = 0;VAR_11<VAR_9->numOfBackupPools;VAR_11++)
        {

            for (VAR_12=0;VAR_12<VAR_8->numOfPoolsUsed;VAR_12++)
            {
                if (VAR_9->poolIds[VAR_11] == VAR_8->extBufPool[VAR_12].id)
                {
                    VAR_13 = VAR_7;
                    break;
                }
            }
            if (!VAR_13)
                FUNC_0(VAR_6, VAR_2, ("All p_BackupBmPools.poolIds must be included in extBufPools.extBufPool[n].id"));
            else
                VAR_13 = VAR_4;
        }
    }


    if (VAR_10 && VAR_10->poolsGrpModeEnable)
    {
        if ((VAR_10->numOfPools > VAR_8->numOfPoolsUsed))
            FUNC_0(VAR_6, VAR_2, ("bufPoolDepletion.numOfPools can't be larger than %d and can't be larger than numOfPoolsUsed", VAR_5));

        if (!VAR_10->numOfPools)
          FUNC_0(VAR_6, VAR_2, ("bufPoolDepletion.numOfPoolsToConsider can not be 0 when poolsGrpModeEnable=TRUE"));

        VAR_13 = VAR_4;
        VAR_14 = 0;


        for (VAR_11=0;VAR_11<VAR_0;VAR_11++)
        {
            if (VAR_10->poolsToConsider[VAR_11])
            {
                for (VAR_12=0;VAR_12<VAR_8->numOfPoolsUsed;VAR_12++)
                 {
                    if (VAR_11 == VAR_8->extBufPool[VAR_12].id)
                    {
                        VAR_13 = VAR_7;
                        VAR_14++;
                        break;
                    }
                 }
                if (!VAR_13)
                    FUNC_0(VAR_6, VAR_1, ("Pools selected for depletion are not used."));
                else
                    VAR_13 = VAR_4;
            }
        }

        if (VAR_14 != VAR_10->numOfPools)
            FUNC_0(VAR_6, VAR_2, ("bufPoolDepletion.numOfPools is larger than the number of pools defined."));
    }

    if (VAR_10 && VAR_10->singlePoolModeEnable)
    {

        VAR_13 = VAR_4;
        VAR_14 = 0;
        for (VAR_11=0;VAR_11<VAR_0;VAR_11++)
        {
            if (VAR_10->poolsToConsiderForSingleMode[VAR_11])
            {
                for (VAR_12=0;VAR_12<VAR_8->numOfPoolsUsed;VAR_12++)
                {
                    if (VAR_11 == VAR_8->extBufPool[VAR_12].id)
                    {
                        VAR_13 = VAR_7;
                        VAR_14++;
                        break;
                    }
                }
                if (!VAR_13)
                    FUNC_0(VAR_6, VAR_1, ("Pools selected for depletion are not used."));
                else
                    VAR_13 = VAR_4;
            }
        }
        if (!VAR_14)
            FUNC_0(VAR_6, VAR_2, ("No pools defined for single buffer mode pool depletion."));
    }

    return VAR_3;
}
