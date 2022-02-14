
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_cil_ctx {int sequence; struct xfs_cil* cil; int busy_extents; int committing; } ;
struct xfs_cil {int xc_current_sequence; struct log* xc_log; struct xfs_cil_ctx* xc_ctx; int xc_commit_wait; int xc_ctx_lock; int xc_cil_lock; int xc_committing; int xc_cil; } ;
struct log {struct xfs_cil* l_cilp; TYPE_1__* l_mp; } ;
struct TYPE_2__ {int m_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_cil*) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;

int
FUNC_6(
 struct log *VAR_4)
{
 struct xfs_cil *VAR_5;
 struct xfs_cil_ctx *VAR_6;

 VAR_4->l_cilp = ((void*)0);
 if (!(VAR_4->l_mp->m_flags & VAR_3))
  return 0;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_2|VAR_1);
 if (!VAR_5)
  return VAR_0;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2|VAR_1);
 if (!VAR_6) {
  FUNC_3(VAR_5);
  return VAR_0;
 }

 FUNC_0(&VAR_5->xc_cil);
 FUNC_0(&VAR_5->xc_committing);
 FUNC_5(&VAR_5->xc_cil_lock);
 FUNC_1(&VAR_5->xc_ctx_lock);
 FUNC_2(&VAR_5->xc_commit_wait);

 FUNC_0(&VAR_6->committing);
 FUNC_0(&VAR_6->busy_extents);
 VAR_6->sequence = 1;
 VAR_6->cil = VAR_5;
 VAR_5->xc_ctx = VAR_6;
 VAR_5->xc_current_sequence = VAR_6->sequence;

 VAR_5->xc_log = VAR_4;
 VAR_4->l_cilp = VAR_5;
 return 0;
}
