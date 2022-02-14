
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollop {int* idxplus1_by_fd; int nfds; struct pollfd* event_set; int ** event_w_back; int ** event_r_back; } ;
struct pollfd {int events; size_t fd; } ;
struct event {int ev_events; size_t ev_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct event*) ;
 int FUNC_1 (struct pollfd*,struct pollfd*,int) ;
 int FUNC_2 (struct pollop*) ;

int
FUNC_3(void *VAR_5, struct event *VAR_6)
{
 struct pollop *VAR_7 = VAR_5;
 struct pollfd *VAR_8 = ((void*)0);
 int VAR_9;

 if (VAR_6->ev_events & VAR_1)
  return (FUNC_0(VAR_6));

 if (!(VAR_6->ev_events & (VAR_0|VAR_2)))
  return (0);

 FUNC_2(VAR_7);
 VAR_9 = VAR_7->idxplus1_by_fd[VAR_6->ev_fd] - 1;
 if (VAR_9 < 0)
  return (-1);


 VAR_8 = &VAR_7->event_set[VAR_9];
 if (VAR_6->ev_events & VAR_0) {
  VAR_8->events &= ~VAR_3;
  VAR_7->event_r_back[VAR_9] = ((void*)0);
 }
 if (VAR_6->ev_events & VAR_2) {
  VAR_8->events &= ~VAR_4;
  VAR_7->event_w_back[VAR_9] = ((void*)0);
 }
 FUNC_2(VAR_7);
 if (VAR_8->events)

  return (0);


 VAR_7->idxplus1_by_fd[VAR_6->ev_fd] = 0;

 --VAR_7->nfds;
 if (VAR_9 != VAR_7->nfds) {




  FUNC_1(&VAR_7->event_set[VAR_9], &VAR_7->event_set[VAR_7->nfds],
         sizeof(struct pollfd));
  VAR_7->event_r_back[VAR_9] = VAR_7->event_r_back[VAR_7->nfds];
  VAR_7->event_w_back[VAR_9] = VAR_7->event_w_back[VAR_7->nfds];
  VAR_7->idxplus1_by_fd[VAR_7->event_set[VAR_9].fd] = VAR_9 + 1;
 }

 FUNC_2(VAR_7);
 return (0);
}
