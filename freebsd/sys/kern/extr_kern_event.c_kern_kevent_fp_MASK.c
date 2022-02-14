
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct kqueue {int dummy; } ;
struct kevent_copyops {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,struct kqueue**) ;
 int FUNC_1 (struct kqueue*,struct thread*,int,int,struct kevent_copyops*,struct timespec const*) ;
 int FUNC_2 (struct kqueue*,int ) ;

int
FUNC_3(struct thread *VAR_0, struct file *VAR_1, int VAR_2, int VAR_3,
    struct kevent_copyops *VAR_4, const struct timespec *VAR_5)
{
 struct kqueue *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_7 = FUNC_1(VAR_6, VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_6, 0);
 return (VAR_7);
}
