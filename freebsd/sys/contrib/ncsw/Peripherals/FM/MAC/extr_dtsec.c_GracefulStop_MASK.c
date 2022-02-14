
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int t_Error ;
struct TYPE_3__ {int majorRev; } ;
struct TYPE_4__ {TYPE_1__ fmRevInfo; } ;
struct dtsec_regs {TYPE_2__ fmMacControllerDriver; struct dtsec_regs* p_MemMap; } ;
typedef struct dtsec_regs t_Dtsec ;
typedef int e_CommMode ;


 int FUNC_0 (struct dtsec_regs*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct dtsec_regs*) ;
 int FUNC_4 (struct dtsec_regs*) ;

__attribute__((used)) static t_Error FUNC_5(t_Dtsec *VAR_4, e_CommMode VAR_5)
{
    struct dtsec_regs *VAR_6;

    FUNC_0(VAR_4);

    VAR_6 = VAR_4->p_MemMap;
    FUNC_0(VAR_6);


    if (VAR_5 & VAR_2)
    {
        FUNC_3(VAR_6);
    }

    if (VAR_5 & VAR_3)







        FUNC_4(VAR_6);



    return VAR_0;
}
