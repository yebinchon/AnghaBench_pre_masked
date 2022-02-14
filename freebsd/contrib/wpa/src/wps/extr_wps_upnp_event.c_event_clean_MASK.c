
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_event_ {int * http_event; TYPE_1__* s; } ;
struct TYPE_2__ {struct wps_event_* current_event; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct wps_event_ *VAR_0)
{
 if (VAR_0->s->current_event == VAR_0)
  VAR_0->s->current_event = ((void*)0);
 FUNC_0(VAR_0->http_event);
 VAR_0->http_event = ((void*)0);
}
