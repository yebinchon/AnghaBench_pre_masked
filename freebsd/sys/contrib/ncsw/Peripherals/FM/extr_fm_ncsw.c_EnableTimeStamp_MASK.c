
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_FmStateStruct; struct fman_fpm_regs* p_FmFpmRegs; } ;
typedef TYPE_1__ t_Fm ;
struct fman_fpm_regs {int dummy; } ;
struct TYPE_6__ {int enabledTimeStamp; int fmClkFreq; struct TYPE_6__* count1MicroBit; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (struct fman_fpm_regs*,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(t_Fm *VAR_1)
{
    struct fman_fpm_regs *VAR_2 = VAR_1->p_FmFpmRegs;

    FUNC_0(VAR_1->p_FmStateStruct);
    FUNC_0(VAR_1->p_FmStateStruct->count1MicroBit);

    FUNC_1(VAR_2, VAR_1->p_FmStateStruct->count1MicroBit, VAR_1->p_FmStateStruct->fmClkFreq);

    VAR_1->p_FmStateStruct->enabledTimeStamp = VAR_0;
}
