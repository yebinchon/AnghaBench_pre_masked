
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* p_FmPcdKg; } ;
typedef TYPE_2__ t_FmPcd ;
typedef int t_Error ;
struct fman_kg_regs {int dummy; } ;
struct TYPE_4__ {struct fman_kg_regs* p_FmPcdKgRegs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct fman_kg_regs*,int ) ;

__attribute__((used)) static t_Error FUNC_2(t_FmPcd *VAR_3, uint32_t VAR_4)
{

    struct fman_kg_regs *VAR_5 = VAR_3->p_FmPcdKg->p_FmPcdKgRegs;

    if (FUNC_1(VAR_5, VAR_4))
        FUNC_0(VAR_2, VAR_0, ("Keygen scheme access violation"));

    return VAR_1;
}
