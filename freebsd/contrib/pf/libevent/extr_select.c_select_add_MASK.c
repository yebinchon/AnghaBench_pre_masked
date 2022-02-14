
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selectop {int event_fds; int event_fdsz; struct event** event_w_by_fd; int event_writeset_in; struct event** event_r_by_fd; int event_readset_in; } ;
struct event {int ev_events; int ev_fd; } ;
typedef int fd_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct selectop*) ;
 int FUNC_2 (struct event*) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct selectop*,int) ;

int
FUNC_5(void *VAR_4, struct event *VAR_5)
{
 struct selectop *VAR_6 = VAR_4;

 if (VAR_5->ev_events & VAR_1)
  return (FUNC_2(VAR_5));

 FUNC_1(VAR_6);




 if (VAR_6->event_fds < VAR_5->ev_fd) {
  int VAR_7 = VAR_6->event_fdsz;

  if (VAR_7 < sizeof(fd_mask))
   VAR_7 = sizeof(fd_mask);

  while (VAR_7 <
      (FUNC_3(VAR_5->ev_fd + 1, VAR_3) * sizeof(fd_mask)))
   VAR_7 *= 2;

  if (VAR_7 != VAR_6->event_fdsz) {
   if (FUNC_4(VAR_6, VAR_7)) {
    FUNC_1(VAR_6);
    return (-1);
   }
  }

  VAR_6->event_fds = VAR_5->ev_fd;
 }

 if (VAR_5->ev_events & VAR_0) {
  FUNC_0(VAR_5->ev_fd, VAR_6->event_readset_in);
  VAR_6->event_r_by_fd[VAR_5->ev_fd] = VAR_5;
 }
 if (VAR_5->ev_events & VAR_2) {
  FUNC_0(VAR_5->ev_fd, VAR_6->event_writeset_in);
  VAR_6->event_w_by_fd[VAR_5->ev_fd] = VAR_5;
 }
 FUNC_1(VAR_6);

 return (0);
}
