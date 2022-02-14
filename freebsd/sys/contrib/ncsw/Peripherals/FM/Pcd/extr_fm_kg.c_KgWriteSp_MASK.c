
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
typedef scalar_t__ t_Error ;
struct fman_kg_regs {int dummy; } ;
struct TYPE_7__ {struct fman_kg_regs* p_FmPcdKgRegs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (struct fman_kg_regs*,int ,int) ;

__attribute__((used)) static t_Error FUNC_8(t_FmPcd *VAR_3, uint8_t VAR_4, uint32_t VAR_5, bool VAR_6)
{
    struct fman_kg_regs *VAR_7;

    uint32_t VAR_8 = 0, VAR_9;
    t_Error VAR_10 = VAR_0;




    if (VAR_3->h_Hc)
        return FUNC_0(VAR_3->h_Hc, VAR_4, VAR_5, VAR_6);

    VAR_7 = VAR_3->p_FmPcdKg->p_FmPcdKgRegs;

    VAR_8 = FUNC_1(VAR_4);

    VAR_9 = FUNC_3(VAR_3->p_FmPcdKg);
    VAR_10 = FUNC_6(VAR_3, VAR_8);
    if (VAR_10)
    {
        FUNC_4(VAR_3->p_FmPcdKg, VAR_9);
        FUNC_5(VAR_1, VAR_10, VAR_2);
    }

    FUNC_7(VAR_7, VAR_5, VAR_6);

    VAR_8 = FUNC_2(VAR_4);

    VAR_10 = FUNC_6(VAR_3, VAR_8);
    FUNC_4(VAR_3->p_FmPcdKg, VAR_9);
    return VAR_10;
}
