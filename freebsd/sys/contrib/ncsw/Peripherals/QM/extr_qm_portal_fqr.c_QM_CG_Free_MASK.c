
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int p_LowQmPortal; } ;
typedef TYPE_2__ t_QmPortal ;
struct TYPE_10__ {int id; scalar_t__ h_QmPortal; int h_Qm; } ;
typedef TYPE_3__ t_QmCg ;
typedef scalar_t__ t_Handle ;
typedef scalar_t__ t_Error ;
struct qm_mc_result {int verb; scalar_t__ result; } ;
struct TYPE_8__ {int we_mask; int cgid; } ;
struct qm_mc_command {TYPE_1__ initcgr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int) ;
 struct qm_mc_result* FUNC_10 (int ) ;
 struct qm_mc_command* FUNC_11 (int ) ;

t_Error FUNC_12(t_Handle VAR_9)
{

    t_QmCg *VAR_10 = (t_QmCg *)VAR_9;
    t_Error VAR_11;
    struct qm_mc_command *VAR_12;
    struct qm_mc_result *VAR_13;
    t_QmPortal *VAR_14;

    FUNC_6(VAR_10, VAR_0);

    VAR_14 = (t_QmPortal *)VAR_10->h_QmPortal;

    FUNC_1(VAR_14);
    VAR_12 = FUNC_11(VAR_14->p_LowQmPortal);
    VAR_12->initcgr.cgid = VAR_10->id;
    VAR_12->initcgr.we_mask = VAR_5;

    VAR_11 = FUNC_3(VAR_10->h_Qm, VAR_10->id);
    if(VAR_11)
    {
        FUNC_7(VAR_10);
        FUNC_2(VAR_14);
        FUNC_5(VAR_3, VAR_1, ("QmFreeCgId failed"));
    }

    VAR_11 = FUNC_4(VAR_10->h_QmPortal, VAR_10->id);
    if(VAR_11)
    {
        FUNC_7(VAR_10);
        FUNC_2(VAR_14);
        FUNC_5(VAR_3, VAR_1, ("QmPortalUnregisterCg failed"));
    }

    FUNC_9(VAR_14->p_LowQmPortal, VAR_6);
    while (!(VAR_13 = FUNC_10(VAR_14->p_LowQmPortal))) ;
    FUNC_0((VAR_13->verb & VAR_8) == VAR_6);
    if (VAR_13->result != VAR_7)
    {
        FUNC_2(VAR_14);
        FUNC_5(VAR_4, VAR_1, ("INITCGR failed: %s", FUNC_8(VAR_13->result)));
    }
    FUNC_2(VAR_14);

    FUNC_7(VAR_10);

    return VAR_2;
}
