
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_inode {int pipe; int * ops; int waitq; } ;
struct poll_table_struct {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {scalar_t__ private_data; TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct rpc_inode* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int
FUNC_3(struct file *VAR_6, struct poll_table_struct *VAR_7)
{
 struct rpc_inode *VAR_8;
 unsigned int VAR_9 = 0;

 VAR_8 = FUNC_0(VAR_6->f_path.dentry->d_inode);
 FUNC_2(VAR_6, &VAR_8->waitq, VAR_7);

 VAR_9 = VAR_3 | VAR_5;
 if (VAR_8->ops == ((void*)0))
  VAR_9 |= VAR_0 | VAR_1;
 if (VAR_6->private_data || !FUNC_1(&VAR_8->pipe))
  VAR_9 |= VAR_2 | VAR_4;
 return VAR_9;
}
