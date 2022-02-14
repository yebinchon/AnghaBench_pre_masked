
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int t_List ;
typedef scalar_t__ t_Handle ;
typedef int t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_10__ {scalar_t__ numOfKeys; scalar_t__ userSizeOfExtraction; scalar_t__ h_FmPcd; scalar_t__ maxNumOfKeys; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
struct TYPE_11__ {int p_Mask; int p_Key; } ;
typedef TYPE_2__ t_FmPcdCcKeyParams ;
struct TYPE_12__ {int shadowLock; int h_ShadowSpinlock; } ;
typedef TYPE_3__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__*,scalar_t__,TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,int *,int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int VAR_10 ;
 int * FUNC_6 (TYPE_1__*,scalar_t__,int ,int,int,int) ;
 char* VAR_11 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,char*) ;
 int FUNC_9 (int *) ;
 int VAR_12 ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_12 (int *) ;
 int VAR_13 ;

t_Error FUNC_13(t_Handle VAR_14, t_Handle VAR_15,
                      uint16_t VAR_16, uint8_t VAR_17,
                      t_FmPcdCcKeyParams *VAR_18)
{
    t_FmPcdCcNode *VAR_19 = (t_FmPcdCcNode *)VAR_15;
    t_FmPcd *VAR_20;
    t_FmPcdModifyCcKeyAdditionalParams *VAR_21;
    t_List VAR_22, VAR_23;
    bool VAR_24 = VAR_8;
    uint16_t VAR_25;
    t_Error VAR_26 = VAR_7;

    if (VAR_16 > VAR_19->numOfKeys)
        FUNC_8(VAR_10, VAR_6,
                     ("keyIndex > previously cleared last index + 1"));

    if (VAR_17 != VAR_19->userSizeOfExtraction)
        FUNC_8(
                VAR_10,
                VAR_4,
                ("keySize has to be defined as it was defined in initialization step"));

    if (VAR_19->h_FmPcd != VAR_14)
        FUNC_8(
                VAR_10,
                VAR_4,
                ("handler to FmPcd is different from the handle provided at node initialization time"));

    if (VAR_19->maxNumOfKeys)
    {
        if (VAR_19->numOfKeys == VAR_19->maxNumOfKeys)
            FUNC_8(
                    VAR_10,
                    VAR_2,
                    ("number of keys exceeds the maximal number of keys provided at node initialization time"));
    }
    else
        if (VAR_19->numOfKeys == VAR_9)
            FUNC_8(
                    VAR_10,
                    VAR_4,
                    ("number of keys can not be larger than %d", VAR_9));

    VAR_26 = FUNC_3(VAR_15, VAR_17, VAR_18->p_Key,
                       VAR_18->p_Mask, &VAR_25);
    if (FUNC_4(VAR_26) != VAR_5)
        FUNC_8(
                VAR_10,
                VAR_0,
                ("The received key and mask pair was already found in the match table of the provided node"));

    VAR_20 = (t_FmPcd *)VAR_19->h_FmPcd;

    FUNC_5(&VAR_22);
    FUNC_5(&VAR_23);

    VAR_21 = FUNC_6(VAR_19, VAR_16,
                                             VAR_13, VAR_12, VAR_12,
                                             VAR_8);
    if (!VAR_21)
        FUNC_8(VAR_10, VAR_3, VAR_11);

    if (VAR_19->maxNumOfKeys)
    {
        if (!FUNC_10(VAR_20->h_ShadowSpinlock, &VAR_20->shadowLock))
        {
            FUNC_12(VAR_21);
            return FUNC_2(VAR_1);
        }

        VAR_24 = VAR_12;
    }

    VAR_26 = FUNC_0(VAR_14, VAR_19, VAR_16,
                                                VAR_18,
                                                VAR_21, VAR_12);
    if (VAR_26)
    {
        FUNC_9(VAR_21);
        FUNC_12(VAR_21);
        if (VAR_19->maxNumOfKeys)
            FUNC_7(VAR_20->shadowLock);
        FUNC_8(VAR_10, VAR_26, VAR_11);
    }

    VAR_26 = FUNC_11(VAR_19, VAR_21,
                                           &VAR_22,
                                           &VAR_23);
    if (VAR_26)
    {
        FUNC_9(VAR_21);
        FUNC_12(VAR_21);
        if (VAR_19->maxNumOfKeys)
            FUNC_7(VAR_20->shadowLock);
        FUNC_8(VAR_10, VAR_26, VAR_11);
    }

    VAR_26 = FUNC_1(VAR_20, &VAR_22, &VAR_23,
                          VAR_21, VAR_24);
    if (VAR_19->maxNumOfKeys)
        FUNC_7(VAR_20->shadowLock);

    return VAR_26;
}
