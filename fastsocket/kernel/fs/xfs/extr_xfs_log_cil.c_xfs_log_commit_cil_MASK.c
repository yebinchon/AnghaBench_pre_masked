
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_lsn_t ;
struct xfs_trans {TYPE_3__* t_ticket; int t_commit_lsn; int t_busy; } ;
struct xfs_mount {struct log* m_log; } ;
struct xfs_log_vec {int dummy; } ;
struct log {TYPE_2__* l_cilp; int l_mp; } ;
struct TYPE_8__ {scalar_t__ t_curr_res; } ;
struct TYPE_7__ {int xc_ctx_lock; TYPE_1__* xc_ctx; int xc_cil_lock; } ;
struct TYPE_6__ {scalar_t__ space_used; int busy_extents; int sequence; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct log*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct xfs_mount*,TYPE_3__*,int *,int) ;
 int FUNC_8 (struct xfs_trans*,int ,int ) ;
 int FUNC_9 (struct xfs_trans*) ;
 int FUNC_10 (struct log*,struct xfs_log_vec*) ;
 int FUNC_11 (struct log*,struct xfs_log_vec*,TYPE_3__*) ;
 int FUNC_12 (struct log*,int ) ;
 int FUNC_13 (int ,TYPE_3__*) ;

void
FUNC_14(
 struct xfs_mount *VAR_2,
 struct xfs_trans *VAR_3,
 struct xfs_log_vec *VAR_4,
 xfs_lsn_t *VAR_5,
 int VAR_6)
{
 struct log *VAR_7 = VAR_2->m_log;
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (VAR_6 & VAR_1)
  VAR_8 = VAR_0;







 FUNC_10(VAR_7, VAR_4);


 FUNC_1(&VAR_7->l_cilp->xc_ctx_lock);
 if (VAR_5)
  *VAR_5 = VAR_7->l_cilp->xc_ctx->sequence;

 FUNC_11(VAR_7, VAR_4, VAR_3->t_ticket);


 if (VAR_3->t_ticket->t_curr_res < 0)
  FUNC_13(VAR_7->l_mp, VAR_3->t_ticket);


 if (!FUNC_2(&VAR_3->t_busy)) {
  FUNC_4(&VAR_7->l_cilp->xc_cil_lock);
  FUNC_3(&VAR_3->t_busy,
     &VAR_7->l_cilp->xc_ctx->busy_extents);
  FUNC_5(&VAR_7->l_cilp->xc_cil_lock);
 }

 VAR_3->t_commit_lsn = *VAR_5;
 FUNC_7(VAR_2, VAR_3->t_ticket, ((void*)0), VAR_8);
 FUNC_9(VAR_3);
 FUNC_8(VAR_3, *VAR_5, 0);


 if (VAR_7->l_cilp->xc_ctx->space_used > FUNC_0(VAR_7))
  VAR_9 = 1;

 FUNC_6(&VAR_7->l_cilp->xc_ctx_lock);
 if (VAR_9)
  FUNC_12(VAR_7, 0);
}
