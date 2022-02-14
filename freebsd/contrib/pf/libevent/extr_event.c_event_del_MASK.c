
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventop {int (* del ) (void*,struct event*) ;} ;
struct event_base {void* evbase; struct eventop* evsel; } ;
struct event {int ev_flags; scalar_t__* ev_pncalls; scalar_t__ ev_ncalls; struct event_base* ev_base; int ev_callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct event_base*,struct event*,int) ;
 int FUNC_3 (void*,struct event*) ;
 int FUNC_4 (void*,struct event*) ;

int
FUNC_5(struct event *VAR_5)
{
 struct event_base *VAR_6;
 const struct eventop *VAR_7;
 void *VAR_8;

 FUNC_1(("event_del: %p, callback %p",
   VAR_5, VAR_5->ev_callback));


 if (VAR_5->ev_base == ((void*)0))
  return (-1);

 VAR_6 = VAR_5->ev_base;
 VAR_7 = VAR_6->evsel;
 VAR_8 = VAR_6->evbase;

 FUNC_0(!(VAR_5->ev_flags & ~VAR_1));


 if (VAR_5->ev_ncalls && VAR_5->ev_pncalls) {

  *VAR_5->ev_pncalls = 0;
 }

 if (VAR_5->ev_flags & VAR_4)
  FUNC_2(VAR_6, VAR_5, VAR_4);

 if (VAR_5->ev_flags & VAR_0)
  FUNC_2(VAR_6, VAR_5, VAR_0);

 if (VAR_5->ev_flags & VAR_2) {
  FUNC_2(VAR_6, VAR_5, VAR_2);
  return (VAR_7->del(VAR_8, VAR_5));
 } else if (VAR_5->ev_flags & VAR_3) {
  FUNC_2(VAR_6, VAR_5, VAR_3);
  return (VAR_7->del(VAR_8, VAR_5));
 }

 return (0);
}
