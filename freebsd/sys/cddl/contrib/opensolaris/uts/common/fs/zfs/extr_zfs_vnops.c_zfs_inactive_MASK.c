
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ z_unlinked; scalar_t__ z_atime_dirty; int z_atime; int * z_sa_hdl; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_7__ {int z_teardown_inactive_lock; int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int vnode_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef int caller_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,void*,int,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__*) ;

void
FUNC_12(vnode_t *VAR_3, cred_t *VAR_4, caller_context_t *VAR_5)
{
 znode_t *VAR_6 = FUNC_1(VAR_3);
 zfsvfs_t *VAR_7 = VAR_6->z_zfsvfs;
 int VAR_8;

 FUNC_7(&VAR_7->z_teardown_inactive_lock, VAR_1);
 if (VAR_6->z_sa_hdl == ((void*)0)) {




  FUNC_8(&VAR_7->z_teardown_inactive_lock);
  FUNC_10(VAR_3);
  return;
 }

 if (VAR_6->z_unlinked) {



  FUNC_8(&VAR_7->z_teardown_inactive_lock);
  FUNC_10(VAR_3);
  return;
 }

 if (VAR_6->z_atime_dirty && VAR_6->z_unlinked == 0) {
  dmu_tx_t *VAR_9 = FUNC_5(VAR_7->z_os);

  FUNC_6(VAR_9, VAR_6->z_sa_hdl, VAR_0);
  FUNC_11(VAR_9, VAR_6);
  VAR_8 = FUNC_3(VAR_9, VAR_2);
  if (VAR_8) {
   FUNC_2(VAR_9);
  } else {
   (void) FUNC_9(VAR_6->z_sa_hdl, FUNC_0(VAR_7),
       (void *)&VAR_6->z_atime, sizeof (VAR_6->z_atime), VAR_9);
   VAR_6->z_atime_dirty = 0;
   FUNC_4(VAR_9);
  }
 }
 FUNC_8(&VAR_7->z_teardown_inactive_lock);
}
