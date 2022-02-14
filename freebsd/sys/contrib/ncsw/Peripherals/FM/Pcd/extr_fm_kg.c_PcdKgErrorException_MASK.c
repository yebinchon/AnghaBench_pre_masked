
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {int h_App; int (* f_Exception ) (int ,int ) ;int (* f_FmPcdIndexedException ) (int ,int ,int ) ;TYPE_1__* p_FmPcdKg; int h_Fm; } ;
typedef TYPE_2__ t_FmPcd ;
struct fman_kg_regs {int dummy; } ;
struct TYPE_3__ {struct fman_kg_regs* p_FmPcdKgRegs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct fman_kg_regs*,int*,int*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(t_Handle VAR_4)
{
    t_FmPcd *VAR_5 = (t_FmPcd *)VAR_4;
    uint32_t VAR_6,VAR_7 = 0, VAR_8 = 0;
    struct fman_kg_regs *VAR_9;

    FUNC_0(FUNC_1(VAR_5->h_Fm));
    VAR_9 = VAR_5->p_FmPcdKg->p_FmPcdKgRegs;
    FUNC_2(VAR_9, &VAR_6, &VAR_7);

    if (VAR_6 & VAR_0)
        VAR_5->f_Exception(VAR_5->h_App,VAR_2);
    if (VAR_6 & VAR_1)
    {
        if (VAR_7)
        {
            while (VAR_7)
            {
                if (VAR_7 & 0x1)
                    VAR_5->f_FmPcdIndexedException(VAR_5->h_App,VAR_3, (uint16_t)(31 - VAR_8));
                VAR_7 >>= 1;
                VAR_8+=1;
            }
        }
        else
            VAR_5->f_Exception(VAR_5->h_App,VAR_3);
    }
}
