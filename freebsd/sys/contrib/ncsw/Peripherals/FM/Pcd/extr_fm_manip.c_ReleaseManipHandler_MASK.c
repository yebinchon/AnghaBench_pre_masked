
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int t_Handle ;
struct TYPE_12__ {int * h_Ipv4Ad; int * h_Ipv6Ad; int * p_Ipv6ReassTbl; int * p_Ipv4ReassTbl; scalar_t__ ipv6AutoLearnSetLockTblAddr; scalar_t__ ipv4AutoLearnSetLockTblAddr; scalar_t__ ipv6AutoLearnHashTblAddr; scalar_t__ ipv4AutoLearnHashTblAddr; } ;
struct TYPE_13__ {scalar_t__ hdr; TYPE_3__ ip; scalar_t__ internalBufferPoolAddr; scalar_t__ internalBufferPoolManagementIndexAddr; scalar_t__ reassFrmDescrIndxPoolTblAddr; int * p_ReassCommonTbl; scalar_t__ reassFrmDescrPoolTblAddr; scalar_t__ timeOutTblAddr; } ;
struct TYPE_11__ {int * p_Frag; int scratchBpid; } ;
struct TYPE_10__ {int * p_TimeOutTbl; int * p_ReassmFrmDescrIndxPoolTbl; int * p_ReassmFrmDescrPoolTbl; int * p_AutoLearnHashTbl; } ;
struct TYPE_14__ {int * p_StatsTbl; TYPE_4__ reassmParams; scalar_t__ reassm; TYPE_2__ fragParams; scalar_t__ frag; int * h_Frag; TYPE_1__ capwapFragParams; int * p_Template; int * h_Ad; scalar_t__ muramAllocate; } ;
typedef TYPE_5__ t_FmPcdManip ;
struct TYPE_15__ {int h_FmMuram; } ;
typedef TYPE_6__ t_FmPcd ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_6__*,int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(t_FmPcdManip *VAR_1, t_FmPcd *VAR_2)
{
    if (VAR_1->h_Ad)
    {
        if (VAR_1->muramAllocate)
            FUNC_0(VAR_2->h_FmMuram, VAR_1->h_Ad);
        else
            FUNC_4(VAR_1->h_Ad);
        VAR_1->h_Ad = ((void*)0);
    }
    if (VAR_1->p_Template)
    {
        FUNC_0(VAR_2->h_FmMuram, VAR_1->p_Template);
        VAR_1->p_Template = ((void*)0);
    }
    if (VAR_1->frag)
    {
        if (VAR_1->fragParams.p_Frag)
        {




            FUNC_0(VAR_2->h_FmMuram, VAR_1->fragParams.p_Frag);
        }
    }
    else
        if (VAR_1->reassm)
        {
            FUNC_2(VAR_2,
                                      VAR_1->reassmParams.p_ReassCommonTbl);

            if (VAR_1->reassmParams.timeOutTblAddr)
                FUNC_0(
                        VAR_2->h_FmMuram,
                        FUNC_3(VAR_1->reassmParams.timeOutTblAddr));
            if (VAR_1->reassmParams.reassFrmDescrPoolTblAddr)
                FUNC_5(
                        FUNC_3(VAR_1->reassmParams.reassFrmDescrPoolTblAddr));
            if (VAR_1->reassmParams.p_ReassCommonTbl)
                FUNC_0(VAR_2->h_FmMuram,
                                 VAR_1->reassmParams.p_ReassCommonTbl);
            if (VAR_1->reassmParams.reassFrmDescrIndxPoolTblAddr)
                FUNC_0(
                        VAR_2->h_FmMuram,
                        FUNC_3(VAR_1->reassmParams.reassFrmDescrIndxPoolTblAddr));
            if (VAR_1->reassmParams.internalBufferPoolManagementIndexAddr)
                FUNC_0(
                        VAR_2->h_FmMuram,
                        FUNC_3(VAR_1->reassmParams.internalBufferPoolManagementIndexAddr));
            if (VAR_1->reassmParams.internalBufferPoolAddr)
                FUNC_0(
                        VAR_2->h_FmMuram,
                        FUNC_3(VAR_1->reassmParams.internalBufferPoolAddr));
            if (VAR_1->reassmParams.hdr == VAR_0)
            {

            }
            else
            {
                if (VAR_1->reassmParams.ip.ipv4AutoLearnHashTblAddr)
                    FUNC_5(
                            FUNC_3(VAR_1->reassmParams.ip.ipv4AutoLearnHashTblAddr));
                if (VAR_1->reassmParams.ip.ipv6AutoLearnHashTblAddr)
                    FUNC_5(
                            FUNC_3(VAR_1->reassmParams.ip.ipv6AutoLearnHashTblAddr));
                if (VAR_1->reassmParams.ip.ipv4AutoLearnSetLockTblAddr)
                    FUNC_5(
                            FUNC_3(VAR_1->reassmParams.ip.ipv4AutoLearnSetLockTblAddr));
                if (VAR_1->reassmParams.ip.ipv6AutoLearnSetLockTblAddr)
                    FUNC_5(
                            FUNC_3(VAR_1->reassmParams.ip.ipv6AutoLearnSetLockTblAddr));
                if (VAR_1->reassmParams.ip.p_Ipv4ReassTbl)
                    FUNC_0(VAR_2->h_FmMuram,
                                     VAR_1->reassmParams.ip.p_Ipv4ReassTbl);
                if (VAR_1->reassmParams.ip.p_Ipv6ReassTbl)
                    FUNC_0(VAR_2->h_FmMuram,
                                     VAR_1->reassmParams.ip.p_Ipv6ReassTbl);
                if (VAR_1->reassmParams.ip.h_Ipv6Ad)
                    FUNC_5(VAR_1->reassmParams.ip.h_Ipv6Ad);
                if (VAR_1->reassmParams.ip.h_Ipv4Ad)
                    FUNC_5(VAR_1->reassmParams.ip.h_Ipv4Ad);
            }
        }

    if (VAR_1->p_StatsTbl)
        FUNC_0(VAR_2->h_FmMuram, VAR_1->p_StatsTbl);
}
