
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int t_List ;
typedef scalar_t__ t_Handle ;
typedef int t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_7__ {scalar_t__ numOfKeys; scalar_t__ h_FmPcd; scalar_t__ maxNumOfKeys; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
struct TYPE_8__ {int shadowLock; int h_ShadowSpinlock; } ;
typedef TYPE_2__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int *,int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int * FUNC_4 (TYPE_1__*,scalar_t__,int ,int,int,int) ;
 char* VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int VAR_8 ;

t_Error FUNC_11(t_Handle VAR_9, t_Handle VAR_10,
                         uint16_t VAR_11)
{

    t_FmPcdCcNode *VAR_12 = (t_FmPcdCcNode *)VAR_10;
    t_FmPcd *VAR_13;
    t_FmPcdModifyCcKeyAdditionalParams *VAR_14;
    t_List VAR_15, VAR_16;
    bool VAR_17 = VAR_4;
    t_Error VAR_18 = VAR_3;

    if (VAR_11 >= VAR_12->numOfKeys)
        FUNC_6(VAR_5, VAR_2,
                     ("impossible to remove key when numOfKeys <= keyIndex"));

    if (VAR_12->h_FmPcd != VAR_9)
        FUNC_6(
                VAR_5,
                VAR_2,
                ("handler to FmPcd is different from the handle provided at node initialization time"));

    VAR_13 = (t_FmPcd *)VAR_12->h_FmPcd;

    FUNC_3(&VAR_15);
    FUNC_3(&VAR_16);

    VAR_14 = FUNC_4(VAR_12, VAR_11,
                                             VAR_8, VAR_7, VAR_7,
                                             VAR_4);
    if (!VAR_14)
        FUNC_6(VAR_5, VAR_1, VAR_6);

    if (VAR_12->maxNumOfKeys)
    {
        if (!FUNC_8(VAR_13->h_ShadowSpinlock, &VAR_13->shadowLock))
        {
            FUNC_10(VAR_14);
            return FUNC_2(VAR_0);
        }

        VAR_17 = VAR_7;
    }

    VAR_18 = FUNC_0(VAR_12, VAR_11, VAR_14);
    if (VAR_18)
    {
        FUNC_10(VAR_14);
        if (VAR_12->maxNumOfKeys)
            FUNC_5(VAR_13->shadowLock);
        FUNC_6(VAR_5, VAR_18, VAR_6);
    }

    VAR_18 = FUNC_9(VAR_12, VAR_14,
                                           &VAR_15,
                                           &VAR_16);
    if (VAR_18)
    {
        FUNC_7(VAR_14);
        FUNC_10(VAR_14);
        if (VAR_12->maxNumOfKeys)
            FUNC_5(VAR_13->shadowLock);
        FUNC_6(VAR_5, VAR_18, VAR_6);
    }

    VAR_18 = FUNC_1(VAR_13, &VAR_15, &VAR_16,
                          VAR_14, VAR_17);

    if (VAR_12->maxNumOfKeys)
        FUNC_5(VAR_13->shadowLock);

    return VAR_18;
}
