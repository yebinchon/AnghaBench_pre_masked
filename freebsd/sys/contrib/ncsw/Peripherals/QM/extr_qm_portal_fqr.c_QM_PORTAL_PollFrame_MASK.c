
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int options; int p_LowQmPortal; int frame; int fqidOffset; int * h_QmFqr; int h_App; } ;
typedef TYPE_1__ t_QmPortalFrameInfo ;
typedef TYPE_1__ t_QmPortal ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
typedef int t_DpaaFD ;
struct qman_fq {int fqidOffset; int * h_QmFqr; int h_App; } ;
struct qm_dqrr_entry {int fd; int fqid; int contextB; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (void*,void*,int) ;
 struct qman_fq* FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,struct qm_dqrr_entry*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct qm_dqrr_entry* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

t_Error FUNC_13(t_Handle VAR_6, t_QmPortalFrameInfo *VAR_7)
{
    t_QmPortal *VAR_8 = (t_QmPortal *)VAR_6;
    struct qm_dqrr_entry *VAR_9;
    struct qman_fq *VAR_10;
    int VAR_11;

    FUNC_4(VAR_8, VAR_1);
    FUNC_4(VAR_7, VAR_2);

    FUNC_2(VAR_8);

    VAR_11 = !(VAR_8->options & VAR_5);
    if (VAR_11)
        FUNC_9(VAR_8->p_LowQmPortal);
    FUNC_10(VAR_8->p_LowQmPortal);
    VAR_9 = FUNC_11(VAR_8->p_LowQmPortal);
    if (!VAR_9)
    {
        FUNC_3(VAR_8);
        return FUNC_1(VAR_0);
    }
    VAR_10 = FUNC_6(VAR_9->contextB);
    FUNC_0(VAR_9->fqid);
    if (VAR_10)
    {
        VAR_7->h_App = VAR_10->h_App;
        VAR_7->h_QmFqr = VAR_10->h_QmFqr;
        VAR_7->fqidOffset = VAR_10->fqidOffset;
        FUNC_5((void*)&VAR_7->frame, (void*)&VAR_9->fd, sizeof(t_DpaaFD));
    }
    else
    {
        VAR_7->h_App = VAR_8->h_App;
        VAR_7->h_QmFqr = ((void*)0);
        VAR_7->fqidOffset = VAR_9->fqid;
        FUNC_5((void*)&VAR_7->frame, (void*)&VAR_9->fd, sizeof(t_DpaaFD));
    }
    if (VAR_8->options & VAR_4) {
        FUNC_8(VAR_8->p_LowQmPortal,
                                   VAR_9,
                                   0);
        FUNC_12(VAR_8->p_LowQmPortal);
    } else {
        FUNC_12(VAR_8->p_LowQmPortal);
        FUNC_7(VAR_8->p_LowQmPortal, 1);
    }

    FUNC_3(VAR_8);

    return VAR_3;
}
