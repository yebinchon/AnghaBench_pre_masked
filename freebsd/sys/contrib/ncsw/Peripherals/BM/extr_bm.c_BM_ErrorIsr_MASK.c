
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {scalar_t__ guestId; int h_App; int (* f_Exception ) (int ,int ) ;TYPE_1__* p_BmRegs; } ;
typedef TYPE_2__ t_Bm ;
struct TYPE_4__ {int err_isr; int err_ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(t_Handle VAR_12)
{
    t_Bm *VAR_13 = (t_Bm *)VAR_12;
    uint32_t VAR_14;

    FUNC_2(VAR_13, VAR_4);

    if (VAR_13->guestId != VAR_6)
    {
        FUNC_1(VAR_7, VAR_5, ("Master Only"));
        return;
    }

    VAR_14 = FUNC_0(VAR_13->p_BmRegs->err_isr);
    VAR_14 &= FUNC_0(VAR_13->p_BmRegs->err_ier);
    FUNC_3(VAR_13->p_BmRegs->err_isr, VAR_14);

    if (VAR_14 & VAR_1)
        VAR_13->f_Exception(VAR_13->h_App, VAR_9);
    if (VAR_14 & VAR_0)
        VAR_13->f_Exception(VAR_13->h_App, VAR_8);
    if (VAR_14 & VAR_2)
        VAR_13->f_Exception(VAR_13->h_App, VAR_10);
    if (VAR_14 & VAR_3)
        VAR_13->f_Exception(VAR_13->h_App, VAR_11);
}
