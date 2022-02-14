
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fman_qmi_regs*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(t_Fm *VAR_4)
{
    uint32_t VAR_5;
    struct fman_qmi_regs *VAR_6 = VAR_4->p_FmQmiRegs;

    VAR_5 = FUNC_0(VAR_6);

    if (VAR_5 & VAR_1)
        VAR_4->f_Exception(VAR_4->h_App,VAR_3);
    if (VAR_5 & VAR_0)
        VAR_4->f_Exception(VAR_4->h_App,VAR_2);
}
