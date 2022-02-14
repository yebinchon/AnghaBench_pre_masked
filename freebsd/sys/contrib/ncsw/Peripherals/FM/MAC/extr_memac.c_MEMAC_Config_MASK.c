
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct memac_cfg {int h_App; int f_Event; int f_Exception; int exceptions; int macId; int enetMode; struct memac_mii_access_mem_map* p_MiiMemMap; struct memac_regs* p_MemMap; int addr; struct memac_cfg* p_MemacDriverParam; int fmMacControllerDriver; } ;
typedef struct memac_cfg t_Memac ;
typedef struct memac_cfg* t_Handle ;
struct TYPE_4__ {uintptr_t baseAddr; int h_App; int f_Event; int f_Exception; int macId; int enetMode; int addr; } ;
typedef TYPE_1__ t_FmMacParams ;
struct memac_regs {int dummy; } ;
struct memac_mii_access_mem_map {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_4 (uintptr_t) ;
 int FUNC_5 (struct memac_cfg*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct memac_cfg*) ;
 int FUNC_8 (struct memac_cfg*,int ,int) ;

t_Handle FUNC_9(t_FmMacParams *VAR_5)
{
    t_Memac *VAR_6;
    struct memac_cfg *VAR_7;
    uintptr_t VAR_8;

    FUNC_3(VAR_5, VAR_1, ((void*)0));

    VAR_8 = VAR_5->baseAddr;

    VAR_6 = (t_Memac *)FUNC_6(sizeof(t_Memac));
    if (!VAR_6)
    {
        FUNC_2(VAR_2, VAR_0, ("mEMAC driver structure"));
        return ((void*)0);
    }
    FUNC_8(VAR_6, 0, sizeof(t_Memac));
    FUNC_1(&VAR_6->fmMacControllerDriver);


    VAR_7 = (struct memac_cfg *)FUNC_6(sizeof(struct memac_cfg));
    if (!VAR_7)
    {
        FUNC_2(VAR_2, VAR_0, ("mEMAC driver parameters"));
        FUNC_5(VAR_6);
        return ((void*)0);
    }
    FUNC_8(VAR_7, 0, sizeof(struct memac_cfg));


    VAR_6->p_MemacDriverParam = VAR_7;

    FUNC_7(VAR_7);

    VAR_6->addr = FUNC_0(VAR_5->addr);

    VAR_6->p_MemMap = (struct memac_regs *)FUNC_4(VAR_8);
    VAR_6->p_MiiMemMap = (struct memac_mii_access_mem_map*)FUNC_4(VAR_8 + VAR_3);

    VAR_6->enetMode = VAR_5->enetMode;
    VAR_6->macId = VAR_5->macId;
    VAR_6->exceptions = VAR_4;
    VAR_6->f_Exception = VAR_5->f_Exception;
    VAR_6->f_Event = VAR_5->f_Event;
    VAR_6->h_App = VAR_5->h_App;

    return VAR_6;
}
