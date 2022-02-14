
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ guestId; int exceptions; TYPE_1__* p_FmPcdKg; int h_Fm; } ;
typedef TYPE_2__ t_FmPcd ;
typedef scalar_t__ t_Error ;
struct fman_kg_regs {int dummy; } ;
struct TYPE_7__ {int schemesIds; scalar_t__ numOfSchemes; struct fman_kg_regs* p_FmPcdKgRegs; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct fman_kg_regs*) ;
 int FUNC_7 (struct fman_kg_regs*,int,int ) ;

__attribute__((used)) static t_Error FUNC_8(t_FmPcd *VAR_8)
{
    t_Error VAR_9 = VAR_0;
    struct fman_kg_regs *VAR_10 = VAR_8->p_FmPcdKg->p_FmPcdKgRegs;

    FUNC_0(VAR_8->guestId == VAR_3);

    if (VAR_8->exceptions & VAR_1)
        FUNC_1(VAR_8->h_Fm);

    FUNC_7(VAR_10, VAR_8->exceptions, FUNC_4(VAR_8));


    FUNC_3(VAR_8->h_Fm,
                   VAR_7,
                   0,
                   VAR_6,
                   VAR_5,
                   VAR_8);

    FUNC_6(VAR_10);

    if (VAR_8->p_FmPcdKg->numOfSchemes)
    {
        VAR_9 = FUNC_2(VAR_8,
                                  VAR_8->p_FmPcdKg->numOfSchemes,
                                  VAR_8->guestId,
                                  VAR_8->p_FmPcdKg->schemesIds);
        if (VAR_9)
            FUNC_5(VAR_2, VAR_9, VAR_4);
    }

    return VAR_0;
}
