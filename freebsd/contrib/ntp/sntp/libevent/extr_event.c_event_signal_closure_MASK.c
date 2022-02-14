
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int event_break; } ;
struct event {short ev_ncalls; short* ev_pncalls; int ev_arg; int ev_res; int ev_fd; int (* ev_callback ) (int ,int ,int ) ;} ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_3(struct event_base *VAR_1, struct event *VAR_2)
{
 short VAR_3;
 int VAR_4;


 VAR_3 = VAR_2->ev_ncalls;
 if (VAR_3 != 0)
  VAR_2->ev_pncalls = &VAR_3;
 FUNC_1(VAR_1, VAR_0);
 while (VAR_3) {
  VAR_3--;
  VAR_2->ev_ncalls = VAR_3;
  if (VAR_3 == 0)
   VAR_2->ev_pncalls = ((void*)0);
  (*VAR_2->ev_callback)(VAR_2->ev_fd, VAR_2->ev_res, VAR_2->ev_arg);

  FUNC_0(VAR_1, VAR_0);
  VAR_4 = VAR_1->event_break;
  FUNC_1(VAR_1, VAR_0);

  if (VAR_4) {
   if (VAR_3 != 0)
    VAR_2->ev_pncalls = ((void*)0);
   return;
  }
 }
}
