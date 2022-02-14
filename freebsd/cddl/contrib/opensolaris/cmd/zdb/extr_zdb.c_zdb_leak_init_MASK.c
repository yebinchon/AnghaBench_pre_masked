
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int zcb_checkpoint_size; int zcb_vd_obsolete_counts; TYPE_5__* zcb_spa; } ;
typedef TYPE_3__ zdb_cb_t ;
struct TYPE_24__ {int vdev_children; } ;
typedef TYPE_4__ vdev_t ;
typedef int uint32_t ;
struct TYPE_25__ {TYPE_2__* spa_log_class; TYPE_1__* spa_normal_class; TYPE_4__* spa_root_vdev; TYPE_6__* spa_dsl_pool; } ;
typedef TYPE_5__ spa_t ;
struct TYPE_26__ {int dp_obsolete_bpobj; } ;
typedef TYPE_6__ dsl_pool_t ;
struct TYPE_22__ {int * mc_ops; } ;
struct TYPE_21__ {int * mc_ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,TYPE_3__*,int *) ;
 int * VAR_6 ;
 int FUNC_3 (int ,char*) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_5__*,int ,int ) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 int VAR_8 ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_12 (TYPE_5__*,TYPE_3__*) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_13(spa_t *VAR_10, zdb_cb_t *VAR_11)
{
 VAR_11->zcb_spa = VAR_10;

 if (!VAR_6['L']) {
  dsl_pool_t *VAR_12 = VAR_10->spa_dsl_pool;
  vdev_t *VAR_13 = VAR_10->spa_root_vdev;






  VAR_10->spa_normal_class->mc_ops = &VAR_9;
  VAR_10->spa_log_class->mc_ops = &VAR_9;

  VAR_11->zcb_vd_obsolete_counts =
      FUNC_9(VAR_13->vdev_children * sizeof (uint32_t *),
      VAR_5);







  FUNC_12(VAR_10, VAR_11);
  FUNC_4(VAR_10, VAR_3);
  FUNC_11(VAR_10, VAR_11);


  (void) FUNC_3(VAR_8, "\n");

  if (FUNC_1(&VAR_12->dp_obsolete_bpobj)) {
   FUNC_0(FUNC_7(VAR_10,
       VAR_4));
   (void) FUNC_2(&VAR_12->dp_obsolete_bpobj,
       VAR_7, VAR_11, ((void*)0));
  }
 } else {




  VAR_11->zcb_checkpoint_size += FUNC_8(VAR_10);
 }

 FUNC_5(VAR_10, VAR_2, VAR_0, VAR_1);
 FUNC_10(VAR_10, VAR_11);
 FUNC_6(VAR_10, VAR_2, VAR_0);
}
