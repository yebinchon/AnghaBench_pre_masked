
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct cgroup_pidlist* private; } ;
struct file {int f_mode; scalar_t__ private_data; int * f_op; TYPE_1__* f_dentry; } ;
struct cgroup_pidlist {int dummy; } ;
struct cgroup {int dummy; } ;
typedef enum cgroup_filetype { ____Placeholder_cgroup_filetype } cgroup_filetype ;
struct TYPE_2__ {int d_parent; } ;


 int VAR_0 ;
 struct cgroup* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cgroup_pidlist*) ;
 int FUNC_2 (struct cgroup*,int,struct cgroup_pidlist**) ;
 int FUNC_3 (struct file*,int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, enum cgroup_filetype VAR_4)
{
 struct cgroup *VAR_5 = FUNC_0(VAR_3->f_dentry->d_parent);
 struct cgroup_pidlist *VAR_6;
 int VAR_7;


 if (!(VAR_3->f_mode & VAR_0))
  return 0;


 VAR_7 = FUNC_2(VAR_5, VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_3->f_op = &VAR_1;

 VAR_7 = FUNC_3(VAR_3, &VAR_2);
 if (VAR_7) {
  FUNC_1(VAR_6);
  return VAR_7;
 }
 ((struct seq_file *)VAR_3->private_data)->private = VAR_6;
 return 0;
}
