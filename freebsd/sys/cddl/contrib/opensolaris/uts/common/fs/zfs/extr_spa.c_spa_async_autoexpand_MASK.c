
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vdev_children; char* vdev_physpath; TYPE_1__* vdev_ops; struct TYPE_7__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef int sysevent_id_t ;
struct TYPE_8__ {int spa_autoexpand; } ;
typedef TYPE_3__ spa_t ;
typedef int nvlist_t ;
struct TYPE_6__ {int vdev_op_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int *,int ) ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,char*,char*) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_8(spa_t *VAR_9, vdev_t *VAR_10)
{
 sysevent_id_t VAR_11;
 nvlist_t *VAR_12;
 char *VAR_13;

 if (!VAR_9->spa_autoexpand)
  return;

 for (int VAR_14 = 0; VAR_14 < VAR_10->vdev_children; VAR_14++) {
  vdev_t *VAR_15 = VAR_10->vdev_child[VAR_14];
  FUNC_8(VAR_9, VAR_15);
 }

 if (!VAR_10->vdev_ops->vdev_op_leaf || VAR_10->vdev_physpath == ((void*)0))
  return;

 VAR_13 = FUNC_3(VAR_5, VAR_4);
 (void) FUNC_7(VAR_13, VAR_5, "/devices%s", VAR_10->vdev_physpath);

 FUNC_0(FUNC_5(&VAR_12, VAR_6, VAR_4) == 0);
 FUNC_0(FUNC_4(VAR_12, VAR_1, VAR_13) == 0);

 (void) FUNC_1(VAR_8, VAR_7, VAR_2,
     VAR_3, VAR_12, &VAR_11, VAR_0);

 FUNC_6(VAR_12);
 FUNC_2(VAR_13, VAR_5);
}
