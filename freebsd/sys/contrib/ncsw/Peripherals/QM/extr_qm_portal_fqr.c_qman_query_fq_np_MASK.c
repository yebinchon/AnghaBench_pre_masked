
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
struct qman_fq {int fqid; } ;
struct qm_mcr_queryfq_np {int dummy; } ;
struct qm_mc_result {int verb; scalar_t__ result; struct qm_mcr_queryfq_np queryfq_np; } ;
struct TYPE_6__ {int fqid; } ;
struct qm_mc_command {TYPE_1__ queryfq_np; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 struct qm_mc_result* FUNC_6 (int ) ;
 struct qm_mc_command* FUNC_7 (int ) ;

__attribute__((used)) static t_Error FUNC_8(t_QmPortal *VAR_7, struct qman_fq *VAR_8, struct qm_mcr_queryfq_np *VAR_9)
{
    struct qm_mc_command *VAR_10;
    struct qm_mc_result *VAR_11;
    uint8_t VAR_12;

    FUNC_1(VAR_7);
    VAR_10 = FUNC_7(VAR_7->p_LowQmPortal);
    VAR_10->queryfq_np.fqid = VAR_8->fqid;
    FUNC_5(VAR_7->p_LowQmPortal, VAR_3);
    while (!(VAR_11 = FUNC_6(VAR_7->p_LowQmPortal))) ;
    FUNC_0((VAR_11->verb & VAR_5) == VAR_6);
    VAR_12 = VAR_11->result;
    if (VAR_12 == VAR_4)
        *VAR_9 = VAR_11->queryfq_np;
    FUNC_2(VAR_7);
    if (VAR_12 != VAR_4)
        FUNC_3(VAR_2, VAR_0, ("QUERYFQ_NP failed: %s\n", FUNC_4(VAR_12)));
    return VAR_1;
}
