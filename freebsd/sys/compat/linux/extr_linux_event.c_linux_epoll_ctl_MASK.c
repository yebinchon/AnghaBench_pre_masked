
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_epoll_ctl_args {int op; int fd; int epfd; int event; } ;
struct kevent_copyops {int member_2; int * member_1; struct epoll_copyin_args* member_0; } ;
struct kevent {int flags; } ;
struct file {scalar_t__ f_type; } ;
struct epoll_event {int data; } ;
struct epoll_copyin_args {struct kevent* changelist; } ;
typedef int le ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,struct epoll_event*,int) ;
 int FUNC_2 (struct thread*,struct file*,int ) ;
 int FUNC_3 (struct thread*,int ,int ) ;
 int VAR_9 ;
 int FUNC_4 (struct thread*,struct file*,int ,struct epoll_event*,int*,struct kevent*,int*) ;
 int FUNC_5 (struct file*,struct thread*) ;
 int FUNC_6 (struct thread*,int ,int ,struct file**) ;
 int FUNC_7 (struct thread*,struct file*,int,int ,struct kevent_copyops*,int *) ;
 int FUNC_8 (int ,struct kevent*,struct thread*,int ) ;

int
FUNC_9(struct thread *VAR_10, struct linux_epoll_ctl_args *VAR_11)
{
 struct file *VAR_12, *VAR_13;
 struct epoll_copyin_args VAR_14;
 struct kevent VAR_15[2];
 struct kevent_copyops VAR_16 = { &VAR_14,
     ((void*)0),
     VAR_9};
 struct epoll_event VAR_17;
 cap_rights_t VAR_18;
 int VAR_19;
 int VAR_20 = 0;
 int VAR_21;

 if (VAR_11->op != 129) {
  VAR_21 = FUNC_1(VAR_11->event, &VAR_17, sizeof(VAR_17));
  if (VAR_21 != 0)
   return (VAR_21);
 }

 VAR_21 = FUNC_6(VAR_10, VAR_11->epfd,
     FUNC_0(&VAR_18, VAR_0), &VAR_12);
 if (VAR_21 != 0)
  return (VAR_21);
 if (VAR_12->f_type != VAR_2) {
  VAR_21 = VAR_4;
  goto leave1;
 }


 VAR_21 = FUNC_6(VAR_10, VAR_11->fd, FUNC_0(&VAR_18, VAR_1), &VAR_13);
 if (VAR_21 != 0)
  goto leave1;


 if (VAR_12 == VAR_13) {
  VAR_21 = VAR_4;
  goto leave0;
 }

 VAR_14.changelist = VAR_15;

 if (VAR_11->op != 129) {
  VAR_19 = VAR_6 | VAR_7;
  VAR_21 = FUNC_4(VAR_10, VAR_12, VAR_11->fd, &VAR_17,
      &VAR_19, VAR_15, &VAR_20);
  if (VAR_21 != 0)
   goto leave0;
 }

 switch (VAR_11->op) {
 case 128:
  VAR_21 = FUNC_2(VAR_10, VAR_12, VAR_11->fd);
  if (VAR_21 != 0)
   goto leave0;
  break;

 case 130:




  VAR_15[0].flags &= ~VAR_6;
  VAR_21 = FUNC_8(VAR_11->epfd, &VAR_15[0], VAR_10, VAR_8);
  if (VAR_21 != VAR_5) {
   VAR_21 = VAR_3;
   goto leave0;
  }
  VAR_21 = 0;
  VAR_15[0].flags |= VAR_6;
  break;

 case 129:

  VAR_21 = FUNC_2(VAR_10, VAR_12, VAR_11->fd);
  goto leave0;

 default:
  VAR_21 = VAR_4;
  goto leave0;
 }

 FUNC_3(VAR_10, VAR_11->fd, VAR_17.data);

 VAR_21 = FUNC_7(VAR_10, VAR_12, VAR_20, 0, &VAR_16, ((void*)0));

leave0:
 FUNC_5(VAR_13, VAR_10);

leave1:
 FUNC_5(VAR_12, VAR_10);
 return (VAR_21);
}
