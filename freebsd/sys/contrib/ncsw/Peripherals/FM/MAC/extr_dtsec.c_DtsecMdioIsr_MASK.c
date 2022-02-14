
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_2__ {int h_App; int (* f_Event ) (int ,int ) ;struct dtsec_regs* p_MemMap; } ;
typedef TYPE_1__ t_Dtsec ;
struct dtsec_regs {int ievent; int imask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(t_Handle VAR_4)
{
    t_Dtsec *VAR_5 = (t_Dtsec *)VAR_4;
    uint32_t VAR_6;
    struct dtsec_regs *VAR_7 = VAR_5->p_MemMap;

    VAR_6 = FUNC_0(VAR_7->ievent);

    VAR_6 &= (VAR_0 | VAR_1);
    if (VAR_6)
    {
        VAR_6 &= FUNC_0(VAR_7->imask);

        FUNC_1(VAR_7->ievent, VAR_6);

        if (VAR_6 & VAR_0)
            VAR_5->f_Event(VAR_5->h_App, VAR_2);
        if (VAR_6 & VAR_1)
            VAR_5->f_Event(VAR_5->h_App, VAR_3);
    }
}
