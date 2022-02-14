
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int file_lock; } ;
struct file {int dummy; } ;
struct fdtable {unsigned int max_fds; int close_on_exec; struct file** fd; } ;
struct TYPE_2__ {struct files_struct* files; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct files_struct*,unsigned int) ;
 TYPE_1__* VAR_1 ;
 struct fdtable* FUNC_2 (struct files_struct*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(unsigned int VAR_2)
{
 struct file *VAR_3;
 struct files_struct *VAR_4 = VAR_1->files;
 struct fdtable *VAR_5;
 int VAR_6 = 0;

 FUNC_5(&VAR_4->file_lock);
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_2 >= VAR_5->max_fds)
  goto out_unlock;
 VAR_3 = VAR_5->fd[VAR_2];
 if (!VAR_3)
  goto out_unlock;
 FUNC_4(VAR_5->fd[VAR_2], ((void*)0));
 FUNC_0(VAR_2, VAR_5->close_on_exec);
 FUNC_1(VAR_4, VAR_2);
 FUNC_6(&VAR_4->file_lock);

 VAR_6 = FUNC_3(VAR_3);

 return VAR_6;

out_unlock:
 FUNC_6(&VAR_4->file_lock);
 return -VAR_0;
}
