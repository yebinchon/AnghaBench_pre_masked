
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int xfs_mount_t ;
struct TYPE_15__ {int * i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
struct TYPE_16__ {int address; } ;
typedef TYPE_2__ xfs_dir2_leaf_entry_t ;
struct TYPE_17__ {int namelen; int name; int inumber; } ;
typedef TYPE_3__ xfs_dir2_data_entry_t ;
typedef int xfs_dir2_block_tail_t ;
typedef int xfs_dir2_block_t ;
struct TYPE_18__ {int * data; } ;
typedef TYPE_4__ xfs_dabuf_t ;
struct TYPE_19__ {int trans; int inumber; TYPE_1__* dp; } ;
typedef TYPE_5__ xfs_da_args_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__**,int*) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_5__*,int ,int ) ;

int
FUNC_11(
 xfs_da_args_t *VAR_0)
{
 xfs_dir2_block_t *VAR_1;
 xfs_dir2_leaf_entry_t *VAR_2;
 xfs_dabuf_t *VAR_3;
 xfs_dir2_block_tail_t *VAR_4;
 xfs_dir2_data_entry_t *VAR_5;
 xfs_inode_t *VAR_6;
 int VAR_7;
 int VAR_8;
 xfs_mount_t *VAR_9;

 FUNC_3(VAR_0);





 if ((VAR_8 = FUNC_6(VAR_0, &VAR_3, &VAR_7)))
  return VAR_8;
 VAR_6 = VAR_0->dp;
 VAR_9 = VAR_6->i_mount;
 VAR_1 = VAR_3->data;
 FUNC_8(VAR_6, VAR_3);
 VAR_4 = FUNC_7(VAR_9, VAR_1);
 VAR_2 = FUNC_5(VAR_4);



 VAR_5 = (xfs_dir2_data_entry_t *)((char *)VAR_1 +
  FUNC_9(VAR_9, FUNC_1(VAR_2[VAR_7].address)));



 VAR_0->inumber = FUNC_2(VAR_5->inumber);
 VAR_8 = FUNC_10(VAR_0, VAR_5->name, VAR_5->namelen);
 FUNC_4(VAR_0->trans, VAR_3);
 return FUNC_0(VAR_8);
}
