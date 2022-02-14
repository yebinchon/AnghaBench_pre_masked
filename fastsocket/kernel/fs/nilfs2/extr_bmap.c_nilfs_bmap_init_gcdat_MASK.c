
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nilfs_bmap_union {int dummy; } nilfs_bmap_union ;
struct nilfs_bmap {int * b_inode; int b_sem; } ;
struct TYPE_2__ {int vfs_inode; } ;


 TYPE_1__* FUNC_0 (struct nilfs_bmap*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct nilfs_bmap*,struct nilfs_bmap*,int) ;
 int VAR_0 ;

void FUNC_4(struct nilfs_bmap *VAR_1, struct nilfs_bmap *VAR_2)
{
 FUNC_3(VAR_1, VAR_2, sizeof(union nilfs_bmap_union));
 FUNC_1(&VAR_1->b_sem);
 FUNC_2(&VAR_2->b_sem, &VAR_0);
 VAR_1->b_inode = &FUNC_0(VAR_1)->vfs_inode;
}
