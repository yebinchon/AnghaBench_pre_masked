
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int group_leader; TYPE_1__* signal; int sighand; } ;
struct rlimit {int rlim_cur; int rlim_max; } ;
struct TYPE_2__ {struct rlimit* rlim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 struct task_struct* VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*,unsigned int,struct rlimit*) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (struct task_struct*,int) ;

int FUNC_7(struct task_struct *VAR_10, unsigned int VAR_11,
  struct rlimit *VAR_12)
{
 struct rlimit *VAR_13;
 int VAR_14;

 if (VAR_12->rlim_cur > VAR_12->rlim_max)
  return -VAR_1;
 if (VAR_11 == VAR_5 && VAR_12->rlim_max > VAR_8)
  return -VAR_2;


 if (VAR_10 != VAR_7) {

  FUNC_1(&VAR_9);
  if (!VAR_10->sighand) {
   VAR_14 = -VAR_3;
   goto out;
  }
 }

 VAR_14 = FUNC_3(VAR_10, VAR_11, VAR_12);
 if (VAR_14)
  goto out;

 if (VAR_11 == VAR_4 && VAR_12->rlim_cur == 0) {






  VAR_12->rlim_cur = 1;
 }

 VAR_13 = VAR_10->signal->rlim + VAR_11;
 FUNC_4(VAR_10->group_leader);
 if ((VAR_12->rlim_max <= VAR_13->rlim_max) ||
    FUNC_0(VAR_0))
  *VAR_13 = *VAR_12;
 else
  VAR_14 = -VAR_2;
 FUNC_5(VAR_10->group_leader);

 if (VAR_14 || VAR_11 != VAR_4)
  goto out;







 if (VAR_12->rlim_cur == VAR_6)
  goto out;

 FUNC_6(VAR_10, VAR_12->rlim_cur);
out:
 if (VAR_10 != VAR_7)
  FUNC_2(&VAR_9);
 return VAR_14;
}
