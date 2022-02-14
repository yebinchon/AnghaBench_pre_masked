
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef TYPE_6__* t_Handle ;
struct TYPE_26__ {scalar_t__ h_Scheme; scalar_t__ relativeSchemeId; } ;
struct TYPE_27__ {TYPE_4__ capwap; } ;
struct TYPE_28__ {TYPE_5__ reassmParams; } ;
typedef TYPE_6__ t_FmPcdManip ;
struct TYPE_25__ {void* update; } ;
struct TYPE_24__ {scalar_t__ relativeSchemeId; } ;
struct TYPE_23__ {TYPE_6__* h_NetEnv; } ;
struct TYPE_29__ {void* bypassFqidGeneration; TYPE_3__ schemeCounter; TYPE_2__ id; TYPE_1__ netEnvParams; } ;
typedef TYPE_8__ t_FmPcdKgSchemeParams ;
typedef TYPE_6__ t_FmPcd ;
typedef int t_Error ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_8__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,char*) ;
 void* VAR_3 ;
 int FUNC_3 (TYPE_8__*) ;
 TYPE_8__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_8__*,int ,int) ;
 int FUNC_6 (TYPE_6__*,TYPE_8__*,TYPE_6__*,scalar_t__) ;

t_Error FUNC_7(t_FmPcd *VAR_4, t_Handle VAR_5,
                                          t_Handle VAR_6, t_Handle VAR_7,
                                          uint8_t VAR_8)
{
    t_FmPcdManip *VAR_9 = (t_FmPcdManip *)VAR_7;
    t_FmPcdKgSchemeParams *VAR_10 = ((void*)0);

    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    FUNC_0(VAR_9);


    if (VAR_9->reassmParams.capwap.h_Scheme)
        return VAR_1;

    VAR_10 = FUNC_4(sizeof(t_FmPcdKgSchemeParams));
    if (!VAR_10)
        FUNC_2(VAR_2, VAR_0,
                     ("Memory allocation failed for scheme"));

    FUNC_5(VAR_10, 0, sizeof(t_FmPcdKgSchemeParams));
    VAR_10->netEnvParams.h_NetEnv = VAR_5;
    VAR_10->id.relativeSchemeId =
            (uint8_t)VAR_9->reassmParams.capwap.relativeSchemeId;
    VAR_10->schemeCounter.update = VAR_3;
    VAR_10->bypassFqidGeneration = VAR_3;

    FUNC_6(VAR_4, VAR_10, VAR_6, VAR_8);

    VAR_9->reassmParams.capwap.h_Scheme = FUNC_1(VAR_4,
                                                               VAR_10);

    FUNC_3(VAR_10);

    return VAR_1;
}
