
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_8__ {int numOfKeys; TYPE_1__* keyAndNextEngineParams; } ;
typedef TYPE_2__ t_FmPcdCcNode ;
typedef TYPE_2__ t_FmPcdCcNextEngineParams ;
typedef int t_Error ;
struct TYPE_7__ {int nextEngineParams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;

t_Error FUNC_3(
        t_Handle VAR_7, uint16_t VAR_8,
        t_FmPcdCcNextEngineParams *VAR_9)
{
    t_FmPcdCcNode *VAR_10 = (t_FmPcdCcNode *)VAR_7;

    FUNC_1(VAR_10, VAR_0);
    FUNC_1(VAR_9, VAR_3);

    if (VAR_8 >= VAR_10->numOfKeys)
        FUNC_0(VAR_6, VAR_1,
                     ("keyIndex exceeds current number of keys"));

    if (VAR_8 > (VAR_5 - 1))
        FUNC_0(
                VAR_6,
                VAR_2,
                ("keyIndex can not be larger than %d", (VAR_5 - 1)));

    FUNC_2(VAR_9,
           &VAR_10->keyAndNextEngineParams[VAR_8].nextEngineParams,
           sizeof(t_FmPcdCcNextEngineParams));

    return VAR_4;
}
