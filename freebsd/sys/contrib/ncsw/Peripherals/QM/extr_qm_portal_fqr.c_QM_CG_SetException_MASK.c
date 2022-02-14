
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int p_LowQmPortal; } ;
typedef TYPE_3__ t_QmPortal ;
struct TYPE_11__ {int id; int f_Exception; scalar_t__ h_QmPortal; } ;
typedef TYPE_4__ t_QmCg ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct qm_mc_result {int verb; scalar_t__ result; } ;
struct TYPE_8__ {int cscn_en; } ;
struct TYPE_9__ {TYPE_1__ cgr; int we_mask; int cgid; } ;
struct qm_mc_command {TYPE_2__ initcgr; } ;
typedef scalar_t__ e_QmExceptions ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int) ;
 struct qm_mc_result* FUNC_7 (int ) ;
 struct qm_mc_command* FUNC_8 (int ) ;

t_Error FUNC_9(t_Handle VAR_12, e_QmExceptions VAR_13, bool VAR_14)
{
    t_QmCg *VAR_15 = (t_QmCg *)VAR_12;
    struct qm_mc_command *VAR_16;
    struct qm_mc_result *VAR_17;
    t_QmPortal *VAR_18;

    FUNC_4(VAR_15, VAR_0);

    VAR_18 = (t_QmPortal *)VAR_15->h_QmPortal;
    if (!VAR_15->f_Exception)
        FUNC_3(VAR_5, VAR_2, ("Either threshold or exception callback was not configured."));

    FUNC_1(VAR_18);
    VAR_16 = FUNC_8(VAR_18->p_LowQmPortal);
    VAR_16->initcgr.cgid = VAR_15->id;
    VAR_16->initcgr.we_mask = VAR_7;

    if(VAR_13 == VAR_11)
    {
        if(VAR_14)
            VAR_16->initcgr.cgr.cscn_en = VAR_6;
    }
    else
    {
        FUNC_2(VAR_18);
        FUNC_3(VAR_4, VAR_2, ("Illegal exception"));
    }

    FUNC_6(VAR_18->p_LowQmPortal, VAR_8);
    while (!(VAR_17 = FUNC_7(VAR_18->p_LowQmPortal))) ;
    FUNC_0((VAR_17->verb & VAR_10) == VAR_8);
    if (VAR_17->result != VAR_9)
    {
        FUNC_2(VAR_18);
        FUNC_3(VAR_5, VAR_1, ("INITCGR failed: %s", FUNC_5(VAR_17->result)));
    }
    FUNC_2(VAR_18);

    return VAR_3;
}
