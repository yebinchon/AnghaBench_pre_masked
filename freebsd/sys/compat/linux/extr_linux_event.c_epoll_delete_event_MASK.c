
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct kevent_copyops {int member_2; int * member_1; struct epoll_copyin_args* member_0; } ;
struct kevent {int dummy; } ;
struct file {int dummy; } ;
struct epoll_copyin_args {struct kevent* changelist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kevent*,int,int,int,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct thread*,struct file*,int,int ,struct kevent_copyops*,int *) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_3, struct file *VAR_4, int VAR_5, int VAR_6)
{
 struct epoll_copyin_args VAR_7;
 struct kevent VAR_8;
 struct kevent_copyops VAR_9 = { &VAR_7,
     ((void*)0),
     VAR_2};

 VAR_7.changelist = &VAR_8;
 FUNC_0(&VAR_8, VAR_5, VAR_6, VAR_0 | VAR_1, 0, 0, 0);

 return (FUNC_1(VAR_3, VAR_4, 1, 0, &VAR_9, ((void*)0)));
}
