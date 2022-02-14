
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int h_App; int (* f_Exception ) (int ,int ) ;struct fman_fpm_regs* p_FmFpmRegs; } ;
typedef TYPE_1__ t_Fm ;
struct fman_fpm_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fman_fpm_regs*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(t_Fm *VAR_9)
{
    uint32_t VAR_10;
    struct fman_fpm_regs *VAR_11 = VAR_9->p_FmFpmRegs;

    VAR_10 = FUNC_0(VAR_11);

    if ((VAR_10 & VAR_0) && (VAR_10 & VAR_1))
        VAR_9->f_Exception(VAR_9->h_App,VAR_6);
    if ((VAR_10 & VAR_4) && (VAR_10 & VAR_5))
        VAR_9->f_Exception(VAR_9->h_App,VAR_8);
    if ((VAR_10 & VAR_2) && (VAR_10 & VAR_3))
        VAR_9->f_Exception(VAR_9->h_App,VAR_7);
}
