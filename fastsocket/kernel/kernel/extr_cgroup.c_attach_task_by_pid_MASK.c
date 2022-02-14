
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct task_struct {int flags; struct task_struct* group_leader; } ;
struct cred {scalar_t__ euid; scalar_t__ uid; scalar_t__ suid; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct cgroup*,struct task_struct*) ;
 int FUNC_2 (struct cgroup*,struct task_struct*) ;
 int FUNC_3 (struct cgroup*) ;
 int FUNC_4 () ;
 struct task_struct* VAR_4 ;
 struct cred* FUNC_5 () ;
 struct task_struct* FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct task_struct*) ;
 int FUNC_12 (struct task_struct*) ;

__attribute__((used)) static int FUNC_13(struct cgroup *VAR_5, u64 VAR_6, bool VAR_7)
{
 struct task_struct *VAR_8;
 const struct cred *VAR_9 = FUNC_5(), *VAR_10;
 int VAR_11;

 if (!FUNC_3(VAR_5))
  return -VAR_1;

 if (VAR_6) {
  FUNC_9();
  VAR_8 = FUNC_6(VAR_6);
  if (!VAR_8) {
   FUNC_10();
   FUNC_4();
   return -VAR_2;
  }
  if (VAR_7) {






   VAR_8 = VAR_8->group_leader;
  } else if (VAR_8->flags & VAR_3) {

   FUNC_10();
   FUNC_4();
   return -VAR_2;
  }





  VAR_10 = FUNC_0(VAR_8);
  if (VAR_9->euid &&
      VAR_9->euid != VAR_10->uid &&
      VAR_9->euid != VAR_10->suid) {
   FUNC_10();
   FUNC_4();
   return -VAR_0;
  }
  FUNC_7(VAR_8);
  FUNC_10();
 } else {
  if (VAR_7)
   VAR_8 = VAR_4->group_leader;
  else
   VAR_8 = VAR_4;
  FUNC_7(VAR_8);
 }

 if (VAR_7) {
  FUNC_11(VAR_8);
  VAR_11 = FUNC_1(VAR_5, VAR_8);
  FUNC_12(VAR_8);
 } else {
  VAR_11 = FUNC_2(VAR_5, VAR_8);
 }
 FUNC_8(VAR_8);
 FUNC_4();
 return VAR_11;
}
