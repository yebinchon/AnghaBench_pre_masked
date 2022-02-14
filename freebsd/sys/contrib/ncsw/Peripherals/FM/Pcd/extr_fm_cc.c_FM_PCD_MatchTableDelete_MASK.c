
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_14__ {int numOfKeys; TYPE_5__* keyAndNextEngineParams; scalar_t__ owners; struct TYPE_14__* h_FmPcd; } ;
typedef TYPE_6__ t_FmPcdCcNode ;
typedef int t_Error ;
struct TYPE_10__ {scalar_t__ h_FrmReplic; } ;
struct TYPE_9__ {int h_CcNode; } ;
struct TYPE_11__ {TYPE_2__ frParams; TYPE_1__ ccParams; } ;
struct TYPE_12__ {scalar_t__ nextEngine; TYPE_3__ params; scalar_t__ h_Manip; } ;
struct TYPE_13__ {TYPE_4__ nextEngineParams; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

t_Error FUNC_6(t_Handle VAR_7)
{
    t_FmPcdCcNode *VAR_8 = (t_FmPcdCcNode *)VAR_7;
    int VAR_9 = 0;

    FUNC_4(VAR_8, VAR_0);
    FUNC_4(VAR_8->h_FmPcd, VAR_0);

    if (VAR_8->owners)
        FUNC_3(
                VAR_4,
                VAR_1,
                ("This node cannot be removed because it is occupied; first unbind this node"));

    for (VAR_9 = 0; VAR_9 < VAR_8->numOfKeys; VAR_9++)
        if (VAR_8->keyAndNextEngineParams[VAR_9].nextEngineParams.nextEngine
                == VAR_5)
            FUNC_5(
                    VAR_8->keyAndNextEngineParams[VAR_9].nextEngineParams.params.ccParams.h_CcNode,
                    VAR_3);

    if (VAR_8->keyAndNextEngineParams[VAR_9].nextEngineParams.nextEngine
            == VAR_5)
        FUNC_5(
                VAR_8->keyAndNextEngineParams[VAR_9].nextEngineParams.params.ccParams.h_CcNode,
                VAR_3);


    for (VAR_9 = 0; VAR_9 < VAR_8->numOfKeys + 1; VAR_9++)
    {
        if (VAR_8->keyAndNextEngineParams[VAR_9].nextEngineParams.h_Manip)
            FUNC_1(
                    VAR_8->keyAndNextEngineParams[VAR_9].nextEngineParams.h_Manip,
                    VAR_3);
    }

    FUNC_0(VAR_8);

    return VAR_2;
}
