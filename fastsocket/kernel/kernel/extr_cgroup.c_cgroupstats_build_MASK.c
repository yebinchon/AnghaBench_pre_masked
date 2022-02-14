
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int state; } ;
struct dentry {struct cgroup* d_fsdata; TYPE_2__* d_inode; TYPE_1__* d_sb; } ;
struct cgroupstats {int nr_io_wait; int nr_stopped; int nr_uninterruptible; int nr_sleeping; int nr_running; } ;
struct cgroup_iter {int dummy; } ;
struct cgroup {int dummy; } ;
struct TYPE_4__ {int i_mode; } ;
struct TYPE_3__ {int * s_op; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;




 int FUNC_1 (struct cgroup*,struct cgroup_iter*) ;
 struct task_struct* FUNC_2 (struct cgroup*,struct cgroup_iter*) ;
 int FUNC_3 (struct cgroup*,struct cgroup_iter*) ;
 int VAR_1 ;
 int FUNC_4 (struct task_struct*) ;

int FUNC_5(struct cgroupstats *VAR_2, struct dentry *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct cgroup *VAR_5;
 struct cgroup_iter VAR_6;
 struct task_struct *VAR_7;





 if (VAR_3->d_sb->s_op != &VAR_1 ||
     !FUNC_0(VAR_3->d_inode->i_mode))
   goto err;

 VAR_4 = 0;
 VAR_5 = VAR_3->d_fsdata;

 FUNC_3(VAR_5, &VAR_6);
 while ((VAR_7 = FUNC_2(VAR_5, &VAR_6))) {
  switch (VAR_7->state) {
  case 130:
   VAR_2->nr_running++;
   break;
  case 131:
   VAR_2->nr_sleeping++;
   break;
  case 128:
   VAR_2->nr_uninterruptible++;
   break;
  case 129:
   VAR_2->nr_stopped++;
   break;
  default:
   if (FUNC_4(VAR_7))
    VAR_2->nr_io_wait++;
   break;
  }
 }
 FUNC_1(VAR_5, &VAR_6);

err:
 return VAR_4;
}
