
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_inode_info {int i_btnode_cache; int i_bmap; } ;
struct inode {int i_mapping; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct inode *VAR_0)
{
 struct nilfs_inode_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0->i_mapping, 0, -1);
 FUNC_4(VAR_0->i_mapping, 0);

 FUNC_2(VAR_1->i_bmap);
 FUNC_3(&VAR_1->i_btnode_cache);
}
