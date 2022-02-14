
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int t_TgecMiiAccessMemMap ;
struct tgec_cfg {int h_App; int f_Event; int f_Exception; int mdioIrq; int exceptions; int macId; int enetMode; int addr; int * p_MiiMemMap; struct tgec_regs* p_MemMap; struct tgec_cfg* p_TgecDriverParam; int fmMacControllerDriver; } ;
typedef struct tgec_cfg t_Tgec ;
typedef struct tgec_cfg* t_Handle ;
struct TYPE_4__ {uintptr_t baseAddr; int h_App; int f_Event; int f_Exception; int mdioIrq; int macId; int enetMode; int addr; } ;
typedef TYPE_1__ t_FmMacParams ;
struct tgec_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 uintptr_t VAR_4 ;
 scalar_t__ FUNC_4 (uintptr_t) ;
 int FUNC_5 (struct tgec_cfg*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct tgec_cfg*) ;
 int FUNC_8 (struct tgec_cfg*,int ,int) ;

t_Handle FUNC_9(t_FmMacParams *VAR_5)
{
    t_Tgec *VAR_6;
    struct tgec_cfg *VAR_7;
    uintptr_t VAR_8;

    FUNC_3(VAR_5, VAR_2, ((void*)0));

    VAR_8 = VAR_5->baseAddr;

    VAR_6 = (t_Tgec *)FUNC_6(sizeof(t_Tgec));
    if (!VAR_6)
    {
        FUNC_2(VAR_3, VAR_1, ("10G MAC driver structure"));
        return ((void*)0);
    }
    FUNC_8(VAR_6, 0, sizeof(t_Tgec));
    FUNC_1(&VAR_6->fmMacControllerDriver);


    VAR_7 = (struct tgec_cfg *) FUNC_6(sizeof(struct tgec_cfg));
    if (!VAR_7)
    {
        FUNC_2(VAR_3, VAR_1, ("10G MAC driver parameters"));
        FUNC_5(VAR_6);
        return ((void*)0);
    }
    FUNC_8(VAR_7, 0, sizeof(struct tgec_cfg));


    VAR_6->p_TgecDriverParam = VAR_7;

    FUNC_7(VAR_7);

    VAR_6->p_MemMap = (struct tgec_regs *)FUNC_4(VAR_8);
    VAR_6->p_MiiMemMap = (t_TgecMiiAccessMemMap *)FUNC_4(VAR_8 + VAR_4);
    VAR_6->addr = FUNC_0(VAR_5->addr);
    VAR_6->enetMode = VAR_5->enetMode;
    VAR_6->macId = VAR_5->macId;
    VAR_6->exceptions = VAR_0;
    VAR_6->mdioIrq = VAR_5->mdioIrq;
    VAR_6->f_Exception = VAR_5->f_Exception;
    VAR_6->f_Event = VAR_5->f_Event;
    VAR_6->h_App = VAR_5->h_App;

    return VAR_6;
}
