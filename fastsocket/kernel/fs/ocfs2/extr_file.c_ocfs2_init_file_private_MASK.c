
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_file_private {int fp_flock; int fp_mutex; struct file* fp_file; } ;
struct inode {int dummy; } ;
struct file {struct ocfs2_file_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_file_private* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ocfs2_file_private*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct ocfs2_file_private *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct ocfs2_file_private), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->fp_file = VAR_3;
 FUNC_1(&VAR_4->fp_mutex);
 FUNC_2(&VAR_4->fp_flock, VAR_4);
 VAR_3->private_data = VAR_4;

 return 0;
}
