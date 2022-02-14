
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int h_App; int (* f_Exception ) (int ,int ) ;struct fman_qmi_regs* p_FmQmiRegs; } ;
typedef TYPE_1__ t_Fm ;
struct fman_qmi_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fman_qmi_regs*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(t_Fm *VAR_2)
{
    uint32_t VAR_3;
    struct fman_qmi_regs *VAR_4 = VAR_2->p_FmQmiRegs;

    VAR_3 = FUNC_0(VAR_4);

    if (VAR_3 & VAR_0)
        VAR_2->f_Exception(VAR_2->h_App,VAR_1);
}
