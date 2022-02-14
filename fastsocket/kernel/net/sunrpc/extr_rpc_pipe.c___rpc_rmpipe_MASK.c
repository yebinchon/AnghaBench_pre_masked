
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_inode {scalar_t__ nkern_readwriters; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 struct rpc_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct dentry *VAR_1)
{
 struct inode *VAR_2 = VAR_1->d_inode;
 struct rpc_inode *VAR_3 = FUNC_0(VAR_2);

 VAR_3->nkern_readwriters--;
 if (VAR_3->nkern_readwriters != 0)
  return 0;
 FUNC_2(VAR_2);
 return FUNC_1(VAR_0, VAR_1);
}
