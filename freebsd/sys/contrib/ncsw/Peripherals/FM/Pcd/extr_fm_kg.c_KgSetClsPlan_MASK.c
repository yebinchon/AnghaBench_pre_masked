
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_9__ {int baseEntry; int numOfClsPlanEntries; int * vectors; } ;
typedef TYPE_2__ t_FmPcdKgInterModuleClsPlanSet ;
struct TYPE_10__ {TYPE_6__* p_FmPcdKg; int h_Fm; } ;
typedef TYPE_3__ t_FmPcd ;
struct fman_kg_cp_regs {int * kgcpe; } ;
struct TYPE_11__ {TYPE_1__* p_IndirectAccessRegs; } ;
struct TYPE_8__ {struct fman_kg_cp_regs clsPlanRegs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,scalar_t__) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ) ;

void FUNC_9(t_Handle VAR_5, t_FmPcdKgInterModuleClsPlanSet *VAR_6)
{
    t_FmPcd *VAR_7 = (t_FmPcd *)VAR_5;
    struct fman_kg_cp_regs *VAR_8;
    uint32_t VAR_9 = 0, VAR_10;
    uint16_t VAR_11, VAR_12;


    FUNC_0(FUNC_1(VAR_7->h_Fm));
    VAR_8 = &VAR_7->p_FmPcdKg->p_IndirectAccessRegs->clsPlanRegs;

    VAR_10 = FUNC_4(VAR_7->p_FmPcdKg);
    for (VAR_11=VAR_6->baseEntry;VAR_11<VAR_6->baseEntry+VAR_6->numOfClsPlanEntries;VAR_11+=8)
    {
        VAR_9 = FUNC_2((uint8_t)(VAR_11 / VAR_0));

        for (VAR_12 = VAR_11; VAR_12 < VAR_11+8; VAR_12++)
        {
            FUNC_0(FUNC_3(0, (VAR_12 - VAR_6->baseEntry), VAR_3-1));
            FUNC_7(VAR_8->kgcpe[VAR_12 % VAR_0],VAR_6->vectors[VAR_12 - VAR_6->baseEntry]);
        }

        if (FUNC_8(VAR_7, VAR_9) != VAR_2)
        {
            FUNC_6(VAR_4, VAR_1, ("WriteKgarWait FAILED"));
            FUNC_5(VAR_7->p_FmPcdKg, VAR_10);
            return;
        }
    }
    FUNC_5(VAR_7->p_FmPcdKg, VAR_10);
}
