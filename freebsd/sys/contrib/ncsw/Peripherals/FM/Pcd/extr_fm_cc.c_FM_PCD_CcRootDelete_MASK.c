
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_19__ {int numOfEntries; int numOfGrps; scalar_t__ p_Lock; scalar_t__ h_FmPcd; TYPE_6__* keyAndNextEngineParams; TYPE_1__* fmPcdGroupParam; scalar_t__ h_CapwapReassemblyManip; scalar_t__ h_IpReassemblyManip; scalar_t__ owners; int netEnvId; } ;
typedef TYPE_7__ t_FmPcdCcTree ;
typedef TYPE_7__ t_FmPcd ;
typedef scalar_t__ t_Error ;
struct TYPE_15__ {scalar_t__ h_FrmReplic; } ;
struct TYPE_14__ {scalar_t__ h_CcNode; } ;
struct TYPE_16__ {TYPE_3__ frParams; TYPE_2__ ccParams; } ;
struct TYPE_17__ {scalar_t__ nextEngine; TYPE_4__ params; scalar_t__ h_Manip; } ;
struct TYPE_18__ {TYPE_5__ nextEngineParams; } ;
struct TYPE_13__ {int numOfEntriesInGroup; } ;


 int FUNC_0 (TYPE_7__*,TYPE_7__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (TYPE_7__*,scalar_t__) ;
 int FUNC_11 (scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

t_Error FUNC_12(t_Handle VAR_8)
{
    t_FmPcd *VAR_9;
    t_FmPcdCcTree *VAR_10 = (t_FmPcdCcTree *)VAR_8;
    int VAR_11 = 0;

    FUNC_10(VAR_10, VAR_2);
    VAR_9 = (t_FmPcd *)VAR_10->h_FmPcd;
    FUNC_10(VAR_9, VAR_0);

    FUNC_2(VAR_9, VAR_10->netEnvId);

    if (VAR_10->owners)
        FUNC_9(
                VAR_5,
                VAR_1,
                ("the tree with this ID can not be removed because this tree is occupied, first - unbind this tree"));


    if (VAR_10->h_IpReassemblyManip)
    {
        FUNC_4(VAR_10->h_IpReassemblyManip);
        FUNC_5(VAR_10->h_IpReassemblyManip, VAR_4);
    }


    if (VAR_10->h_CapwapReassemblyManip)
    {
        FUNC_3(VAR_10->h_CapwapReassemblyManip);
        FUNC_5(VAR_10->h_CapwapReassemblyManip, VAR_4);
    }

    for (VAR_11 = 0; VAR_11 < VAR_10->numOfEntries; VAR_11++)
    {
        if (VAR_10->keyAndNextEngineParams[VAR_11].nextEngineParams.nextEngine
                == VAR_6)
            FUNC_11(
                    VAR_10->keyAndNextEngineParams[VAR_11].nextEngineParams.params.ccParams.h_CcNode,
                    VAR_4);

        if (VAR_10->keyAndNextEngineParams[VAR_11].nextEngineParams.h_Manip)
            FUNC_5(
                    VAR_10->keyAndNextEngineParams[VAR_11].nextEngineParams.h_Manip,
                    VAR_4);
    }

    if (VAR_10->p_Lock)
        FUNC_6(VAR_10->h_FmPcd, VAR_10->p_Lock);

    FUNC_0(VAR_10, VAR_9);

    return VAR_3;
}
