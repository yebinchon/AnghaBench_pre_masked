
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct ocfs2_dlm_seq_priv* private; } ;
struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_dlm_seq_priv {int p_dlm_debug; struct ocfs2_lock_res p_iter_res; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_lock_res*) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct seq_file *VAR_2 = (struct seq_file *) VAR_1->private_data;
 struct ocfs2_dlm_seq_priv *VAR_3 = VAR_2->private;
 struct ocfs2_lock_res *VAR_4 = &VAR_3->p_iter_res;

 FUNC_1(VAR_4);
 FUNC_0(VAR_3->p_dlm_debug);
 return FUNC_2(VAR_0, VAR_1);
}
