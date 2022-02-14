
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_event_ {int dummy; } ;
struct subscription {struct wps_event_* current_event; } ;


 int FUNC_0 (struct wps_event_*) ;
 struct wps_event_* FUNC_1 (struct subscription*) ;

void FUNC_2(struct subscription *VAR_0)
{
 struct wps_event_ *VAR_1;
 while ((VAR_1 = FUNC_1(VAR_0)) != ((void*)0))
  FUNC_0(VAR_1);
 if (VAR_0->current_event) {
  FUNC_0(VAR_0->current_event);

 }
}
