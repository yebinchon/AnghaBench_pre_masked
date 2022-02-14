
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int t_List ;
typedef TYPE_1__* t_Handle ;
typedef int t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_11__ {scalar_t__ numOfKeys; scalar_t__ maxNumOfKeys; scalar_t__ h_FmPcd; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
typedef int t_FmPcdCcNextEngineParams ;
struct TYPE_12__ {int shadowLock; int h_ShadowSpinlock; } ;
typedef TYPE_3__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,scalar_t__,int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int * FUNC_4 (TYPE_1__*,scalar_t__,int ,int ,int ,int ) ;
 char* VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;

__attribute__((used)) static t_Error FUNC_10(
        t_Handle VAR_9, t_Handle VAR_10, uint16_t VAR_11,
        t_FmPcdCcNextEngineParams *VAR_12)
{
    t_FmPcdCcNode *VAR_13 = (t_FmPcdCcNode *)VAR_10;
    t_FmPcd *VAR_14;
    t_List VAR_15, VAR_16;
    t_FmPcdModifyCcKeyAdditionalParams *VAR_17;
    t_Error VAR_18 = VAR_4;

    FUNC_7(VAR_9, VAR_3);
    FUNC_7(VAR_13, VAR_1);

    if (VAR_11 >= VAR_13->numOfKeys)
        FUNC_6(VAR_6, VAR_2,
                     ("keyIndex > previously cleared last index + 1"));

    VAR_14 = (t_FmPcd *)VAR_13->h_FmPcd;

    FUNC_3(&VAR_15);
    FUNC_3(&VAR_16);

    VAR_17 = FUNC_4(VAR_13, VAR_11,
                                             VAR_8, VAR_5,
                                             VAR_5, VAR_5);
    if (!VAR_17)
        FUNC_6(VAR_6, VAR_2, VAR_7);

    if (VAR_13->maxNumOfKeys
            && !FUNC_8(VAR_14->h_ShadowSpinlock, &VAR_14->shadowLock))
    {
        FUNC_9(VAR_17);
        return FUNC_2(VAR_0);
    }

    VAR_18 = FUNC_0(VAR_9, VAR_13, VAR_11,
                                       VAR_12,
                                       &VAR_15, &VAR_16,
                                       VAR_17);
    if (VAR_18)
    {
        FUNC_9(VAR_17);
        if (VAR_13->maxNumOfKeys)
            FUNC_5(VAR_14->shadowLock);
        FUNC_6(VAR_6, VAR_18, VAR_7);
    }

    VAR_18 = FUNC_1(VAR_14, &VAR_15, &VAR_16,
                          VAR_17, VAR_5);

    if (VAR_13->maxNumOfKeys)
        FUNC_5(VAR_14->shadowLock);

    return VAR_18;
}
