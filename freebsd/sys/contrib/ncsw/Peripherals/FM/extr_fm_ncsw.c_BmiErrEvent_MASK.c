
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int h_App; int (* f_Exception ) (int ,int ) ;struct fman_bmi_regs* p_FmBmiRegs; } ;
typedef TYPE_1__ t_Fm ;
struct fman_bmi_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fman_bmi_regs*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(t_Fm *VAR_8)
{
    uint32_t VAR_9;
    struct fman_bmi_regs *VAR_10 = VAR_8->p_FmBmiRegs;


    VAR_9 = FUNC_0(VAR_10);

    if (VAR_9 & VAR_3)
        VAR_8->f_Exception(VAR_8->h_App,VAR_7);
    if (VAR_9 & VAR_1)
        VAR_8->f_Exception(VAR_8->h_App,VAR_5);
    if (VAR_9 & VAR_2)
        VAR_8->f_Exception(VAR_8->h_App,VAR_6);
    if (VAR_9 & VAR_0)
        VAR_8->f_Exception(VAR_8->h_App,VAR_4);
}
