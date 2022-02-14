
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct kqueue {int kq_refcnt; } ;
struct kevent_copyops {int dummy; } ;


 int FUNC_0 (struct kqueue*) ;
 int FUNC_1 (struct kqueue*,struct thread*) ;
 int FUNC_2 (struct kqueue*) ;
 int FUNC_3 (struct kqueue*,struct thread*,int,int,struct kevent_copyops*,int *) ;

int
FUNC_4(struct thread *VAR_0, int VAR_1,
    struct kevent_copyops *VAR_2)
{
 struct kqueue VAR_3 = {};
 int VAR_4;

 FUNC_2(&VAR_3);
 VAR_3.kq_refcnt = 1;
 VAR_4 = FUNC_3(&VAR_3, VAR_0, VAR_1, VAR_1, VAR_2, ((void*)0));
 FUNC_1(&VAR_3, VAR_0);
 FUNC_0(&VAR_3);
 return (VAR_4);
}
