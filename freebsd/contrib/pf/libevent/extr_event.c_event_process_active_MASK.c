
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_list {int dummy; } ;
struct event_base {int nactivequeues; struct event_list** activequeues; int event_count_active; } ;
struct event {short ev_ncalls; short* ev_pncalls; int ev_arg; int ev_res; scalar_t__ ev_fd; int (* ev_callback ) (int,int ,int ) ;} ;


 int VAR_0 ;
 struct event* FUNC_0 (struct event_list*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct event_base*,struct event*,int ) ;
 int FUNC_3 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct event_base *VAR_2)
{
 struct event *VAR_3;
 struct event_list *VAR_4 = ((void*)0);
 int VAR_5;
 short VAR_6;

 if (!VAR_2->event_count_active)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_2->nactivequeues; ++VAR_5) {
  if (FUNC_0(VAR_2->activequeues[VAR_5]) != ((void*)0)) {
   VAR_4 = VAR_2->activequeues[VAR_5];
   break;
  }
 }

 FUNC_1(VAR_4 != ((void*)0));

 for (VAR_3 = FUNC_0(VAR_4); VAR_3; VAR_3 = FUNC_0(VAR_4)) {
  FUNC_2(VAR_2, VAR_3, VAR_0);


  VAR_6 = VAR_3->ev_ncalls;
  VAR_3->ev_pncalls = &VAR_6;
  while (VAR_6) {
   VAR_6--;
   VAR_3->ev_ncalls = VAR_6;
   (*VAR_3->ev_callback)((int)VAR_3->ev_fd, VAR_3->ev_res, VAR_3->ev_arg);
   if (VAR_1)
    return;
  }
 }
}
