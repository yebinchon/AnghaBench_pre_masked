
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int majorRev; int minorRev; } ;
struct TYPE_7__ {struct memac_cfg* h_Fm; int macId; TYPE_6__ fmRevInfo; } ;
struct memac_cfg {int macId; struct memac_cfg* p_MemacDriverParam; TYPE_1__ fmMacControllerDriver; void* p_UnicastAddrHash; void* p_MulticastAddrHash; int max_frame_length; TYPE_2__* p_MemMap; int exceptions; int enetMode; int addr; scalar_t__ reset_on_init; } ;
typedef struct memac_cfg t_Memac ;
typedef scalar_t__ t_Handle ;
typedef scalar_t__ t_Error ;
typedef scalar_t__ t_EnetAddr ;
typedef enum enet_speed { ____Placeholder_enet_speed } enet_speed ;
typedef enum enet_interface { ____Placeholder_enet_interface } enet_interface ;
typedef scalar_t__ e_FmMacType ;
struct TYPE_8__ {int command_config; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct memac_cfg*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct memac_cfg*,TYPE_6__*) ;
 int FUNC_5 (struct memac_cfg*,int ,int,int ,int ,struct memac_cfg*) ;
 scalar_t__ FUNC_6 (struct memac_cfg*,scalar_t__,int ,int ) ;
 int FUNC_7 (struct memac_cfg*) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,scalar_t__,char*) ;
 int FUNC_12 (struct memac_cfg*,int ) ;
 int VAR_11 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct memac_cfg*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_15 (TYPE_2__*,int *,int ) ;
 int FUNC_16 (TYPE_2__*,struct memac_cfg*,int,int,int,int ) ;
 int FUNC_17 (TYPE_2__*) ;
 TYPE_2__* VAR_19 ;

__attribute__((used)) static t_Error FUNC_18(t_Handle VAR_20)
{
    t_Memac *VAR_21 = (t_Memac *)VAR_20;
    struct memac_cfg *VAR_22;
    enum enet_interface VAR_23;
    enum enet_speed VAR_24;
    t_EnetAddr VAR_25;
    e_FmMacType VAR_26;
    t_Error VAR_27;
    bool VAR_28 = VAR_6;
    if (VAR_21->macId == 3)
  VAR_19 = VAR_21->p_MemMap;

    FUNC_12(VAR_21, VAR_2);
    FUNC_12(VAR_21->p_MemacDriverParam, VAR_3);
    FUNC_12(VAR_21->fmMacControllerDriver.h_Fm, VAR_2);

    FUNC_4(VAR_21->fmMacControllerDriver.h_Fm, &VAR_21->fmMacControllerDriver.fmRevInfo);
    if (VAR_21->fmMacControllerDriver.fmRevInfo.majorRev == 6 &&
        VAR_21->fmMacControllerDriver.fmRevInfo.minorRev == 4)
        VAR_28 = VAR_11;

    FUNC_1(VAR_21, VAR_1);

    VAR_22 = VAR_21->p_MemacDriverParam;

    VAR_26 =
        ((FUNC_3(VAR_21->enetMode) < VAR_12) ? VAR_16 : VAR_15);


    if (VAR_22->reset_on_init)
        FUNC_17(VAR_21->p_MemMap);


    FUNC_9(VAR_21->addr, VAR_25);
    FUNC_15(VAR_21->p_MemMap, (uint8_t*)VAR_25, 0);

    VAR_23 = (enum enet_interface) FUNC_2(VAR_21->enetMode);
    VAR_24 = (enum enet_speed) FUNC_3(VAR_21->enetMode);

    FUNC_16(VAR_21->p_MemMap,
               VAR_21->p_MemacDriverParam,
               VAR_23,
               VAR_24,
               VAR_28,
               VAR_21->exceptions);
    FUNC_10(VAR_20);


    VAR_27 = FUNC_6(VAR_21->fmMacControllerDriver.h_Fm,
                           VAR_26,
                           VAR_21->fmMacControllerDriver.macId,
                           VAR_22->max_frame_length);
    if (VAR_27)
        FUNC_11(VAR_8, VAR_27, ("settings Mac max frame length is FAILED"));

    VAR_21->p_MulticastAddrHash = FUNC_0(VAR_7);
    if (!VAR_21->p_MulticastAddrHash)
    {
        FUNC_7(VAR_21);
        FUNC_11(VAR_8, VAR_4, ("allocation hash table is FAILED"));
    }

    VAR_21->p_UnicastAddrHash = FUNC_0(VAR_7);
    if (!VAR_21->p_UnicastAddrHash)
    {
        FUNC_7(VAR_21);
        FUNC_11(VAR_8, VAR_4, ("allocation hash table is FAILED"));
    }

    FUNC_5(VAR_21->fmMacControllerDriver.h_Fm,
                   (VAR_26 == VAR_15) ? VAR_17 : VAR_18,
                   VAR_21->macId,
                   VAR_13,
                   VAR_9,
                   VAR_21);

    FUNC_5(VAR_21->fmMacControllerDriver.h_Fm,
                   (VAR_26 == VAR_15) ? VAR_17 : VAR_18,
                   VAR_21->macId,
                   VAR_14,
                   VAR_10,
                   VAR_21);

    FUNC_14(VAR_22);
    VAR_21->p_MemacDriverParam = ((void*)0);

    return VAR_5;
}
