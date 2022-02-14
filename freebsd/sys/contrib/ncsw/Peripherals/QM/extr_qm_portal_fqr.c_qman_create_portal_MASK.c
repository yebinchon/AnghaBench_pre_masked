
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_25__ {int options; TYPE_3__* p_LowQmPortal; } ;
typedef TYPE_1__ t_QmPortal ;
typedef int t_Error ;
struct qm_portal_config {int irq; } ;
struct TYPE_26__ {struct qm_portal_config config; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,int ,int ,int ,int,int) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int ,int ) ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*,int) ;
 int FUNC_18 (TYPE_3__*,int) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 scalar_t__ FUNC_21 (TYPE_3__*) ;
 int * FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 scalar_t__ FUNC_24 (TYPE_3__*,int ,int ) ;
 int FUNC_25 (TYPE_3__*,int) ;

__attribute__((used)) static t_Error FUNC_26(t_QmPortal *VAR_21,
                                   uint32_t VAR_22,
                                   uint32_t VAR_23,
                                   uint8_t VAR_24)
{
    const struct qm_portal_config *VAR_25 = &(VAR_21->p_LowQmPortal->config);
    int VAR_26 = 0;
    t_Error VAR_27;
    uint32_t VAR_28;

    if ((VAR_27 = FUNC_12(VAR_21->p_LowQmPortal, VAR_19, VAR_17)) != VAR_2)
        FUNC_2(VAR_4, VAR_27, ("Qman EQCR initialization failed\n"));

    if (FUNC_7(VAR_21->p_LowQmPortal,
                     VAR_23 ? VAR_14 : VAR_13,
                     VAR_19,
                     (VAR_22 & VAR_5) ? VAR_16 : VAR_15,
                     VAR_24,
                     (VAR_22 & VAR_8) ? 1 : 0,
                     (VAR_22 & VAR_6) ? 1 : 0)) {
        FUNC_1(VAR_3, VAR_1, ("DQRR initialization failed"));
        goto fail_dqrr;
    }

    if (FUNC_24(VAR_21->p_LowQmPortal, VAR_19, VAR_18)) {
        FUNC_1(VAR_3, VAR_1, ("MR initialization failed"));
        goto fail_mr;
    }
    if (FUNC_21(VAR_21->p_LowQmPortal)) {
        FUNC_1(VAR_3, VAR_1, ("MC initialization failed"));
        goto fail_mc;
    }
    if (FUNC_16(VAR_21->p_LowQmPortal)) {
        FUNC_1(VAR_3, VAR_1, ("ISR initialization failed"));
        goto fail_isr;
    }

    FUNC_9(VAR_21->p_LowQmPortal, 12);
    FUNC_25(VAR_21->p_LowQmPortal, 4);
    FUNC_17(VAR_21->p_LowQmPortal, 100);
    VAR_21->options = VAR_22;
    VAR_28 = 0xffffffff;
    FUNC_18(VAR_21->p_LowQmPortal, 0xffffffff);
    FUNC_14(VAR_21->p_LowQmPortal, VAR_0);
    FUNC_13(VAR_21->p_LowQmPortal, VAR_28);
    if (VAR_22 & VAR_7)
    {
        FUNC_4(VAR_25->irq, VAR_20, VAR_21);
        FUNC_3(VAR_25->irq);
        FUNC_19(VAR_21->p_LowQmPortal);
    } else

        VAR_22 &= ~VAR_9;

    VAR_28 ^= VAR_11;
    FUNC_13(VAR_21->p_LowQmPortal, VAR_28);
    VAR_26 = FUNC_11(VAR_21->p_LowQmPortal);
    if (VAR_26) {
        FUNC_1(VAR_3, VAR_1, ("EQCR unclean"));
        goto fail_eqcr_empty;
    }
    VAR_28 ^= (VAR_10 | VAR_12);
    FUNC_13(VAR_21->p_LowQmPortal, VAR_28);
    if (FUNC_5(VAR_21->p_LowQmPortal) != ((void*)0))
    {
        FUNC_1(VAR_3, VAR_1, ("DQRR unclean"));
goto fail_dqrr_mr_empty;
    }
    if (FUNC_22(VAR_21->p_LowQmPortal) != ((void*)0))
    {
        FUNC_1(VAR_3, VAR_1, ("MR unclean"));
goto fail_dqrr_mr_empty;
    }
    FUNC_13(VAR_21->p_LowQmPortal, 0);
    FUNC_8(VAR_21->p_LowQmPortal, VAR_23);
    return VAR_2;
fail_dqrr_mr_empty:
fail_eqcr_empty:
    FUNC_15(VAR_21->p_LowQmPortal);
fail_isr:
    FUNC_20(VAR_21->p_LowQmPortal);
fail_mc:
    FUNC_23(VAR_21->p_LowQmPortal);
fail_mr:
    FUNC_6(VAR_21->p_LowQmPortal);
fail_dqrr:
    FUNC_10(VAR_21->p_LowQmPortal);
    return FUNC_0(VAR_1);
}
