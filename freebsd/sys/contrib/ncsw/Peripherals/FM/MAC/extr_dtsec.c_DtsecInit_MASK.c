
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
typedef scalar_t__ t_Error ;
typedef scalar_t__ t_EnetAddr ;
struct TYPE_4__ {int minorRev; int majorRev; } ;
struct TYPE_3__ {struct dtsec_cfg* h_Fm; int macId; TYPE_2__ fmRevInfo; } ;
struct dtsec_cfg {int enetMode; scalar_t__ mdioIrq; struct dtsec_cfg* p_DtsecDriverParam; int macId; TYPE_1__ fmMacControllerDriver; void* p_UnicastAddrHash; void* p_MulticastAddrHash; int p_MemMap; scalar_t__ tbipa; int exceptions; int addr; int halfdup_on; int halfDuplex; } ;
typedef struct dtsec_cfg t_Dtsec ;
typedef enum enet_speed { ____Placeholder_enet_speed } enet_speed ;
typedef enum enet_interface { ____Placeholder_enet_interface } enet_interface ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct dtsec_cfg*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct dtsec_cfg*,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct dtsec_cfg*,TYPE_2__*) ;
 int FUNC_7 (struct dtsec_cfg*,int ,int ,int ,int ,struct dtsec_cfg*) ;
 scalar_t__ FUNC_8 (struct dtsec_cfg*,int ,int ,int) ;
 int FUNC_9 (struct dtsec_cfg*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int ,scalar_t__) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_11 (int ,scalar_t__,char*) ;
 int FUNC_12 (struct dtsec_cfg*,int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct dtsec_cfg*) ;
 int FUNC_15 (scalar_t__,int ,struct dtsec_cfg*) ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,struct dtsec_cfg*,int,int,int *,int ,int ,int ) ;

__attribute__((used)) static t_Error FUNC_18(t_Handle VAR_30)
{
    t_Dtsec *VAR_31 = (t_Dtsec *)VAR_30;
    struct dtsec_cfg *VAR_32;
    t_Error VAR_33;
    uint16_t VAR_34;
    enum enet_interface VAR_35;
    enum enet_speed VAR_36;
    t_EnetAddr VAR_37;

    FUNC_12(VAR_31, VAR_6);
    FUNC_12(VAR_31->p_DtsecDriverParam, VAR_7);
    FUNC_12(VAR_31->fmMacControllerDriver.h_Fm, VAR_6);

    FUNC_6(VAR_31->fmMacControllerDriver.h_Fm, &VAR_31->fmMacControllerDriver.fmRevInfo);
    FUNC_1(VAR_31, VAR_0);

    VAR_32 = VAR_31->p_DtsecDriverParam;
    VAR_31->halfDuplex = VAR_32->halfdup_on;

    VAR_35 = (enum enet_interface)FUNC_4(VAR_31->enetMode);
    VAR_36 = (enum enet_speed)FUNC_5(VAR_31->enetMode);
    FUNC_10(VAR_31->addr, VAR_37);

    VAR_33 = (t_Error)FUNC_17(VAR_31->p_MemMap,
                              VAR_32,
                              VAR_35,
                              VAR_36,
                              (uint8_t*)VAR_37,
                              VAR_31->fmMacControllerDriver.fmRevInfo.majorRev,
                              VAR_31->fmMacControllerDriver.fmRevInfo.minorRev,
                              VAR_31->exceptions);
    if (VAR_33)
    {
        FUNC_9(VAR_31);
        FUNC_11(VAR_11, VAR_33, ("This DTSEC version does not support the required i/f mode"));
    }

    if (FUNC_4(VAR_31->enetMode) == VAR_24)
    {
        uint16_t VAR_38;


        VAR_38 = VAR_22 | VAR_23;
        FUNC_2(VAR_31, (uint8_t)VAR_32->tbipa, 17, VAR_38);

        VAR_38 = VAR_22;
        FUNC_2(VAR_31, (uint8_t)VAR_32->tbipa, 17, VAR_38);

        VAR_38 = (VAR_17 | VAR_15 | VAR_16 | VAR_19);
        FUNC_2(VAR_31, (uint8_t)VAR_32->tbipa, 0, VAR_38);

        if (VAR_31->enetMode & VAR_4)
            VAR_38 = VAR_20;
        else
            VAR_38 = VAR_21;
        FUNC_2(VAR_31, (uint8_t)VAR_32->tbipa, 4, VAR_38);

        VAR_38 = (VAR_15 | VAR_18 | VAR_16 | VAR_19);

        FUNC_2(VAR_31, (uint8_t)VAR_32->tbipa, 0, VAR_38);
    }


    VAR_34 = FUNC_16(VAR_31->p_MemMap);
    VAR_33 = FUNC_8(VAR_31->fmMacControllerDriver.h_Fm, VAR_27,
            VAR_31->fmMacControllerDriver.macId, VAR_34);
    if (VAR_33)
        FUNC_11(VAR_12,VAR_33, VAR_14);

    VAR_31->p_MulticastAddrHash = FUNC_0(VAR_5);
    if (!VAR_31->p_MulticastAddrHash) {
        FUNC_9(VAR_31);
        FUNC_11(VAR_11, VAR_8, ("MC hash table is FAILED"));
    }

    VAR_31->p_UnicastAddrHash = FUNC_0(VAR_10);
    if (!VAR_31->p_UnicastAddrHash)
    {
        FUNC_9(VAR_31);
        FUNC_11(VAR_11, VAR_8, ("UC hash table is FAILED"));
    }


    FUNC_7(VAR_31->fmMacControllerDriver.h_Fm,
                   VAR_29,
                   VAR_31->macId,
                   VAR_25,
                   VAR_2,
                   VAR_31);

    FUNC_7(VAR_31->fmMacControllerDriver.h_Fm,
                   VAR_29,
                   VAR_31->macId,
                   VAR_26,
                   VAR_1,
                   VAR_31);

    if (VAR_31->mdioIrq != VAR_13)
    {
        FUNC_15(VAR_31->mdioIrq, VAR_3, VAR_31);
        FUNC_13(VAR_31->mdioIrq);
    }

    FUNC_14(VAR_32);
    VAR_31->p_DtsecDriverParam = ((void*)0);

    VAR_33 = FUNC_3(VAR_30, VAR_28);
    if (VAR_33)
    {
        FUNC_9(VAR_31);
        FUNC_11(VAR_11, VAR_33, ("Undefined statistics level"));
    }

    return VAR_9;
}
