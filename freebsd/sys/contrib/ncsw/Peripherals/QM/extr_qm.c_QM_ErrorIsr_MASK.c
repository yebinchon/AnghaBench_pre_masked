
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ guestId; int h_App; int (* f_Exception ) (int ,int ) ;TYPE_1__* p_QmRegs; } ;
typedef TYPE_2__ t_Qm ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {int err_isr; int err_ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
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
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_19 ;
 int FUNC_3 (int ,int) ;
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
 int VAR_34 ;
 int VAR_35 ;
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
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;

void FUNC_20(t_Handle VAR_36)
{
    t_Qm *VAR_37 = (t_Qm *)VAR_36;
    uint32_t VAR_38;

    FUNC_2(VAR_37, VAR_0);

    if (VAR_37->guestId != VAR_2)
    {
        FUNC_1(VAR_19, VAR_1, ("Master Only"));
        return;
    }

    VAR_38 = FUNC_0(VAR_37->p_QmRegs->err_isr);
    VAR_38 &= FUNC_0(VAR_37->p_QmRegs->err_ier);
    FUNC_3(VAR_37->p_QmRegs->err_isr, VAR_38);

    if (VAR_38 & VAR_3)
        VAR_37->f_Exception(VAR_37->h_App, VAR_20);
    if (VAR_38 & VAR_5)
        VAR_37->f_Exception(VAR_37->h_App, VAR_22);
    if (VAR_38 & VAR_4)
        VAR_37->f_Exception(VAR_37->h_App, VAR_21);
    if (VAR_38 & VAR_17)
        VAR_37->f_Exception(VAR_37->h_App, VAR_34);
    if (VAR_38 & VAR_15)
        VAR_37->f_Exception(VAR_37->h_App, VAR_32);
    if (VAR_38 & VAR_18)
        VAR_37->f_Exception(VAR_37->h_App, VAR_35);
    if (VAR_38 & VAR_16)
        VAR_37->f_Exception(VAR_37->h_App, VAR_33);
    if (VAR_38 & VAR_14)
        VAR_37->f_Exception(VAR_37->h_App, VAR_31);
    if (VAR_38 & VAR_6)
        VAR_37->f_Exception(VAR_37->h_App, VAR_23);
    if (VAR_38 & VAR_7)
        VAR_37->f_Exception(VAR_37->h_App, VAR_24);
    if (VAR_38 & VAR_9)
        VAR_37->f_Exception(VAR_37->h_App, VAR_26);
    if (VAR_38 & VAR_8)
        VAR_37->f_Exception(VAR_37->h_App, VAR_25);
    if (VAR_38 & VAR_11)
        VAR_37->f_Exception(VAR_37->h_App, VAR_28);
    if (VAR_38 & VAR_13)
        VAR_37->f_Exception(VAR_37->h_App, VAR_30);
    if (VAR_38 & VAR_10)
        VAR_37->f_Exception(VAR_37->h_App, VAR_27);
    if (VAR_38 & VAR_12)
        VAR_37->f_Exception(VAR_37->h_App, VAR_29);
}
