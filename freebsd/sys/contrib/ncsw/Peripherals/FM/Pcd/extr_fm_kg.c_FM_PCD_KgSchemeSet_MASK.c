
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int * t_Handle ;
struct TYPE_22__ {int update; } ;
struct TYPE_20__ {size_t relativeSchemeId; int * h_Scheme; } ;
struct TYPE_23__ {scalar_t__ modify; TYPE_3__ schemeCounter; TYPE_1__ id; } ;
typedef TYPE_4__ t_FmPcdKgSchemeParams ;
struct TYPE_24__ {size_t schemeId; scalar_t__ p_Lock; TYPE_6__* h_FmPcd; } ;
typedef TYPE_5__ t_FmPcdKgScheme ;
struct TYPE_25__ {size_t numOfSchemes; size_t* schemesIds; struct TYPE_25__* p_FmPcdKg; TYPE_2__* p_IndirectAccessRegs; scalar_t__ h_Hc; TYPE_5__* schemes; } ;
typedef TYPE_6__ t_FmPcd ;
typedef scalar_t__ t_Error ;
struct fman_kg_scheme_regs {int * kgse_gec; int kgse_vsp; int kgse_om; int kgse_fqb; int kgse_spc; int kgse_hc; int kgse_bmcl; int kgse_bmch; int kgse_ekfc; int kgse_ekdv; int kgse_dv1; int kgse_dv0; int kgse_mv; int kgse_mode; int kgse_ccbs; int kgse_ppc; } ;
struct TYPE_21__ {struct fman_kg_scheme_regs schemeRegs; } ;


 scalar_t__ FUNC_0 (int *,TYPE_4__*,struct fman_kg_scheme_regs*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__,int *,struct fman_kg_scheme_regs*,int ) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (size_t,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_6__*,scalar_t__) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_11 (int ,scalar_t__,char*) ;
 int FUNC_12 (TYPE_6__*,int ,int *) ;
 int VAR_8 ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_6__*,int ) ;
 int FUNC_16 (TYPE_5__*,int ,int) ;

t_Handle FUNC_17(t_Handle VAR_9, t_FmPcdKgSchemeParams *VAR_10)
{
    t_FmPcd *VAR_11;
    struct fman_kg_scheme_regs VAR_12;
    struct fman_kg_scheme_regs *VAR_13;
    uint8_t VAR_14;
    t_Error VAR_15 = VAR_4;
    uint32_t VAR_16;
    uint32_t VAR_17;
    uint8_t VAR_18, VAR_19 = 0;
    t_FmPcdKgScheme *VAR_20;

    if (VAR_10->modify)
    {
        VAR_20 = (t_FmPcdKgScheme *)VAR_10->id.h_Scheme;
        VAR_11 = VAR_20->h_FmPcd;

        FUNC_12(VAR_11, VAR_1, ((void*)0));
        FUNC_12(VAR_11->p_FmPcdKg, VAR_1, ((void*)0));

        if (!FUNC_5(VAR_20))
        {
            FUNC_11(VAR_6, VAR_0,
                         ("Scheme is invalid"));
            return ((void*)0);
        }

        if (!FUNC_9(VAR_20))
        {
            FUNC_1(VAR_8, ("Scheme Try Lock - BUSY"));

            VAR_10->id.h_Scheme = ((void*)0);
            return ((void*)0);
        }
    }
    else
    {
        VAR_11 = (t_FmPcd*)VAR_9;

        FUNC_12(VAR_11, VAR_1, ((void*)0));
        FUNC_12(VAR_11->p_FmPcdKg, VAR_1, ((void*)0));

        VAR_19 = VAR_10->id.relativeSchemeId;

        if (VAR_19 >= VAR_11->p_FmPcdKg->numOfSchemes)
        {
            FUNC_11(VAR_6, VAR_3, ("relative-scheme-id %d!", VAR_19));
            return ((void*)0);
        }

        VAR_20 = &VAR_11->p_FmPcdKg->schemes[VAR_19];
        if (FUNC_5(VAR_20))
        {
            FUNC_11(VAR_6, VAR_0,
                         ("Scheme id (%d)!", VAR_19));
            return ((void*)0);
        }

        FUNC_16(VAR_20, 0, sizeof(t_FmPcdKgScheme));

        VAR_20->schemeId = VAR_11->p_FmPcdKg->schemesIds[VAR_19];
        VAR_20->h_FmPcd = VAR_11;

        VAR_20->p_Lock = FUNC_3(VAR_11);
        if (!VAR_20->p_Lock)
            FUNC_11(VAR_6, VAR_2, ("FM KG Scheme lock obj!"));
    }

    VAR_15 = FUNC_0((t_Handle)VAR_20, VAR_10, &VAR_12);
    if (VAR_15)
    {
        FUNC_11(VAR_6, VAR_15, VAR_7);
        if (VAR_10->modify)
            FUNC_10(VAR_20);
        if (!VAR_10->modify &&
            VAR_20->p_Lock)
            FUNC_6(VAR_11, VAR_20->p_Lock);
        return ((void*)0);
    }

    if (VAR_11->h_Hc)
    {
        VAR_15 = FUNC_2(VAR_11->h_Hc,
                                 (t_Handle)VAR_20,
                                 &VAR_12,
                                 VAR_10->schemeCounter.update);
        if (VAR_10->modify)
            FUNC_10(VAR_20);
        if (VAR_15)
        {
            if (!VAR_10->modify &&
                VAR_20->p_Lock)
                FUNC_6(VAR_11, VAR_20->p_Lock);
            return ((void*)0);
        }
        if (!VAR_10->modify)
            FUNC_13(VAR_20);
        return (t_Handle)VAR_20;
    }

    VAR_18 = VAR_20->schemeId;


    VAR_13 = &VAR_11->p_FmPcdKg->p_IndirectAccessRegs->schemeRegs;
    VAR_17 = FUNC_7(VAR_11->p_FmPcdKg);
    FUNC_14(VAR_13->kgse_ppc, VAR_12.kgse_ppc);
    FUNC_14(VAR_13->kgse_ccbs, VAR_12.kgse_ccbs);
    FUNC_14(VAR_13->kgse_mode, VAR_12.kgse_mode);
    FUNC_14(VAR_13->kgse_mv, VAR_12.kgse_mv);
    FUNC_14(VAR_13->kgse_dv0, VAR_12.kgse_dv0);
    FUNC_14(VAR_13->kgse_dv1, VAR_12.kgse_dv1);
    FUNC_14(VAR_13->kgse_ekdv, VAR_12.kgse_ekdv);
    FUNC_14(VAR_13->kgse_ekfc, VAR_12.kgse_ekfc);
    FUNC_14(VAR_13->kgse_bmch, VAR_12.kgse_bmch);
    FUNC_14(VAR_13->kgse_bmcl, VAR_12.kgse_bmcl);
    FUNC_14(VAR_13->kgse_hc, VAR_12.kgse_hc);
    FUNC_14(VAR_13->kgse_spc, VAR_12.kgse_spc);
    FUNC_14(VAR_13->kgse_fqb, VAR_12.kgse_fqb);
    FUNC_14(VAR_13->kgse_om, VAR_12.kgse_om);
    FUNC_14(VAR_13->kgse_vsp, VAR_12.kgse_vsp);
    for (VAR_14=0 ; VAR_14<VAR_5 ; VAR_14++)
        FUNC_14(VAR_13->kgse_gec[VAR_14], VAR_12.kgse_gec[VAR_14]);


    VAR_16 = FUNC_4(VAR_18, VAR_10->schemeCounter.update);

    FUNC_15(VAR_11, VAR_16);
    FUNC_8(VAR_11->p_FmPcdKg, VAR_17);

    if (!VAR_10->modify)
        FUNC_13(VAR_20);
    else
        FUNC_10(VAR_20);

    return (t_Handle)VAR_20;
}
