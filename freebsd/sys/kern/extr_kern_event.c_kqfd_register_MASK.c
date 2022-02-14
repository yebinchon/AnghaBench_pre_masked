
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct kqueue {int dummy; } ;
struct kevent {int dummy; } ;
struct file {int dummy; } ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int,int ,struct file**) ;
 int FUNC_3 (struct file*,struct kqueue**) ;
 int FUNC_4 (struct kqueue*,struct kevent*,struct thread*,int) ;
 int FUNC_5 (struct kqueue*,int ) ;

int
FUNC_6(int VAR_1, struct kevent *VAR_2, struct thread *VAR_3, int VAR_4)
{
 struct kqueue *VAR_5;
 struct file *VAR_6;
 cap_rights_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, VAR_1, FUNC_0(&VAR_7, VAR_0), &VAR_6);
 if (VAR_8 != 0)
  return (VAR_8);
 if ((VAR_8 = FUNC_3(VAR_6, &VAR_5)) != 0)
  goto noacquire;

 VAR_8 = FUNC_4(VAR_5, VAR_2, VAR_3, VAR_4);
 FUNC_5(VAR_5, 0);

noacquire:
 FUNC_1(VAR_6, VAR_3);
 return (VAR_8);
}
