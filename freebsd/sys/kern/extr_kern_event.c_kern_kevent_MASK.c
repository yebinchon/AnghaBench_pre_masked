
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct kevent_copyops {int dummy; } ;
struct file {int dummy; } ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct thread*,int,int *,struct file**) ;
 int FUNC_4 (struct thread*,struct file*,int,int,struct kevent_copyops*,struct timespec const*) ;

int
FUNC_5(struct thread *VAR_2, int VAR_3, int VAR_4, int VAR_5,
    struct kevent_copyops *VAR_6, const struct timespec *VAR_7)
{
 cap_rights_t VAR_8;
 struct file *VAR_9;
 int VAR_10;

 FUNC_0(&VAR_8);
 if (VAR_4 > 0)
  FUNC_1(&VAR_8, VAR_0);
 if (VAR_5 > 0)
  FUNC_1(&VAR_8, VAR_1);
 VAR_10 = FUNC_3(VAR_2, VAR_3, &VAR_8, &VAR_9);
 if (VAR_10 != 0)
  return (VAR_10);

 VAR_10 = FUNC_4(VAR_2, VAR_9, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_9, VAR_2);

 return (VAR_10);
}
