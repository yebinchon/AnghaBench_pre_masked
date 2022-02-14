
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int majorRev; } ;
struct TYPE_3__ {struct tgec_cfg* h_Fm; TYPE_2__ fmRevInfo; int macId; } ;
struct tgec_cfg {int exceptions; scalar_t__ mdioIrq; struct tgec_cfg* p_TgecDriverParam; int macId; TYPE_1__ fmMacControllerDriver; void* p_UnicastAddrHash; void* p_MulticastAddrHash; int p_MemMap; int max_frame_length; int skip_fman11_workaround; int addr; } ;
typedef struct tgec_cfg t_Tgec ;
typedef scalar_t__ t_Handle ;
typedef scalar_t__ t_Error ;
typedef scalar_t__ t_EnetAddr ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct tgec_cfg*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct tgec_cfg*,TYPE_2__*) ;
 int FUNC_3 (struct tgec_cfg*,int ,int ,int ,int ,struct tgec_cfg*) ;
 scalar_t__ FUNC_4 (struct tgec_cfg*,int ,int ,int ) ;
 int FUNC_5 (struct tgec_cfg*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int FUNC_7 (int ,scalar_t__,char*) ;
 int FUNC_8 (int ,scalar_t__,char*) ;
 int FUNC_9 (struct tgec_cfg*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_10 (struct tgec_cfg*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct tgec_cfg*) ;
 int FUNC_13 (scalar_t__,int ,struct tgec_cfg*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_14 (int ,struct tgec_cfg*,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static t_Error FUNC_17(t_Handle VAR_17)
{
    t_Tgec *VAR_18 = (t_Tgec *)VAR_17;
    struct tgec_cfg *VAR_19;
    t_EnetAddr VAR_20;
    t_Error VAR_21;

    FUNC_9(VAR_18, VAR_1);
    FUNC_9(VAR_18->p_TgecDriverParam, VAR_2);
    FUNC_9(VAR_18->fmMacControllerDriver.h_Fm, VAR_1);

    FUNC_2(VAR_18->fmMacControllerDriver.h_Fm, &VAR_18->fmMacControllerDriver.fmRevInfo);
    FUNC_1(VAR_18, VAR_0);

    VAR_19 = VAR_18->p_TgecDriverParam;

    FUNC_6(VAR_18->addr, VAR_20);
    FUNC_16(VAR_18->p_MemMap, (uint8_t *)VAR_20);
    VAR_21 = FUNC_14(VAR_18->p_MemMap, VAR_19, VAR_18->exceptions);
    if (VAR_21)
    {
        FUNC_5(VAR_18);
        FUNC_8(VAR_6, VAR_21, ("This TGEC version does not support the required i/f mode"));
    }


    VAR_21 = FUNC_4(VAR_18->fmMacControllerDriver.h_Fm,
                           VAR_15,
                           VAR_18->fmMacControllerDriver.macId,
                           VAR_19->max_frame_length);
    if (VAR_21 != VAR_4)
    {
        FUNC_5(VAR_18);
        FUNC_8(VAR_7, VAR_21, VAR_9);
    }







    VAR_18->p_MulticastAddrHash = FUNC_0(VAR_5);
    if (!VAR_18->p_MulticastAddrHash)
    {
        FUNC_5(VAR_18);
        FUNC_8(VAR_6, VAR_3, ("allocation hash table is FAILED"));
    }

    VAR_18->p_UnicastAddrHash = FUNC_0(VAR_5);
    if (!VAR_18->p_UnicastAddrHash)
    {
        FUNC_5(VAR_18);
        FUNC_8(VAR_6, VAR_3, ("allocation hash table is FAILED"));
    }

    FUNC_3(VAR_18->fmMacControllerDriver.h_Fm,
                   VAR_16,
                   VAR_18->macId,
                   VAR_14,
                   VAR_12,
                   VAR_18);
    if (VAR_18->mdioIrq != VAR_8)
    {
        FUNC_13(VAR_18->mdioIrq, VAR_13, VAR_18);
        FUNC_11(VAR_18->mdioIrq);
    }

    FUNC_12(VAR_19);
    VAR_18->p_TgecDriverParam = ((void*)0);

    return VAR_4;
}
