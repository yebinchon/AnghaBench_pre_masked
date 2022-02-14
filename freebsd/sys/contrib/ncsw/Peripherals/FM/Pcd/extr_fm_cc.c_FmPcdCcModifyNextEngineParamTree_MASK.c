
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int t_List ;
typedef int t_Handle ;
struct TYPE_14__ {int tree; } ;
typedef TYPE_2__ t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_15__ {int numOfGrps; TYPE_1__* fmPcdGroupParam; } ;
typedef TYPE_3__ t_FmPcdCcTree ;
typedef int t_FmPcdCcNextEngineParams ;
struct TYPE_16__ {int shadowLock; scalar_t__ p_CcShadow; int h_ShadowSpinlock; } ;
typedef TYPE_4__ t_FmPcd ;
typedef scalar_t__ t_Error ;
struct TYPE_13__ {int numOfEntriesInGroup; int baseGroupEntry; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_3__*,scalar_t__,int *,int *,int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int *,int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 TYPE_2__* FUNC_4 (TYPE_3__*,scalar_t__,int ,int ,int ,int ) ;
 char* VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int FUNC_7 (int,scalar_t__) ;
 int VAR_8 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_9 ;

t_Error FUNC_10(
        t_Handle VAR_10, t_Handle VAR_11, uint8_t VAR_12, uint8_t VAR_13,
        t_FmPcdCcNextEngineParams *VAR_14)
{
    t_FmPcdCcTree *VAR_15 = (t_FmPcdCcTree *)VAR_11;
    t_FmPcd *VAR_16;
    t_List VAR_17, VAR_18;
    uint16_t VAR_19;
    t_FmPcdModifyCcKeyAdditionalParams *VAR_20;
    t_Error VAR_21 = VAR_4;

    FUNC_7(VAR_10, VAR_1);
    FUNC_7(VAR_11, VAR_1);
    FUNC_7((VAR_12 <= 7), VAR_3);

    if (VAR_12 >= VAR_15->numOfGrps)
        FUNC_6(VAR_6, VAR_1,
                     ("grpId you asked > numOfGroup of relevant tree"));

    if (VAR_13 >= VAR_15->fmPcdGroupParam[VAR_12].numOfEntriesInGroup)
        FUNC_6(VAR_6, VAR_1, ("index > numOfEntriesInGroup"));

    VAR_16 = (t_FmPcd *)VAR_10;

    FUNC_3(&VAR_17);
    FUNC_3(&VAR_18);

    VAR_19 = (uint16_t)(VAR_15->fmPcdGroupParam[VAR_12].baseGroupEntry
            + VAR_13);

    VAR_20 = FUNC_4(VAR_15, VAR_19,
                                             VAR_9, VAR_5,
                                             VAR_5, VAR_8);
    if (!VAR_20)
        FUNC_6(VAR_6, VAR_2, VAR_7);

    VAR_20->tree = VAR_8;

    if (VAR_16->p_CcShadow
            && !FUNC_8(VAR_16->h_ShadowSpinlock, &VAR_16->shadowLock))
    {
        FUNC_9(VAR_20);
        return FUNC_2(VAR_0);
    }

    VAR_21 = FUNC_0(VAR_16, VAR_15, VAR_19,
                                       VAR_14,
                                       &VAR_17, &VAR_18,
                                       VAR_20);
    if (VAR_21)
    {
        FUNC_9(VAR_20);
        FUNC_6(VAR_6, VAR_21, VAR_7);
    }

    VAR_21 = FUNC_1(VAR_16, &VAR_17, &VAR_18,
                          VAR_20, VAR_5);

    if (VAR_16->p_CcShadow)
        FUNC_5(VAR_16->shadowLock);

    return VAR_21;

}
