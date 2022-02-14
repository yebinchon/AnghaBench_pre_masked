
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {int majorRev; } ;
struct TYPE_7__ {int macId; int h_Fm; TYPE_1__ fmRevInfo; } ;
struct TYPE_8__ {int h_App; int (* f_Exception ) (int ,int ) ;TYPE_2__ fmMacControllerDriver; struct dtsec_regs* p_MemMap; } ;
typedef TYPE_3__ t_Dtsec ;
struct dtsec_regs {int tpkt; int rctrl; int ievent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_18 ;
 scalar_t__ FUNC_5 (int,int) ;
 int VAR_19 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_9 (struct dtsec_regs*,int) ;
 int FUNC_10 (struct dtsec_regs*,int) ;
 int FUNC_11 (struct dtsec_regs*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;

__attribute__((used)) static void FUNC_25(t_Handle VAR_34)
{
    t_Dtsec *VAR_35 = (t_Dtsec *)VAR_34;
    uint32_t VAR_36;
    struct dtsec_regs *VAR_37 = VAR_35->p_MemMap;


    VAR_36 = FUNC_10(VAR_37, (uint32_t)(~(VAR_9 | VAR_10)));

    VAR_36 &= FUNC_11(VAR_37);

    FUNC_9(VAR_37, VAR_36);

    if (VAR_36 & VAR_1)
        VAR_35->f_Exception(VAR_35->h_App, VAR_21);
    if (VAR_36 & VAR_13)
        VAR_35->f_Exception(VAR_35->h_App, VAR_28);
    if (VAR_36 & VAR_11)
        FUNC_6(VAR_35);
    if (VAR_36 & VAR_5)
        VAR_35->f_Exception(VAR_35->h_App, VAR_25);
    if (VAR_36 & VAR_2)
        VAR_35->f_Exception(VAR_35->h_App, VAR_22);
    if (VAR_36 & VAR_15)
        VAR_35->f_Exception(VAR_35->h_App, VAR_30);
    if (VAR_36 & VAR_16)
        VAR_35->f_Exception(VAR_35->h_App, VAR_32);
    if (VAR_36 & VAR_7)
        VAR_35->f_Exception(VAR_35->h_App, VAR_26);
    if (VAR_36 & VAR_3)
        VAR_35->f_Exception(VAR_35->h_App, VAR_23);
    if (VAR_36 & VAR_17)
    {
        VAR_35->f_Exception(VAR_35->h_App, VAR_33);
    }
    if (VAR_36 & VAR_8)
        VAR_35->f_Exception(VAR_35->h_App, VAR_27);
    if (VAR_36 & VAR_4)
        VAR_35->f_Exception(VAR_35->h_App, VAR_24);
    if (VAR_36 & VAR_14)
        VAR_35->f_Exception(VAR_35->h_App, VAR_31);
    if (VAR_36 & VAR_12)
        VAR_35->f_Exception(VAR_35->h_App, VAR_29);


    FUNC_0(!(VAR_36 & VAR_0));
    FUNC_0(!(VAR_36 & VAR_6));
}
