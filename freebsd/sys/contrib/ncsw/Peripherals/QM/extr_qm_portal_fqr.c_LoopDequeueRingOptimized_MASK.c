
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int p_LowQmPortal; int h_App; TYPE_2__* p_NullCB; } ;
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
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct qman_fq*) ;
 struct qman_fq* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 struct qm_dqrr_entry* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ,TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *,TYPE_3__*,int,int *) ;

__attribute__((used)) static void FUNC_11(t_Handle VAR_11)
{
    struct qm_dqrr_entry *VAR_12;
    struct qman_fq *VAR_13;
    enum qman_cb_dqrr_result VAR_14 = VAR_7;
    e_RxStoreResponse VAR_15;
    t_QmPortal *VAR_16 = (t_QmPortal *)VAR_11;

    while (VAR_14 != VAR_9)
    {
        FUNC_4(VAR_16->p_LowQmPortal);
        VAR_12 = FUNC_5(VAR_16->p_LowQmPortal);
        if (!VAR_12)
            break;
 VAR_13 = FUNC_2(VAR_12->contextB);
        if (VAR_12->stat & VAR_5) {



            VAR_15 = VAR_13->cb.dqrr(VAR_13->h_App, VAR_13->h_QmFqr, VAR_16, VAR_13->fqidOffset, (t_DpaaFD*)&VAR_12->fd);
            if (VAR_15 == VAR_6)
                VAR_14 = VAR_9;

            if (VAR_12->stat & VAR_2)
                VAR_13->flags &= ~VAR_1;
            if (VAR_12->stat & VAR_3)
            {
                VAR_13->flags &= ~VAR_0;
                FUNC_1(VAR_13);
            }
        }
        else
        {


            FUNC_0(VAR_12->fqid);
            if (VAR_13)
            {
                VAR_15 = VAR_13->cb.dqrr(VAR_13->h_App,
                                       VAR_13->h_QmFqr,
                                       VAR_16,
                                       VAR_13->fqidOffset,
                                       (t_DpaaFD*)&VAR_12->fd);
                if (VAR_15 == VAR_6)
                    VAR_14 = VAR_9;
                else if (VAR_13->state == VAR_10)
                    VAR_14 = VAR_8;
            }
            else
            {
                VAR_15 = VAR_16->p_NullCB->dqrr(VAR_16->h_App,
                                                    ((void*)0),
                                                    VAR_16,
                                                    VAR_12->fqid,
                                                    (t_DpaaFD*)&VAR_12->fd);
                if (VAR_15 == VAR_6)
                    VAR_14 = VAR_9;
            }
        }




        FUNC_0((VAR_12->stat & VAR_4) ||
                (VAR_14 != VAR_8));
        if (VAR_14 == VAR_8)

            FUNC_7(VAR_16->p_LowQmPortal);
        FUNC_6(VAR_16->p_LowQmPortal);
        FUNC_3(VAR_16->p_LowQmPortal, 1);
    }
}
