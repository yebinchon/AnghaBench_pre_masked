
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_11__ ;


typedef int uint32_t ;
struct TYPE_36__ {int majorRev; scalar_t__ minorRev; } ;
typedef TYPE_8__ t_QmRevisionInfo ;
struct TYPE_35__ {int redCurve; scalar_t__ enableRed; int yellowCurve; scalar_t__ enableYellow; int greenCurve; scalar_t__ enableGreen; } ;
struct TYPE_37__ {scalar_t__ dcPortalId; int threshold; int p_LowQmPortal; scalar_t__ f_Exception; scalar_t__ notifyDcPortal; scalar_t__ tailDropEnable; TYPE_7__ wredParams; scalar_t__ wredEnable; scalar_t__ frameCount; struct TYPE_37__* h_Qm; int h_App; struct TYPE_37__* h_QmPortal; } ;
typedef TYPE_9__ t_QmPortal ;
typedef TYPE_9__ t_QmCgParams ;
struct TYPE_28__ {TYPE_9__* h_QmPortal; scalar_t__ f_Exception; TYPE_9__* h_Qm; int id; int h_App; } ;
typedef TYPE_11__ t_QmCg ;
typedef TYPE_11__* t_Handle ;
typedef scalar_t__ t_Error ;
struct qm_mc_result {int verb; scalar_t__ result; } ;
struct TYPE_31__ {int TA; int Tn; } ;
struct TYPE_30__ {int word; } ;
struct TYPE_29__ {int word; } ;
struct TYPE_32__ {int word; } ;
struct TYPE_33__ {int cscn_targ; TYPE_3__ cs_thres; void* cscn_en; void* cstd_en; TYPE_2__ wr_parm_r; void* wr_en_r; TYPE_1__ wr_parm_y; void* wr_en_y; TYPE_4__ wr_parm_g; void* wr_en_g; void* frame_mode; } ;
struct TYPE_34__ {int we_mask; TYPE_5__ cgr; int cgid; } ;
struct qm_mc_command {TYPE_6__ initcgr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_9__*) ;
 char* VAR_6 ;
 int FUNC_4 (TYPE_9__*) ;
 void* VAR_7 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_7 (TYPE_9__*,int *) ;
 TYPE_9__* FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (TYPE_9__*,TYPE_8__*) ;
 int FUNC_10 (TYPE_9__*) ;
 scalar_t__ FUNC_11 (TYPE_9__*,TYPE_11__*,int ) ;
 int FUNC_12 (int ,scalar_t__,char*) ;
 int FUNC_13 (TYPE_9__*,scalar_t__,int *) ;
 int FUNC_14 (TYPE_11__*) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (TYPE_11__*,int ,int) ;
 int FUNC_18 (int ,int) ;
 struct qm_mc_result* FUNC_19 (int ) ;
 struct qm_mc_command* FUNC_20 (int ) ;

t_Handle FUNC_21(t_QmCgParams *VAR_24)
{
    t_QmCg *VAR_25;
    t_QmPortal *VAR_26;
    t_Error VAR_27;
    uint32_t VAR_28;
    uint32_t VAR_29, VAR_30, VAR_31=0, VAR_32=0;
    int VAR_33, VAR_34;
    struct qm_mc_command *VAR_35;
    struct qm_mc_result *VAR_36;

    FUNC_13(VAR_24, VAR_0, ((void*)0));
    FUNC_13(VAR_24->h_Qm, VAR_0, ((void*)0));

    if(VAR_24->notifyDcPortal &&
       ((VAR_24->dcPortalId == VAR_22) || (VAR_24->dcPortalId == VAR_23)))
    {
        FUNC_12(VAR_4, VAR_2, ("notifyDcPortal is invalid for this DC Portal"));
        return ((void*)0);
    }

    if (!VAR_24->h_QmPortal)
    {
        VAR_26 = FUNC_8(VAR_24->h_Qm);
        FUNC_13(VAR_26, VAR_1, ((void*)0));
    }
    else
        VAR_26 = VAR_24->h_QmPortal;

    VAR_25 = (t_QmCg *)FUNC_15(sizeof(t_QmCg));
    if (!VAR_25)
    {
        FUNC_12(VAR_4, VAR_3, ("QM CG obj!!!"));
        return ((void*)0);
    }
    FUNC_17(VAR_25, 0, sizeof(t_QmCg));


    VAR_25->h_Qm = VAR_24->h_Qm;
    VAR_25->h_QmPortal = VAR_26;
    VAR_25->h_App = VAR_24->h_App;
    VAR_27 = FUNC_7(VAR_24->h_Qm, &VAR_25->id);
    if (VAR_27)
    {
        FUNC_14(VAR_25);
        FUNC_12(VAR_4, VAR_1, ("QmGetCgId failed"));
        return ((void*)0);
    }

    FUNC_3(VAR_26);
    VAR_35 = FUNC_20(VAR_26->p_LowQmPortal);
    VAR_35->initcgr.cgid = VAR_25->id;

    VAR_27 = FUNC_11(VAR_26, VAR_25, VAR_25->id);
    if (VAR_27)
    {
        FUNC_14(VAR_25);
        FUNC_4(VAR_26);
        FUNC_12(VAR_4, VAR_1, ("QmPortalRegisterCg failed"));
        return ((void*)0);
    }


    {







        if (VAR_24->frameCount)
        {
            VAR_35->initcgr.we_mask |= VAR_12;
            VAR_35->initcgr.cgr.frame_mode = VAR_7;
        }
    }

    if (VAR_24->wredEnable)
    {
        if (VAR_24->wredParams.enableGreen)
        {
            VAR_27 = FUNC_2(&VAR_24->wredParams.greenCurve, &VAR_28);
            if(VAR_27)
            {
                FUNC_14(VAR_25);
                FUNC_4(VAR_26);
                FUNC_12(VAR_4, VAR_27, VAR_6);
                return ((void*)0);
            }
            VAR_35->initcgr.we_mask |= VAR_13 | VAR_16;
            VAR_35->initcgr.cgr.wr_en_g = VAR_7;
            VAR_35->initcgr.cgr.wr_parm_g.word = VAR_28;
        }
        if (VAR_24->wredParams.enableYellow)
        {
            VAR_27 = FUNC_2(&VAR_24->wredParams.yellowCurve, &VAR_28);
            if(VAR_27)
            {
                FUNC_14(VAR_25);
                FUNC_4(VAR_26);
                FUNC_12(VAR_4, VAR_27, VAR_6);
                return ((void*)0);
            }
            VAR_35->initcgr.we_mask |= VAR_15 | VAR_18;
            VAR_35->initcgr.cgr.wr_en_y = VAR_7;
            VAR_35->initcgr.cgr.wr_parm_y.word = VAR_28;
        }
        if (VAR_24->wredParams.enableRed)
        {
            VAR_27 = FUNC_2(&VAR_24->wredParams.redCurve, &VAR_28);
            if(VAR_27)
            {
                FUNC_14(VAR_25);
                FUNC_4(VAR_26);
                FUNC_12(VAR_4, VAR_27, VAR_6);
                return ((void*)0);
            }
            VAR_35->initcgr.we_mask |= VAR_14 | VAR_17;
            VAR_35->initcgr.cgr.wr_en_r = VAR_7;
            VAR_35->initcgr.cgr.wr_parm_r.word = VAR_28;
        }
    }

    if (VAR_24->tailDropEnable)
    {
        if (!VAR_24->threshold)
        {
            FUNC_14(VAR_25);
            FUNC_4(VAR_26);
            FUNC_12(VAR_5, VAR_1, ("tailDropThreshold must be configured if tailDropEnable "));
            return ((void*)0);
        }
        VAR_35->initcgr.cgr.cstd_en = VAR_7;
        VAR_35->initcgr.we_mask |= VAR_10;
    }

    if (VAR_24->threshold)
    {
        VAR_35->initcgr.we_mask |= VAR_11;
        VAR_25->f_Exception = VAR_24->f_Exception;
        if (VAR_25->f_Exception || VAR_24->notifyDcPortal)
        {
            VAR_35->initcgr.cgr.cscn_en = VAR_7;
            VAR_35->initcgr.we_mask |= VAR_8 | VAR_9;

            VAR_35->initcgr.cgr.cscn_targ = 0;
            if (VAR_25->f_Exception)
                VAR_35->initcgr.cgr.cscn_targ = (uint32_t)FUNC_6(FUNC_10(VAR_25->h_QmPortal));
            if (VAR_24->notifyDcPortal)
                VAR_35->initcgr.cgr.cscn_targ |= (uint32_t)FUNC_5(VAR_24->dcPortalId);
        }


        VAR_33 = (int)VAR_24->threshold;
        for (VAR_29=0 ; VAR_29<256; VAR_29++ )
            for (VAR_30=0 ; VAR_30<32; VAR_30++ )
            {
                VAR_34 = FUNC_0((int)(VAR_24->threshold - VAR_29*(1<<VAR_30)));
                if (VAR_34 < VAR_33)
                {
                   VAR_31 = VAR_29;
                   VAR_32 = VAR_30;
                   VAR_33 = VAR_34;
                }
            }
        VAR_35->initcgr.cgr.cs_thres.TA = VAR_31;
        VAR_35->initcgr.cgr.cs_thres.Tn = VAR_32;
    }
    else if(VAR_24->f_Exception)
    {
        FUNC_14(VAR_25);
        FUNC_4(VAR_26);
        FUNC_12(VAR_5, VAR_1, ("No threshold configured, but f_Exception defined"));
        return ((void*)0);
    }

    FUNC_18(VAR_26->p_LowQmPortal, VAR_19);
    while (!(VAR_36 = FUNC_19(VAR_26->p_LowQmPortal))) ;
    FUNC_1((VAR_36->verb & VAR_21) == VAR_19);
    if (VAR_36->result != VAR_20)
    {
        FUNC_14(VAR_25);
        FUNC_4(VAR_26);
        FUNC_12(VAR_5, VAR_1, ("INITCGR failed: %s", FUNC_16(VAR_36->result)));
        return ((void*)0);
    }
    FUNC_4(VAR_26);

    return VAR_25;
}
