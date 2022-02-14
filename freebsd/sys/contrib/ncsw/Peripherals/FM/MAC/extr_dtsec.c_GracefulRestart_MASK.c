
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_Error ;
struct dtsec_regs {struct dtsec_regs* p_MemMap; } ;
typedef struct dtsec_regs t_Dtsec ;
typedef int e_CommMode ;


 int FUNC_0 (struct dtsec_regs*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dtsec_regs*) ;
 int FUNC_2 (struct dtsec_regs*) ;

__attribute__((used)) static t_Error FUNC_3(t_Dtsec *VAR_3, e_CommMode VAR_4)
{
    struct dtsec_regs *VAR_5;

    FUNC_0(VAR_3);
    VAR_5 = VAR_3->p_MemMap;
    FUNC_0(VAR_5);


    if (VAR_4 & VAR_2)
        FUNC_2(VAR_5);

    if (VAR_4 & VAR_1)
        FUNC_1(VAR_5);

    return VAR_0;
}
