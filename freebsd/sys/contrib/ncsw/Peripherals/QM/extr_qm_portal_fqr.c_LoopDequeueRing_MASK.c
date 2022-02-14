
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int options; int p_LowQmPortal; int h_App; TYPE_2__* p_NullCB; } ;
typedef TYPE_3__ t_QmPortal ;
typedef scalar_t__ t_Handle ;
typedef int t_DpaaFD ;
struct TYPE_7__ {scalar_t__ (* dqrr ) (int ,int ,TYPE_3__*,int ,int *) ;} ;
struct qman_fq {scalar_t__ state; int fqidOffset; int h_QmFqr; int h_App; TYPE_1__ cb; int flags; } ;
struct qm_dqrr_entry {int stat; int fqid; int fd; int contextB; } ;
typedef enum qman_cb_dqrr_result { ____Placeholder_qman_cb_dqrr_result } qman_cb_dqrr_result ;
typedef scalar_t__ e_RxStoreResponse ;
struct TYPE_8__ {scalar_t__ (* dqrr ) (int ,int *,TYPE_3__*,int,int *) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct qman_fq*) ;
 struct qman_fq* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,struct qm_dqrr_entry*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct qm_dqrr_entry* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_10 (int ,int ,TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_11 (int ,int ,TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *,TYPE_3__*,int,int *) ;

__attribute__((used)) static void FUNC_13(t_Handle VAR_14)
{
    struct qm_dqrr_entry *VAR_15;
    struct qman_fq *VAR_16;
    enum qman_cb_dqrr_result VAR_17 = VAR_9;
    e_RxStoreResponse VAR_18;
    t_QmPortal *VAR_19 = (t_QmPortal *)VAR_14;
    int VAR_20 = !(VAR_19->options & VAR_3);

    while (VAR_17 != VAR_12)
    {
        if (VAR_20)
            FUNC_5(VAR_19->p_LowQmPortal);
        FUNC_6(VAR_19->p_LowQmPortal);
        VAR_15 = FUNC_7(VAR_19->p_LowQmPortal);
        if (!VAR_15)
            break;
 VAR_16 = FUNC_2(VAR_15->contextB);
        if (VAR_15->stat & VAR_7) {



            VAR_18 = VAR_16->cb.dqrr(VAR_16->h_App, VAR_16->h_QmFqr, VAR_19, VAR_16->fqidOffset, (t_DpaaFD*)&VAR_15->fd);
            if (VAR_18 == VAR_8)
                VAR_17 = VAR_12;

            if (VAR_15->stat & VAR_4)
                VAR_16->flags &= ~VAR_1;
            if (VAR_15->stat & VAR_5)
            {
                VAR_16->flags &= ~VAR_0;
                FUNC_1(VAR_16);
            }
        }
        else
        {


            FUNC_0(VAR_15->fqid);
            if (VAR_16)
            {
                VAR_18 = VAR_16->cb.dqrr(VAR_16->h_App,
                                       VAR_16->h_QmFqr,
                                       VAR_19,
                                       VAR_16->fqidOffset,
                                       (t_DpaaFD*)&VAR_15->fd);
                if (VAR_18 == VAR_8)
                    VAR_17 = VAR_12;
                else if (VAR_16->state == VAR_13)
                    VAR_17 = VAR_11;
            }
            else
            {
                VAR_18 = VAR_19->p_NullCB->dqrr(VAR_19->h_App,
                                                    ((void*)0),
                                                    VAR_19,
                                                    VAR_15->fqid,
                                                    (t_DpaaFD*)&VAR_15->fd);
                if (VAR_18 == VAR_8)
                    VAR_17 = VAR_12;
            }
        }




        FUNC_0((VAR_15->stat & VAR_6) ||
                    (VAR_17 != VAR_11));
        if (VAR_19->options & VAR_2) {

            if (VAR_17 != VAR_10)
                FUNC_4(VAR_19->p_LowQmPortal,
                                           VAR_15,
                                           (VAR_17 == VAR_11));
            FUNC_8(VAR_19->p_LowQmPortal);
        } else {
            if (VAR_17 == VAR_11)

                FUNC_9(VAR_19->p_LowQmPortal);
            FUNC_8(VAR_19->p_LowQmPortal);
            FUNC_3(VAR_19->p_LowQmPortal, 1);
        }
    }
}
