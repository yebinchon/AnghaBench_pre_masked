
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef struct dtsec_cfg* t_Handle ;
struct TYPE_4__ {uintptr_t baseAddr; int h_App; int f_Event; int f_Exception; int mdioIrq; int macId; int enetMode; int addr; } ;
typedef TYPE_1__ t_FmMacParams ;
struct dtsec_cfg {int tbi_phy_addr; struct dtsec_cfg* p_DtsecDriverParam; int ptp_exception_en; int enTsuErrExeption; int ptp_tsu_en; int ptpTsuEnabled; int h_App; int f_Event; int f_Exception; int mdioIrq; int exceptions; int macId; int enetMode; int addr; struct dtsec_mii_reg* p_MiiMemMap; struct dtsec_regs* p_MemMap; int fmMacControllerDriver; } ;
typedef struct dtsec_cfg t_Dtsec ;
struct dtsec_regs {int dummy; } ;
struct dtsec_mii_reg {int dummy; } ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_4 (uintptr_t) ;
 int FUNC_5 (struct dtsec_cfg*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct dtsec_cfg*) ;
 int FUNC_8 (struct dtsec_cfg*,int ,int) ;

t_Handle FUNC_9(t_FmMacParams *VAR_5)
{
    t_Dtsec *VAR_6;
    struct dtsec_cfg *VAR_7;
    uintptr_t VAR_8;

    FUNC_3(VAR_5, VAR_3, ((void*)0));

    VAR_8 = VAR_5->baseAddr;


    VAR_6 = (t_Dtsec *)FUNC_6(sizeof(t_Dtsec));
    if (!VAR_6)
    {
        FUNC_2(VAR_4, VAR_2, ("dTSEC driver structure"));
        return ((void*)0);
    }
    FUNC_8(VAR_6, 0, sizeof(t_Dtsec));
    FUNC_1(&VAR_6->fmMacControllerDriver);


    VAR_7 = (struct dtsec_cfg *) FUNC_6(sizeof(struct dtsec_cfg));
    if (!VAR_7)
    {
        FUNC_5(VAR_6);
        FUNC_2(VAR_4, VAR_2, ("dTSEC driver parameters"));
        return ((void*)0);
    }
    FUNC_8(VAR_7, 0, sizeof(struct dtsec_cfg));


    VAR_6->p_DtsecDriverParam = VAR_7;

    FUNC_7(VAR_7);

    VAR_6->p_MemMap = (struct dtsec_regs *)FUNC_4(VAR_8);
    VAR_6->p_MiiMemMap = (struct dtsec_mii_reg *)FUNC_4(VAR_8 + VAR_1);
    VAR_6->addr = FUNC_0(VAR_5->addr);
    VAR_6->enetMode = VAR_5->enetMode;
    VAR_6->macId = VAR_5->macId;
    VAR_6->exceptions = VAR_0;
    VAR_6->mdioIrq = VAR_5->mdioIrq;
    VAR_6->f_Exception = VAR_5->f_Exception;
    VAR_6->f_Event = VAR_5->f_Event;
    VAR_6->h_App = VAR_5->h_App;
    VAR_6->ptpTsuEnabled = VAR_6->p_DtsecDriverParam->ptp_tsu_en;
    VAR_6->enTsuErrExeption = VAR_6->p_DtsecDriverParam->ptp_exception_en;
    VAR_6->tbi_phy_addr = VAR_6->p_DtsecDriverParam->tbi_phy_addr;

    return VAR_6;
}
