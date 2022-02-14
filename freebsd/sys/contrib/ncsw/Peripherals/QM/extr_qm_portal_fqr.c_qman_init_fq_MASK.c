
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int p_LowQmPortal; } ;
typedef TYPE_3__ t_QmPortal ;
typedef int t_Error ;
struct qman_fq {scalar_t__ state; int flags; int cgr_groupid; } ;
struct qm_mcc_initfq {int dummy; } ;
struct qm_mc_result {scalar_t__ verb; scalar_t__ result; } ;
struct TYPE_7__ {int fq_ctrl; int cgid; } ;
struct TYPE_8__ {int we_mask; TYPE_1__ fqd; } ;
struct qm_mc_command {TYPE_2__ initfq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct qman_fq*) ;
 int FUNC_3 (struct qman_fq*) ;
 int VAR_4 ;
 int FUNC_4 (void*,struct qm_mcc_initfq*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;
 struct qm_mc_result* FUNC_11 (int ) ;
 struct qm_mc_command* FUNC_12 (int ) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static t_Error FUNC_13(t_QmPortal *VAR_19,
                            struct qman_fq *VAR_20,
                            uint32_t VAR_21,
                            struct qm_mcc_initfq *VAR_22)
{
    struct qm_mc_command *VAR_23;
    struct qm_mc_result *VAR_24;
    uint8_t VAR_25, VAR_26 = (uint8_t)((VAR_21 & VAR_8) ?
        VAR_13 : VAR_12);

    FUNC_8((VAR_20->state == VAR_16) ||
                              (VAR_20->state == VAR_17),
                              VAR_1);

    if (VAR_20->flags & VAR_5)
        return FUNC_1(VAR_2);

    FUNC_5(VAR_19);
    FUNC_2(VAR_20);
    if ((VAR_20->flags & VAR_7) ||
            ((VAR_20->state != VAR_16) &&
                (VAR_20->state != VAR_17))) {
        FUNC_3(VAR_20);
        FUNC_6(VAR_19);
        return FUNC_1(VAR_0);
    }
    VAR_23 = FUNC_12(VAR_19->p_LowQmPortal);
    FUNC_4((void*)&VAR_23->initfq, VAR_22, sizeof(struct qm_mcc_initfq));
    FUNC_10(VAR_19->p_LowQmPortal, VAR_26);
    while (!(VAR_24 = FUNC_11(VAR_19->p_LowQmPortal))) ;
    FUNC_0((VAR_24->verb & VAR_15) == VAR_26);
    VAR_25 = VAR_24->result;
    if (VAR_25 != VAR_14) {
        FUNC_3(VAR_20);
        FUNC_6(VAR_19);
        FUNC_7(VAR_4, VAR_1,("INITFQ failed: %s", FUNC_9(VAR_25)));
    }

    if (VAR_23->initfq.we_mask & VAR_11) {
        if (VAR_23->initfq.fqd.fq_ctrl & VAR_9)
            VAR_20->flags |= VAR_6;
        else
            VAR_20->flags &= ~VAR_6;
    }
    if (VAR_23->initfq.we_mask & VAR_10)
        VAR_20->cgr_groupid = VAR_23->initfq.fqd.cgid;
    VAR_20->state = (VAR_21 & VAR_8) ?
            VAR_18 : VAR_17;
    FUNC_3(VAR_20);
    FUNC_6(VAR_19);
    return VAR_3;
}
