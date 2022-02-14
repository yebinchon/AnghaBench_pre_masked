
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_mount {int m_flags; } ;
struct xfs_cil_ctx {int busy_extents; int lv_chain; TYPE_2__* cil; int committing; int start_lsn; } ;
struct TYPE_4__ {int xc_cil_lock; TYPE_1__* xc_log; } ;
struct TYPE_3__ {int l_ailp; struct xfs_mount* l_mp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_cil_ctx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xfs_mount*,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xfs_mount*,int *) ;
 int FUNC_9 (int ,int ,int ,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(
 void *VAR_1,
 int VAR_2)
{
 struct xfs_cil_ctx *VAR_3 = VAR_1;
 struct xfs_mount *VAR_4 = VAR_3->cil->xc_log->l_mp;

 FUNC_9(VAR_3->cil->xc_log->l_ailp, VAR_3->lv_chain,
     VAR_3->start_lsn, VAR_2);

 FUNC_7(&VAR_3->busy_extents);
 FUNC_6(VAR_4, &VAR_3->busy_extents,
        (VAR_4->m_flags & VAR_0) && !VAR_2);

 FUNC_4(&VAR_3->cil->xc_cil_lock);
 FUNC_2(&VAR_3->committing);
 FUNC_5(&VAR_3->cil->xc_cil_lock);

 FUNC_10(VAR_3->lv_chain);

 if (!FUNC_3(&VAR_3->busy_extents)) {
  FUNC_0(VAR_4->m_flags & VAR_0);

  FUNC_8(VAR_4, &VAR_3->busy_extents);
  FUNC_6(VAR_4, &VAR_3->busy_extents, 0);
 }

 FUNC_1(VAR_3);
}
