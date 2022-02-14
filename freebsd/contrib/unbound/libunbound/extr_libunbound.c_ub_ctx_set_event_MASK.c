
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_event_base {int dummy; } ;
struct ub_ctx {int dothread; int cfglock; scalar_t__ created_bg; struct ub_event_base* event_base; int * event_worker; } ;
struct event_base {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ub_event_base* FUNC_3 (struct event_base*) ;
 struct event_base* FUNC_4 (struct ub_event_base*) ;

int
FUNC_5(struct ub_ctx* VAR_2, struct event_base* VAR_3) {
 struct ub_event_base* VAR_4;

 if (!VAR_2 || !VAR_2->event_base || !VAR_3) {
  return VAR_0;
 }
 if (FUNC_4(VAR_2->event_base) == VAR_3) {

  return VAR_1;
 }

 FUNC_1(&VAR_2->cfglock);

 FUNC_0(VAR_2->event_worker);
 VAR_2->event_worker = ((void*)0);
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  VAR_2->event_base = VAR_4;
 VAR_2->created_bg = 0;
 VAR_2->dothread = 1;
 FUNC_2(&VAR_2->cfglock);
 return VAR_4 ? VAR_1 : VAR_0;
}
