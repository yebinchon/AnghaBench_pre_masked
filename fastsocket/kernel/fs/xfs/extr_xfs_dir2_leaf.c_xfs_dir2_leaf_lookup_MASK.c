
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_16__ {int i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
struct TYPE_17__ {TYPE_3__* ents; } ;
typedef TYPE_2__ xfs_dir2_leaf_t ;
struct TYPE_18__ {int address; } ;
typedef TYPE_3__ xfs_dir2_leaf_entry_t ;
struct TYPE_19__ {int namelen; int name; int inumber; } ;
typedef TYPE_4__ xfs_dir2_data_entry_t ;
struct TYPE_20__ {TYPE_2__* data; } ;
typedef TYPE_5__ xfs_dabuf_t ;
struct TYPE_21__ {int inumber; TYPE_1__* dp; int * trans; } ;
typedef TYPE_6__ xfs_da_args_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *,TYPE_5__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__**,int*,TYPE_5__**) ;
 int FUNC_8 (TYPE_6__*,int ,int ) ;

int
FUNC_9(
 xfs_da_args_t *VAR_0)
{
 xfs_dabuf_t *VAR_1;
 xfs_dir2_data_entry_t *VAR_2;
 xfs_inode_t *VAR_3;
 int VAR_4;
 int VAR_5;
 xfs_dabuf_t *VAR_6;
 xfs_dir2_leaf_t *VAR_7;
 xfs_dir2_leaf_entry_t *VAR_8;
 xfs_trans_t *VAR_9;

 FUNC_3(VAR_0);




 if ((VAR_4 = FUNC_7(VAR_0, &VAR_6, &VAR_5, &VAR_1))) {
  return VAR_4;
 }
 VAR_9 = VAR_0->trans;
 VAR_3 = VAR_0->dp;
 FUNC_6(VAR_3, VAR_6);
 VAR_7 = VAR_6->data;



 VAR_8 = &VAR_7->ents[VAR_5];



 VAR_2 = (xfs_dir2_data_entry_t *)
       ((char *)VAR_1->data +
        FUNC_5(VAR_3->i_mount, FUNC_1(VAR_8->address)));



 VAR_0->inumber = FUNC_2(VAR_2->inumber);
 VAR_4 = FUNC_8(VAR_0, VAR_2->name, VAR_2->namelen);
 FUNC_4(VAR_9, VAR_1);
 FUNC_4(VAR_9, VAR_6);
 return FUNC_0(VAR_4);
}
