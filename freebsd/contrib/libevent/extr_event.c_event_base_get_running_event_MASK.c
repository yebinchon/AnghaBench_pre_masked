
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int evcb_flags; } ;
struct event_base {struct event_callback* current_event; } ;
struct event {int dummy; } ;


 int FUNC_0 (struct event_base*,int ) ;
 scalar_t__ FUNC_1 (struct event_base*) ;
 int FUNC_2 (struct event_base*,int ) ;
 int VAR_0 ;
 struct event* FUNC_3 (struct event_callback*) ;
 int VAR_1 ;

struct event *
FUNC_4(struct event_base *VAR_2)
{
 struct event *VAR_3 = ((void*)0);
 FUNC_0(VAR_2, VAR_1);
 if (FUNC_1(VAR_2)) {
  struct event_callback *VAR_4 = VAR_2->current_event;
  if (VAR_4->evcb_flags & VAR_0)
   VAR_3 = FUNC_3(VAR_4);
 }
 FUNC_2(VAR_2, VAR_1);
 return VAR_3;
}
