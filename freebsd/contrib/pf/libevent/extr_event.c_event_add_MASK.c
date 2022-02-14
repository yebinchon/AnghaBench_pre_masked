
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct eventop {int (* add ) (void*,struct event*) ;} ;
struct event_base {void* evbase; struct eventop* evsel; } ;
struct event {int ev_events; int ev_flags; int ev_res; int ev_callback; int ev_timeout; scalar_t__* ev_pncalls; scalar_t__ ev_ncalls; struct event_base* ev_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct event_base*,struct event*,int) ;
 int FUNC_3 (struct event_base*,struct event*,int) ;
 int FUNC_4 (struct timeval*) ;
 int FUNC_5 (void*,struct event*) ;
 int FUNC_6 (void*,struct event*) ;
 int FUNC_7 (struct timeval*,struct timeval*,int *) ;

int
FUNC_8(struct event *VAR_9, struct timeval *VAR_10)
{
 struct event_base *VAR_11 = VAR_9->ev_base;
 const struct eventop *VAR_12 = VAR_11->evsel;
 void *VAR_13 = VAR_11->evbase;

 FUNC_1((
   "event_add: event: %p, %s%s%scall %p",
   VAR_9,
   VAR_9->ev_events & VAR_5 ? "EV_READ " : " ",
   VAR_9->ev_events & VAR_8 ? "EV_WRITE " : " ",
   VAR_10 ? "EV_TIMEOUT " : " ",
   VAR_9->ev_callback));

 FUNC_0(!(VAR_9->ev_flags & ~VAR_1));

 if (VAR_10 != ((void*)0)) {
  struct timeval VAR_14;

  if (VAR_9->ev_flags & VAR_4)
   FUNC_3(VAR_11, VAR_9, VAR_4);




  if ((VAR_9->ev_flags & VAR_0) &&
      (VAR_9->ev_res & VAR_7)) {



   if (VAR_9->ev_ncalls && VAR_9->ev_pncalls) {

    *VAR_9->ev_pncalls = 0;
   }

   FUNC_3(VAR_11, VAR_9, VAR_0);
  }

  FUNC_4(&VAR_14);
  FUNC_7(&VAR_14, VAR_10, &VAR_9->ev_timeout);

  FUNC_1((
    "event_add: timeout in %d seconds, call %p",
    VAR_10->tv_sec, VAR_9->ev_callback));

  FUNC_2(VAR_11, VAR_9, VAR_4);
 }

 if ((VAR_9->ev_events & (VAR_5|VAR_8)) &&
     !(VAR_9->ev_flags & (VAR_2|VAR_0))) {
  FUNC_2(VAR_11, VAR_9, VAR_2);

  return (VAR_12->add(VAR_13, VAR_9));
 } else if ((VAR_9->ev_events & VAR_6) &&
     !(VAR_9->ev_flags & VAR_3)) {
  FUNC_2(VAR_11, VAR_9, VAR_3);

  return (VAR_12->add(VAR_13, VAR_9));
 }

 return (0);
}
