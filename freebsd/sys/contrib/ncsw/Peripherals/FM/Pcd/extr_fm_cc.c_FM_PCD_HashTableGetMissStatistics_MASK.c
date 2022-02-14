
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_14__ {TYPE_4__* keyAndNextEngineParams; int statsEnForMiss; } ;
typedef TYPE_5__ t_FmPcdCcNode ;
typedef TYPE_5__ t_FmPcdCcKeyStatistics ;
typedef int t_Error ;
struct TYPE_10__ {scalar_t__ h_CcNode; } ;
struct TYPE_11__ {TYPE_1__ ccParams; } ;
struct TYPE_12__ {TYPE_2__ params; } ;
struct TYPE_13__ {TYPE_3__ nextEngineParams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_5__*,int ) ;

t_Error FUNC_3(
        t_Handle VAR_4, t_FmPcdCcKeyStatistics *VAR_5)
{
    t_FmPcdCcNode *VAR_6 = (t_FmPcdCcNode *)VAR_4;
    t_Handle VAR_7;

    FUNC_2(VAR_6, VAR_0);
    FUNC_2(VAR_5, VAR_2);

    if (!VAR_6->statsEnForMiss)
        FUNC_1(VAR_3, VAR_1,
                     ("Statistics were not enabled for miss"));

    VAR_7 =
            VAR_6->keyAndNextEngineParams[0].nextEngineParams.params.ccParams.h_CcNode;

    return FUNC_0(VAR_7, VAR_5);
}
