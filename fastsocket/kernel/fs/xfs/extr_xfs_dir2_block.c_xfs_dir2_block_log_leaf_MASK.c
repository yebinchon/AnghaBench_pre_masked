
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * t_mountp; } ;
typedef TYPE_1__ xfs_trans_t ;
typedef int xfs_mount_t ;
typedef int xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_block_tail_t ;
typedef int xfs_dir2_block_t ;
struct TYPE_8__ {int * data; } ;
typedef TYPE_2__ xfs_dabuf_t ;
typedef int uint ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,int ,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(
 xfs_trans_t *VAR_0,
 xfs_dabuf_t *VAR_1,
 int VAR_2,
 int VAR_3)
{
 xfs_dir2_block_t *VAR_4;
 xfs_dir2_leaf_entry_t *VAR_5;
 xfs_dir2_block_tail_t *VAR_6;
 xfs_mount_t *VAR_7;

 VAR_7 = VAR_0->t_mountp;
 VAR_4 = VAR_1->data;
 VAR_6 = FUNC_2(VAR_7, VAR_4);
 VAR_5 = FUNC_1(VAR_6);
 FUNC_0(VAR_0, VAR_1, (uint)((char *)&VAR_5[VAR_2] - (char *)VAR_4),
  (uint)((char *)&VAR_5[VAR_3 + 1] - (char *)VAR_4 - 1));
}
