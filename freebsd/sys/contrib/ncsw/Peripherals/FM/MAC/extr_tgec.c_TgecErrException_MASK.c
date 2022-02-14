
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int h_App; int (* f_Exception ) (int ,int ) ;struct tgec_regs* p_MemMap; } ;
typedef TYPE_1__ t_Tgec ;
typedef scalar_t__ t_Handle ;
struct tgec_regs {int dummy; } ;


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
 int VAR_18 ;
 int VAR_19 ;
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
 int FUNC_0 (struct tgec_regs*,int) ;
 int FUNC_1 (struct tgec_regs*,int) ;
 int FUNC_2 (struct tgec_regs*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static void FUNC_18(t_Handle VAR_32)
{
    t_Tgec *VAR_33 = (t_Tgec *)VAR_32;
    uint32_t VAR_34;
    struct tgec_regs *VAR_35 = VAR_33->p_MemMap;


    VAR_34 = FUNC_1(VAR_35, ~(VAR_2 | VAR_1));
    VAR_34 &= FUNC_2(VAR_35);

    FUNC_0(VAR_35, VAR_34);

    if (VAR_34 & VAR_3)
        VAR_33->f_Exception(VAR_33->h_App, VAR_19);
    if (VAR_34 & VAR_0)
        VAR_33->f_Exception(VAR_33->h_App, VAR_18);
    if (VAR_34 & VAR_13)
        VAR_33->f_Exception(VAR_33->h_App, VAR_17);
    if (VAR_34 & VAR_16)
        VAR_33->f_Exception(VAR_33->h_App, VAR_31);
    if (VAR_34 & VAR_15)
        VAR_33->f_Exception(VAR_33->h_App, VAR_30);
    if (VAR_34 & VAR_14)
        VAR_33->f_Exception(VAR_33->h_App, VAR_29);
    if (VAR_34 & VAR_7)
        VAR_33->f_Exception(VAR_33->h_App, VAR_23);
    if (VAR_34 & VAR_6)
        VAR_33->f_Exception(VAR_33->h_App, VAR_22);
    if (VAR_34 & VAR_9)
        VAR_33->f_Exception(VAR_33->h_App, VAR_25);
    if (VAR_34 & VAR_11)
        VAR_33->f_Exception(VAR_33->h_App, VAR_27);
    if (VAR_34 & VAR_12)
        VAR_33->f_Exception(VAR_33->h_App, VAR_28);
    if (VAR_34 & VAR_8)
        VAR_33->f_Exception(VAR_33->h_App, VAR_24);
    if (VAR_34 & VAR_10)
        VAR_33->f_Exception(VAR_33->h_App, VAR_26);
    if (VAR_34 & VAR_5)
        VAR_33->f_Exception(VAR_33->h_App, VAR_21);
    if (VAR_34 & VAR_4)
        VAR_33->f_Exception(VAR_33->h_App, VAR_20);
}
