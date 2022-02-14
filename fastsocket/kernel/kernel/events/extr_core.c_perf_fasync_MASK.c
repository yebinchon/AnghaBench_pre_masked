
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event {int fasync; } ;
struct inode {int i_mutex; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {struct perf_event* private_data; TYPE_2__ f_path; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (int,struct file*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct file *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = VAR_1->f_path.dentry->d_inode;
 struct perf_event *VAR_4 = VAR_1->private_data;
 int VAR_5;

 FUNC_1(&VAR_3->i_mutex);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4->fasync);
 FUNC_2(&VAR_3->i_mutex);

 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
