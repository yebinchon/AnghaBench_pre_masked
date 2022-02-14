
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {TYPE_4__* p_FmPcdKg; scalar_t__ h_Hc; } ;
typedef TYPE_1__ t_FmPcd ;
typedef int t_Error ;
struct fman_kg_regs {int dummy; } ;
struct TYPE_7__ {struct fman_kg_regs* p_FmPcdKgRegs; } ;


 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct fman_kg_regs*,int ) ;

__attribute__((used)) static t_Error FUNC_6(t_FmPcd *VAR_0, uint8_t VAR_1, uint32_t VAR_2)
{
    struct fman_kg_regs *VAR_3;
    uint32_t VAR_4, VAR_5;
    t_Error VAR_6;

    VAR_3 = VAR_0->p_FmPcdKg->p_FmPcdKgRegs;

    if (VAR_0->h_Hc)
    {
        VAR_6 = FUNC_0(VAR_0->h_Hc, VAR_1, VAR_2);
        return VAR_6;
    }

    VAR_5 = FUNC_2(VAR_0->p_FmPcdKg);
    FUNC_5(VAR_3, VAR_2);
    VAR_4 = FUNC_1(VAR_1);
    VAR_6 = FUNC_4(VAR_0, VAR_4);
    FUNC_3(VAR_0->p_FmPcdKg, VAR_5);

    return VAR_6;
}
