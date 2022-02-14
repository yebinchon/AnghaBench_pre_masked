
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_version; } ;
struct ufs_inode_info {struct inode vfs_inode; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_2)
{
 struct ufs_inode_info *VAR_3;
 VAR_3 = (struct ufs_inode_info *)FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->vfs_inode.i_version = 1;
 return &VAR_3->vfs_inode;
}
