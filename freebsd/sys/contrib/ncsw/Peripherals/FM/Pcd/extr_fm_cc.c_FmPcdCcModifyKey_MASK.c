
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int t_List ;
typedef scalar_t__ t_Handle ;
typedef int t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_7__ {scalar_t__ numOfKeys; scalar_t__ userSizeOfExtraction; scalar_t__ h_FmPcd; scalar_t__ maxNumOfKeys; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
struct TYPE_8__ {int shadowLock; int h_ShadowSpinlock; } ;
typedef TYPE_2__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__*,scalar_t__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int *,int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_6 (TYPE_1__*,scalar_t__,int ,int,int,int) ;
 char* VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,char*) ;
 int FUNC_9 (int *) ;
 int VAR_10 ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_12 (int *) ;
 int VAR_11 ;

t_Error FUNC_13(t_Handle VAR_12, t_Handle VAR_13,
                         uint16_t VAR_14, uint8_t VAR_15, uint8_t *VAR_16,
                         uint8_t *VAR_17)
{
    t_FmPcdCcNode *VAR_18 = (t_FmPcdCcNode *)VAR_13;
    t_FmPcd *VAR_19;
    t_List VAR_20, VAR_21;
    t_FmPcdModifyCcKeyAdditionalParams *VAR_22;
    uint16_t VAR_23;
    bool VAR_24 = VAR_6;
    t_Error VAR_25 = VAR_5;

    if (VAR_14 >= VAR_18->numOfKeys)
        FUNC_8(VAR_7, VAR_2,
                     ("keyIndex > previously cleared last index + 1"));

    if (VAR_15 != VAR_18->userSizeOfExtraction)
        FUNC_8(
                VAR_7,
                VAR_3,
                ("size for ModifyKey has to be the same as defined in SetNode"));

    if (VAR_18->h_FmPcd != VAR_12)
        FUNC_8(
                VAR_7,
                VAR_3,
                ("handler to FmPcd is different from the handle provided at node initialization time"));

    VAR_25 = FUNC_3(VAR_13, VAR_15, VAR_16, VAR_17, &VAR_23);
    if (FUNC_4(VAR_25) != VAR_4)
        FUNC_8(
                VAR_8,
                VAR_0,
                ("The received key and mask pair was already found in the match table of the provided node"));

    VAR_19 = (t_FmPcd *)VAR_18->h_FmPcd;

    FUNC_5(&VAR_20);
    FUNC_5(&VAR_21);

    VAR_22 = FUNC_6(VAR_18, VAR_14,
                                             VAR_11, VAR_10, VAR_10,
                                             VAR_6);
    if (!VAR_22)
        FUNC_8(VAR_7, VAR_2, VAR_9);

    if (VAR_18->maxNumOfKeys)
    {
        if (!FUNC_10(VAR_19->h_ShadowSpinlock, &VAR_19->shadowLock))
        {
            FUNC_12(VAR_22);
            return FUNC_2(VAR_1);
        }

        VAR_24 = VAR_10;
    }

    VAR_25 = FUNC_0(VAR_18, VAR_14, VAR_16, VAR_17,
                                VAR_22);
    if (VAR_25)
    {
        FUNC_12(VAR_22);
        if (VAR_18->maxNumOfKeys)
            FUNC_7(VAR_19->shadowLock);
        FUNC_8(VAR_7, VAR_25, VAR_9);
    }

    VAR_25 = FUNC_11(VAR_18, VAR_22,
                                           &VAR_20,
                                           &VAR_21);
    if (VAR_25)
    {
        FUNC_9(VAR_22);
        FUNC_12(VAR_22);
        if (VAR_18->maxNumOfKeys)
            FUNC_7(VAR_19->shadowLock);
        FUNC_8(VAR_7, VAR_25, VAR_9);
    }

    VAR_25 = FUNC_1(VAR_19, &VAR_20, &VAR_21,
                          VAR_22, VAR_24);

    if (VAR_18->maxNumOfKeys)
        FUNC_7(VAR_19->shadowLock);

    return VAR_25;
}
