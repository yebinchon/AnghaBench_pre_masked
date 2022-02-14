
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int u32 ;
struct task_struct {TYPE_1__* sighand; } ;
struct siginfo {int dummy; } ;
struct pid {int dummy; } ;
struct cred {scalar_t__ suid; scalar_t__ uid; } ;
struct TYPE_2__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct siginfo*,struct task_struct*,int,int ) ;
 struct cred* FUNC_1 (struct task_struct*) ;
 struct task_struct* FUNC_2 (struct pid*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*,struct siginfo*,int,int ) ;
 scalar_t__ FUNC_6 (struct siginfo*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_4 ;
 int FUNC_9 (int) ;

int FUNC_10(int VAR_5, struct siginfo *VAR_6, struct pid *VAR_7,
        uid_t VAR_8, uid_t VAR_9, u32 VAR_10)
{
 int VAR_11 = -VAR_0;
 struct task_struct *VAR_12;
 const struct cred *VAR_13;

 if (!FUNC_9(VAR_5))
  return VAR_11;

 FUNC_3(&VAR_4);
 VAR_12 = FUNC_2(VAR_7, VAR_3);
 if (!VAR_12) {
  VAR_11 = -VAR_2;
  goto out_unlock;
 }
 VAR_13 = FUNC_1(VAR_12);
 if (FUNC_6(VAR_6) &&
     VAR_9 != VAR_13->suid && VAR_9 != VAR_13->uid &&
     VAR_8 != VAR_13->suid && VAR_8 != VAR_13->uid) {
  VAR_11 = -VAR_1;
  goto out_unlock;
 }
 VAR_11 = FUNC_5(VAR_12, VAR_6, VAR_5, VAR_10);
 if (VAR_11)
  goto out_unlock;
 if (VAR_5 && VAR_12->sighand) {
  unsigned long VAR_14;
  FUNC_7(&VAR_12->sighand->siglock, VAR_14);
  VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_12, 1, 0);
  FUNC_8(&VAR_12->sighand->siglock, VAR_14);
 }
out_unlock:
 FUNC_4(&VAR_4);
 return VAR_11;
}
