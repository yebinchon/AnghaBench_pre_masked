
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef TYPE_7__* t_Handle ;
struct TYPE_30__ {TYPE_7__* h_Ipv6Scheme; TYPE_7__* h_Ipv4Scheme; scalar_t__* relativeSchemeId; } ;
struct TYPE_31__ {TYPE_5__ ip; } ;
struct TYPE_32__ {TYPE_6__ reassmParams; } ;
typedef TYPE_7__ t_FmPcdManip ;
struct TYPE_29__ {int hashDistributionNumOfFqids; } ;
struct TYPE_28__ {int update; } ;
struct TYPE_27__ {scalar_t__ relativeSchemeId; } ;
struct TYPE_26__ {TYPE_7__* h_NetEnv; } ;
struct TYPE_33__ {int alwaysDirect; int bypassFqidGeneration; int baseFqid; TYPE_4__ keyExtractAndHashParams; TYPE_3__ schemeCounter; TYPE_2__ id; TYPE_1__ netEnvParams; } ;
typedef TYPE_9__ t_FmPcdKgSchemeParams ;
typedef TYPE_7__ t_FmPcd ;
typedef int t_Error ;


 int FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (TYPE_7__*,TYPE_9__*) ;
 TYPE_7__* FUNC_2 (TYPE_7__*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_9__*) ;
 TYPE_9__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_9__*,int ,int) ;
 int FUNC_7 (TYPE_7__*,TYPE_9__*,TYPE_7__*,int,scalar_t__) ;

t_Error FUNC_8(t_FmPcd *VAR_4, t_Handle VAR_5,
                                      t_Handle VAR_6, t_Handle VAR_7,
                                      bool VAR_8, uint8_t VAR_9)
{
    t_FmPcdManip *VAR_10 = (t_FmPcdManip *)VAR_7;
    t_FmPcdKgSchemeParams *VAR_11 = ((void*)0);
    t_Handle VAR_12;

    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    FUNC_0(VAR_10);


    if (VAR_10->reassmParams.ip.h_Ipv4Scheme)
        return VAR_1;

    if (VAR_8) {
        VAR_12 = FUNC_2(VAR_4, VAR_10->reassmParams.ip.relativeSchemeId[0]);
        if (VAR_12) {

            VAR_10->reassmParams.ip.h_Ipv4Scheme = VAR_12;
            return VAR_1;
        }
    } else {
        VAR_12 = FUNC_2(VAR_4, VAR_10->reassmParams.ip.relativeSchemeId[1]);
        if (VAR_12) {

            VAR_10->reassmParams.ip.h_Ipv6Scheme = VAR_12;
            return VAR_1;
        }
    }

     VAR_11 = FUNC_5(sizeof(t_FmPcdKgSchemeParams));
    if (!VAR_11)
        FUNC_3(VAR_2, VAR_0,
                     ("Memory allocation failed for scheme"));


    FUNC_6(VAR_11, 0, sizeof(t_FmPcdKgSchemeParams));
    VAR_11->netEnvParams.h_NetEnv = VAR_5;
    VAR_11->id.relativeSchemeId = (uint8_t)(
            (VAR_8 == VAR_3) ? VAR_10->reassmParams.ip.relativeSchemeId[0] :
                    VAR_10->reassmParams.ip.relativeSchemeId[1]);
    VAR_11->schemeCounter.update = VAR_3;




    VAR_11->keyExtractAndHashParams.hashDistributionNumOfFqids = 1;
    VAR_11->baseFqid = 0xFFFFFF;


    FUNC_7(VAR_4, VAR_11, VAR_6, VAR_8, VAR_9);


    if (VAR_8)
        VAR_10->reassmParams.ip.h_Ipv4Scheme = FUNC_1(
                VAR_4, VAR_11);
    else
        VAR_10->reassmParams.ip.h_Ipv6Scheme = FUNC_1(
                VAR_4, VAR_11);

    FUNC_4(VAR_11);

    return VAR_1;
}
