
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef int t_List ;
typedef scalar_t__ t_Handle ;
typedef int t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_7__ {scalar_t__ maxNumOfKeys; scalar_t__ h_FmPcd; int numOfKeys; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
typedef int t_FmPcdCcNextEngineParams ;
struct TYPE_8__ {int shadowLock; int h_ShadowSpinlock; } ;
typedef TYPE_2__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__*,int ,int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int * FUNC_4 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;

t_Error FUNC_10(
        t_Handle VAR_9, t_Handle VAR_10,
        t_FmPcdCcNextEngineParams *VAR_11)
{
    t_FmPcdCcNode *VAR_12 = (t_FmPcdCcNode *)VAR_10;
    t_FmPcd *VAR_13;
    t_List VAR_14, VAR_15;
    uint16_t VAR_16;
    t_FmPcdModifyCcKeyAdditionalParams *VAR_17;
    t_Error VAR_18 = VAR_3;

    FUNC_7(VAR_12, VAR_2);

    VAR_16 = VAR_12->numOfKeys;

    VAR_13 = (t_FmPcd *)VAR_12->h_FmPcd;

    FUNC_3(&VAR_14);
    FUNC_3(&VAR_15);

    VAR_17 = FUNC_4(VAR_12, VAR_16,
                                             VAR_8, VAR_4, VAR_7,
                                             VAR_4);
    if (!VAR_17)
        FUNC_6(VAR_5, VAR_1, VAR_6);

    if (VAR_12->maxNumOfKeys
            && !FUNC_8(VAR_13->h_ShadowSpinlock, &VAR_13->shadowLock))
    {
        FUNC_9(VAR_17);
        return FUNC_2(VAR_0);
    }

    VAR_18 = FUNC_0(VAR_9, VAR_12, VAR_16,
                                       VAR_11,
                                       &VAR_14, &VAR_15,
                                       VAR_17);
    if (VAR_18)
    {
        FUNC_9(VAR_17);
        if (VAR_12->maxNumOfKeys)
            FUNC_5(VAR_13->shadowLock);
        FUNC_6(VAR_5, VAR_18, VAR_6);
    }

    VAR_18 = FUNC_1(VAR_13, &VAR_14, &VAR_15,
                          VAR_17, VAR_4);

    if (VAR_12->maxNumOfKeys)
        FUNC_5(VAR_13->shadowLock);

    return VAR_18;
}
