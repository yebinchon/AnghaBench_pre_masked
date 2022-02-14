
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct udf_inode_info {struct inode vfs_inode; scalar_t__ i_strat4096; scalar_t__ i_next_alloc_goal; scalar_t__ i_next_alloc_block; scalar_t__ i_lenExtents; scalar_t__ i_unique; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 struct udf_inode_info* FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_2)
{
 struct udf_inode_info *VAR_3;
 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->i_unique = 0;
 VAR_3->i_lenExtents = 0;
 VAR_3->i_next_alloc_block = 0;
 VAR_3->i_next_alloc_goal = 0;
 VAR_3->i_strat4096 = 0;

 return &VAR_3->vfs_inode;
}
