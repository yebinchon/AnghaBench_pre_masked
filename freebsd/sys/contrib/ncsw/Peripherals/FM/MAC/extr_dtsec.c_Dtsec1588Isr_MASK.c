
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_2__ {int h_App; int (* f_Exception ) (int ,int ) ;scalar_t__ ptpTsuEnabled; struct dtsec_regs* p_MemMap; } ;
typedef TYPE_1__ t_Dtsec ;
struct dtsec_regs {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dtsec_regs*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(t_Handle VAR_2)
{
    t_Dtsec *VAR_3 = (t_Dtsec *)VAR_2;
    uint32_t VAR_4;
    struct dtsec_regs *VAR_5 = VAR_3->p_MemMap;

    if (VAR_3->ptpTsuEnabled)
    {
        VAR_4 = FUNC_1(VAR_5);

        if (VAR_4)
        {
            FUNC_0(VAR_4 & VAR_0);
            VAR_3->f_Exception(VAR_3->h_App, VAR_1);
        }
    }
}
