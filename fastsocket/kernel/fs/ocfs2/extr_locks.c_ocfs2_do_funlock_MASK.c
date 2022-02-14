
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_file_private {int fp_mutex; } ;
struct file_lock {int dummy; } ;
struct file {struct ocfs2_file_private* private_data; } ;


 int FUNC_0 (struct file*,struct file_lock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, int VAR_1, struct file_lock *VAR_2)
{
 int VAR_3;
 struct ocfs2_file_private *VAR_4 = VAR_0->private_data;

 FUNC_1(&VAR_4->fp_mutex);
 FUNC_3(VAR_0);
 VAR_3 = FUNC_0(VAR_0, VAR_2);
 FUNC_2(&VAR_4->fp_mutex);

 return VAR_3;
}
