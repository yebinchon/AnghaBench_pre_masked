
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct ocfs2_dlm_seq_priv* private; } ;
struct ocfs2_super {int osb_dlm_debug; } ;
struct TYPE_2__ {int l_debug_list; } ;
struct ocfs2_dlm_seq_priv {int p_dlm_debug; TYPE_1__ p_iter_res; } ;
struct inode {struct ocfs2_super* i_private; } ;
struct file {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ocfs2_dlm_seq_priv*) ;
 struct ocfs2_dlm_seq_priv* FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct file*,int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5;
 struct ocfs2_dlm_seq_priv *VAR_6;
 struct seq_file *VAR_7;
 struct ocfs2_super *VAR_8;

 VAR_6 = FUNC_2(sizeof(struct ocfs2_dlm_seq_priv), VAR_1);
 if (!VAR_6) {
  VAR_5 = -VAR_0;
  FUNC_3(VAR_5);
  goto out;
 }
 VAR_8 = VAR_3->i_private;
 FUNC_5(VAR_8->osb_dlm_debug);
 VAR_6->p_dlm_debug = VAR_8->osb_dlm_debug;
 FUNC_0(&VAR_6->p_iter_res.l_debug_list);

 VAR_5 = FUNC_6(VAR_4, &VAR_2);
 if (VAR_5) {
  FUNC_1(VAR_6);
  FUNC_3(VAR_5);
  goto out;
 }

 VAR_7 = (struct seq_file *) VAR_4->private_data;
 VAR_7->private = VAR_6;

 FUNC_4(&VAR_6->p_iter_res,
       VAR_6->p_dlm_debug);

out:
 return VAR_5;
}
