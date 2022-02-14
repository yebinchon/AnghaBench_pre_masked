
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
struct qman_fq {scalar_t__ state; int flags; int fqid; } ;
struct TYPE_8__ {int fqs; } ;
struct qm_mc_result {int verb; scalar_t__ result; TYPE_2__ alterfq; } ;
struct TYPE_7__ {int context_b; int fqid; } ;
struct qm_mc_command {TYPE_1__ alterfq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qman_fq*) ;
 int FUNC_2 (struct qman_fq*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct qman_fq*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 struct qm_mc_result* FUNC_10 (int ) ;
 struct qm_mc_command* FUNC_11 (int ) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static t_Error FUNC_12(t_QmPortal *VAR_21,
                              struct qman_fq *VAR_22,
                              uint32_t *VAR_23,
                              bool VAR_24)
{
    struct qm_mc_command *VAR_25;
    struct qm_mc_result *VAR_26;
    t_Error VAR_27 = VAR_3;
    uint8_t VAR_28;

    FUNC_5((VAR_22->state == VAR_18) ||
                              (VAR_22->state == VAR_20),
                              VAR_1);

    if (VAR_22->flags & VAR_4)
        return VAR_2;
    FUNC_3(VAR_21);
    FUNC_1(VAR_22);
    if ((VAR_22->flags & VAR_5) ||
            (VAR_22->state == VAR_19) ||
                (VAR_22->state == VAR_17)) {
        VAR_27 = VAR_0;
        goto out;
    }
    VAR_25 = FUNC_11(VAR_21->p_LowQmPortal);
    VAR_25->alterfq.fqid = VAR_22->fqid;
    if (VAR_24)
        VAR_25->alterfq.context_b = FUNC_7(VAR_22);
    FUNC_9(VAR_21->p_LowQmPortal,
                 (uint8_t)((VAR_24)?VAR_9:VAR_8));
    while (!(VAR_26 = FUNC_10(VAR_21->p_LowQmPortal))) ;
    FUNC_0((VAR_26->verb & VAR_16) ==
                (VAR_24)?VAR_15:VAR_14);
    VAR_28 = VAR_26->result;
    if (VAR_28 == VAR_12)
    {

        if (VAR_26->alterfq.fqs & VAR_10)
            VAR_22->flags |= VAR_6;
        if (VAR_26->alterfq.fqs & VAR_11)
            VAR_22->flags |= VAR_7;
        VAR_22->state = VAR_19;
    }
    else if (VAR_28 == VAR_13)
        VAR_22->flags |= VAR_5;
    else {
        FUNC_6("ALTER_RETIRE failed: %s\n",
                FUNC_8(VAR_28));
        VAR_27 = VAR_1;
    }
    if (VAR_23)
        *VAR_23 = VAR_22->flags;
out:
    FUNC_2(VAR_22);
    FUNC_4(VAR_21);
    return VAR_27;
}
