
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {TYPE_2__* z_ctldir; TYPE_5__* z_os; int z_unlinked_drain_task; int z_teardown_lock; int z_unmounted; TYPE_1__* z_parent; } ;
typedef TYPE_3__ zfsvfs_t ;
struct TYPE_23__ {int vfs_count; int vfs_resource; TYPE_3__* vfs_data; } ;
typedef TYPE_4__ vfs_t ;
struct TYPE_24__ {int os_user_ptr_lock; } ;
typedef TYPE_5__ objset_t ;
struct TYPE_25__ {int * td_ucred; } ;
typedef TYPE_6__ kthread_t ;
typedef int cred_t ;
struct TYPE_26__ {int tq_queue; } ;
struct TYPE_21__ {int v_count; } ;
struct TYPE_20__ {int z_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 TYPE_6__* VAR_7 ;
 int FUNC_2 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char*,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_12 (int ,int *,int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (TYPE_4__*,int ,int ,TYPE_6__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_4__*,int,int *) ;
 TYPE_8__* VAR_8 ;
 scalar_t__ FUNC_18 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_19(vfs_t *VAR_9, int VAR_10)
{
 kthread_t *VAR_11 = VAR_7;
 zfsvfs_t *VAR_12 = VAR_9->vfs_data;
 objset_t *VAR_13;
 cred_t *VAR_14 = VAR_11->td_ucred;
 int VAR_15;

 VAR_15 = FUNC_11(VAR_14, VAR_9);
 if (VAR_15) {
  if (FUNC_5((char *)FUNC_8(VAR_9->vfs_resource),
      VAR_6, VAR_14))
   return (VAR_15);
 }







 (void) FUNC_4(VAR_12->z_parent->z_vfs, 0);





 if (VAR_12->z_ctldir != ((void*)0)) {
  if ((VAR_15 = FUNC_17(VAR_9, VAR_10, VAR_14)) != 0)
   return (VAR_15);
 }

 if (VAR_10 & VAR_4) {





  FUNC_9(&VAR_12->z_teardown_lock, VAR_5, VAR_3);
  VAR_12->z_unmounted = VAR_0;
  FUNC_10(&VAR_12->z_teardown_lock, VAR_3);
 }




 VAR_15 = FUNC_14(VAR_9, 0, (VAR_10 & VAR_4) ? VAR_2 : 0, VAR_11);
 if (VAR_15 != 0)
  return (VAR_15);
 while (FUNC_12(VAR_8->tq_queue,
     &VAR_12->z_unlinked_drain_task, ((void*)0)) != 0)
  FUNC_13(VAR_8->tq_queue,
      &VAR_12->z_unlinked_drain_task);

 FUNC_1(FUNC_18(VAR_12, VAR_0) == 0);
 VAR_13 = VAR_12->z_os;





 if (VAR_13 != ((void*)0)) {



  FUNC_6(&VAR_13->os_user_ptr_lock);
  FUNC_3(VAR_13, ((void*)0));
  FUNC_7(&VAR_13->os_user_ptr_lock);




  FUNC_2(VAR_13, VAR_12);
 }




 if (VAR_12->z_ctldir != ((void*)0))
  FUNC_16(VAR_12);
 FUNC_15(VAR_9);

 return (0);
}
