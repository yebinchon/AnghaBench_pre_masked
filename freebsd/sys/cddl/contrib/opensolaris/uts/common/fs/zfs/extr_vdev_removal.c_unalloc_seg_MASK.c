
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int vcsa_txg; int vcsa_dest_dva; int * vcsa_spa; } ;
typedef TYPE_1__ vdev_copy_segment_arg_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_14__ {int * blk_dva; int member_0; } ;
typedef TYPE_2__ blkptr_t ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (int *,int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_15(void *VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
 vdev_copy_segment_arg_t *VAR_8 = VAR_5;
 spa_t *VAR_9 = VAR_8->vcsa_spa;
 blkptr_t VAR_10 = { 0 };

 FUNC_0(&VAR_10, VAR_1, VAR_1);
 FUNC_6(&VAR_10, VAR_7);
 FUNC_7(&VAR_10, VAR_7);
 FUNC_3(&VAR_10, VAR_4);
 FUNC_2(&VAR_10, VAR_3);
 FUNC_8(&VAR_10, VAR_0);
 FUNC_5(&VAR_10, 0);
 FUNC_4(&VAR_10, 0);
 FUNC_1(&VAR_10, VAR_2);

 FUNC_13(&VAR_10.blk_dva[0], FUNC_10(VAR_8->vcsa_dest_dva));
 FUNC_12(&VAR_10.blk_dva[0],
     FUNC_9(VAR_8->vcsa_dest_dva) + VAR_6);
 FUNC_11(&VAR_10.blk_dva[0], VAR_7);

 FUNC_14(VAR_9, VAR_8->vcsa_txg, &VAR_10);
}
