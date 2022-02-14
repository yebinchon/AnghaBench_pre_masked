
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selectop {size_t event_fds; int ** event_w_by_fd; int event_writeset_in; int ** event_r_by_fd; int event_readset_in; } ;
struct event {int ev_events; size_t ev_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct selectop*) ;
 int FUNC_2 (struct event*) ;

int
FUNC_3(void *VAR_3, struct event *VAR_4)
{
 struct selectop *VAR_5 = VAR_3;

 FUNC_1(VAR_5);
 if (VAR_4->ev_events & VAR_1)
  return (FUNC_2(VAR_4));

 if (VAR_5->event_fds < VAR_4->ev_fd) {
  FUNC_1(VAR_5);
  return (0);
 }

 if (VAR_4->ev_events & VAR_0) {
  FUNC_0(VAR_4->ev_fd, VAR_5->event_readset_in);
  VAR_5->event_r_by_fd[VAR_4->ev_fd] = ((void*)0);
 }

 if (VAR_4->ev_events & VAR_2) {
  FUNC_0(VAR_4->ev_fd, VAR_5->event_writeset_in);
  VAR_5->event_w_by_fd[VAR_4->ev_fd] = ((void*)0);
 }

 FUNC_1(VAR_5);
 return (0);
}
