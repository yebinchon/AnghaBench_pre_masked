
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ vs_alloc; } ;
struct TYPE_13__ {int vdev_islog; char* vdev_path; scalar_t__ vdev_top_zap; scalar_t__ vdev_leaf_zap; int vdev_config_dirty_node; int vdev_state_dirty_node; int vdev_id; int vdev_removing; TYPE_1__ vdev_stat; struct TYPE_13__* vdev_top; int * vdev_spa; int * vdev_mg; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
typedef int sysevent_t ;
typedef int spa_t ;
typedef int metaslab_group_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int ) ;
 int * FUNC_7 (int *,TYPE_2__*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int *,char*,int ,int ,char*) ;
 int FUNC_10 (int *) ;
 int VAR_10 ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,scalar_t__,int ,int ) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*,int ,int ) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_21(vdev_t *VAR_11, uint64_t *VAR_12)
{
 metaslab_group_t *VAR_13 = VAR_11->vdev_mg;
 spa_t *VAR_14 = VAR_11->vdev_spa;
 int VAR_15 = 0;

 FUNC_0(VAR_11->vdev_islog);
 FUNC_0(VAR_11 == VAR_11->vdev_top);




 FUNC_5(VAR_13);





 FUNC_13(VAR_14, ((void*)0),
     *VAR_12 + VAR_5 + VAR_6, 0, VAR_2);







 if (VAR_11->vdev_islog) {
  if (VAR_11->vdev_stat.vs_alloc != 0)
   VAR_15 = FUNC_11(VAR_14);
 }

 *VAR_12 = FUNC_12(VAR_14);

 if (VAR_15 != 0) {
  FUNC_4(VAR_13);
  return (VAR_15);
 }
 FUNC_1(VAR_11->vdev_stat.vs_alloc);





 VAR_11->vdev_removing = VAR_0;

 FUNC_16(VAR_11, VAR_7, *VAR_12);
 FUNC_15(VAR_11);

 FUNC_9(VAR_14, "vdev remove", ((void*)0),
     "%s vdev %llu (log) %s", FUNC_10(VAR_14), VAR_11->vdev_id,
     (VAR_11->vdev_path != ((void*)0)) ? VAR_11->vdev_path : "-");


 FUNC_13(VAR_14, ((void*)0), *VAR_12, 0, VAR_2);


 (void) FUNC_17(VAR_11, VAR_8);

 *VAR_12 = FUNC_12(VAR_14);

 sysevent_t *VAR_16 = FUNC_7(VAR_14, VAR_11, ((void*)0),
     VAR_1);
 FUNC_0(FUNC_2(&VAR_10));
 FUNC_0(FUNC_6(VAR_14, VAR_4, VAR_3) == VAR_4);


 FUNC_1(VAR_11->vdev_top_zap);

 FUNC_1(VAR_11->vdev_leaf_zap);

 (void) FUNC_18(VAR_11, 0, VAR_9);

 if (FUNC_3(&VAR_11->vdev_state_dirty_node))
  FUNC_20(VAR_11);
 if (FUNC_3(&VAR_11->vdev_config_dirty_node))
  FUNC_14(VAR_11);




 FUNC_19(VAR_11);

 if (VAR_16 != ((void*)0))
  FUNC_8(VAR_16);

 return (0);
}
