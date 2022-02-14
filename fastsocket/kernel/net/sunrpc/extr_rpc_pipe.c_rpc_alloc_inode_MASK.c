
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct rpc_inode {struct inode vfs_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct inode *
FUNC_1(struct super_block *VAR_2)
{
 struct rpc_inode *VAR_3;
 VAR_3 = (struct rpc_inode *)FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 return &VAR_3->vfs_inode;
}
