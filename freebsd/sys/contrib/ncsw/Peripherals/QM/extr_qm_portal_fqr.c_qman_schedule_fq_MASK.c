
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_7__ {int p_LowQmPortal; } ;
typedef TYPE_2__ t_QmPortal ;
typedef int t_Error ;
struct qman_fq {scalar_t__ state; int flags; int fqid; } ;
struct qm_mc_result {int verb; scalar_t__ result; } ;
struct TYPE_6__ {int fqid; } ;
struct qm_mc_command {TYPE_1__ alterfq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct qman_fq*) ;
 int FUNC_3 (struct qman_fq*) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 struct qm_mc_result* FUNC_9 (int ) ;
 struct qm_mc_command* FUNC_10 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static t_Error FUNC_11(t_QmPortal *VAR_13, struct qman_fq *VAR_14)
{
    struct qm_mc_command *VAR_15;
    struct qm_mc_result *VAR_16;
    uint8_t VAR_17;

    FUNC_0(VAR_14->state == VAR_11);
    if (VAR_14->flags & VAR_5)
        return FUNC_1(VAR_2);

    FUNC_4(VAR_13);
    FUNC_2(VAR_14);
    if ((VAR_14->flags & VAR_6) ||
            (VAR_14->state != VAR_11)) {
        FUNC_3(VAR_14);
        FUNC_5(VAR_13);
        return FUNC_1(VAR_0);
    }
    VAR_15 = FUNC_10(VAR_13->p_LowQmPortal);
    VAR_15->alterfq.fqid = VAR_14->fqid;
    FUNC_8(VAR_13->p_LowQmPortal, VAR_7);
    while (!(VAR_16 = FUNC_9(VAR_13->p_LowQmPortal))) ;
    FUNC_0((VAR_16->verb & VAR_10) == VAR_9);
    VAR_17 = VAR_16->result;
    if (VAR_17 != VAR_8) {
        FUNC_3(VAR_14);
        FUNC_5(VAR_13);
        FUNC_6(VAR_4, VAR_1, ("ALTER_SCHED failed: %s\n", FUNC_7(VAR_17)));
    }
    VAR_14->state = VAR_12;

    FUNC_3(VAR_14);
    FUNC_5(VAR_13);
    return VAR_3;
}
