
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {struct rpc_clnt* private; } ;
struct rpc_clnt {int cl_count; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_2__* dentry; } ;
struct file {TYPE_1__ f_path; struct seq_file* private_data; } ;
struct TYPE_6__ {struct rpc_clnt* private; } ;
struct TYPE_5__ {int d_lock; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (struct file*,int ,int *) ;
 int FUNC_4 (struct inode*,struct file*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_2, struct file *VAR_3)
{
 struct rpc_clnt *VAR_4 = ((void*)0);
 int VAR_5 = FUNC_3(VAR_3, VAR_1, ((void*)0));

 if (!VAR_5) {
  struct seq_file *VAR_6 = VAR_3->private_data;

  FUNC_5(&VAR_3->f_path.dentry->d_lock);
  if (!FUNC_2(VAR_3->f_path.dentry))
   VAR_4 = FUNC_0(VAR_2)->private;
  if (VAR_4 != ((void*)0) && FUNC_1(&VAR_4->cl_count)) {
   FUNC_6(&VAR_3->f_path.dentry->d_lock);
   VAR_6->private = VAR_4;
  } else {
   FUNC_6(&VAR_3->f_path.dentry->d_lock);
   FUNC_4(VAR_2, VAR_3);
   VAR_5 = -VAR_0;
  }
 }
 return VAR_5;
}
