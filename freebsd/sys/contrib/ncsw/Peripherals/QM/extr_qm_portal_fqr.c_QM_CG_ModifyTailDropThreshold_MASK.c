
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_16__ {int p_LowQmPortal; } ;
typedef TYPE_6__ t_QmPortal ;
struct TYPE_17__ {int id; scalar_t__ h_QmPortal; } ;
typedef TYPE_7__ t_QmCg ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_11__ {int cstd_en; } ;
struct TYPE_12__ {TYPE_1__ cgr; } ;
struct qm_mc_result {int verb; scalar_t__ result; TYPE_2__ querycgr; } ;
struct TYPE_13__ {int TA; int Tn; } ;
struct TYPE_14__ {TYPE_3__ cs_thres; } ;
struct TYPE_15__ {TYPE_4__ cgr; int we_mask; int cgid; } ;
struct qm_mc_command {TYPE_5__ initcgr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int) ;
 struct qm_mc_result* FUNC_8 (int ) ;
 struct qm_mc_command* FUNC_9 (int ) ;

t_Error FUNC_10(t_Handle VAR_9, uint32_t VAR_10)
{
    t_QmCg *VAR_11 = (t_QmCg *)VAR_9;
    struct qm_mc_command *VAR_12;
    struct qm_mc_result *VAR_13;
    t_QmPortal *VAR_14;
    uint32_t VAR_15, VAR_16, VAR_17=0, VAR_18=0;
    int VAR_19, VAR_20;

    FUNC_5(VAR_11, VAR_0);

    VAR_14 = (t_QmPortal *)VAR_11->h_QmPortal;

    FUNC_2(VAR_14);
    VAR_12 = FUNC_9(VAR_14->p_LowQmPortal);
    VAR_12->initcgr.cgid = VAR_11->id;

    FUNC_7(VAR_14->p_LowQmPortal, VAR_6);
    while (!(VAR_13 = FUNC_8(VAR_14->p_LowQmPortal))) ;
    FUNC_1((VAR_13->verb & VAR_8) == VAR_6);
    if (VAR_13->result != VAR_7)
    {
        FUNC_3(VAR_14);
        FUNC_4(VAR_3, VAR_1, ("QM_MCC_VERB_QUERYCGR failed: %s", FUNC_6(VAR_13->result)));
    }

    if(!VAR_13->querycgr.cgr.cstd_en)
    {
        FUNC_3(VAR_14);
        FUNC_4(VAR_3, VAR_1, ("Tail Drop is not enabled!"));
    }

    VAR_12 = FUNC_9(VAR_14->p_LowQmPortal);
    VAR_12->initcgr.cgid = VAR_11->id;
    VAR_12->initcgr.we_mask |= VAR_4;


    VAR_19 = (int)VAR_10;
    for (VAR_15=0 ; VAR_15<256; VAR_15++ )
        for (VAR_16=0 ; VAR_16<32; VAR_16++ )
        {
            VAR_20 = FUNC_0((int)(VAR_10 - VAR_15*(1<<VAR_16)));
            if (VAR_20 < VAR_19)
            {
               VAR_17 = VAR_15;
               VAR_18 = VAR_16;
               VAR_19 = VAR_20;
            }
        }
    VAR_12->initcgr.cgr.cs_thres.TA = VAR_17;
    VAR_12->initcgr.cgr.cs_thres.Tn = VAR_18;

    FUNC_7(VAR_14->p_LowQmPortal, VAR_5);
    while (!(VAR_13 = FUNC_8(VAR_14->p_LowQmPortal))) ;
    FUNC_1((VAR_13->verb & VAR_8) == VAR_5);
    if (VAR_13->result != VAR_7)
    {
        FUNC_3(VAR_14);
        FUNC_4(VAR_3, VAR_1, ("INITCGR failed: %s", FUNC_6(VAR_13->result)));
    }
    FUNC_3(VAR_14);

    return VAR_2;
}
