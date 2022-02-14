
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct rpc_pipe_ops {int dummy; } ;
struct rpc_inode {int nkern_readwriters; int flags; struct rpc_pipe_ops const* ops; void* private; } ;
struct inode {int dummy; } ;
struct file_operations {int dummy; } ;
struct dentry {int d_inode; } ;


 struct rpc_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct dentry*,int,struct file_operations const*,void*) ;
 int FUNC_2 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2,
   umode_t VAR_3,
   const struct file_operations *VAR_4,
   void *VAR_5,
   const struct rpc_pipe_ops *VAR_6,
   int VAR_7)
{
 struct rpc_inode *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_0 | VAR_3, VAR_4, VAR_5);
 if (VAR_9)
  return VAR_9;
 VAR_8 = FUNC_0(VAR_2->d_inode);
 VAR_8->nkern_readwriters = 1;
 VAR_8->private = VAR_5;
 VAR_8->flags = VAR_7;
 VAR_8->ops = VAR_6;
 FUNC_2(VAR_1, VAR_2);
 return 0;
}
