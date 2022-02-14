
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_10__ {size_t numOfKeys; TYPE_3__* keyAndNextEngineParams; } ;
typedef TYPE_4__ t_FmPcdCcNode ;
typedef int t_FmPcdCcNextEngineParams ;
typedef int t_Error ;
struct TYPE_7__ {TYPE_4__* h_CcNode; } ;
struct TYPE_8__ {TYPE_1__ ccParams; } ;
struct TYPE_11__ {TYPE_2__ params; } ;
struct TYPE_9__ {TYPE_5__ nextEngineParams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int *,TYPE_5__*,int) ;

t_Error FUNC_2(
        t_Handle VAR_2,
        t_FmPcdCcNextEngineParams *VAR_3)
{
    t_FmPcdCcNode *VAR_4 = (t_FmPcdCcNode *)VAR_2;
    t_FmPcdCcNode *VAR_5;

    FUNC_0(VAR_4, VAR_0);


    VAR_5 =
            VAR_4->keyAndNextEngineParams[0].nextEngineParams.params.ccParams.h_CcNode;

    FUNC_1(VAR_3,
           &VAR_5->keyAndNextEngineParams[VAR_5->numOfKeys].nextEngineParams,
           sizeof(t_FmPcdCcNextEngineParams));

    return VAR_1;
}
