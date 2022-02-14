
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_event_base {int dummy; } ;
struct event_base {int dummy; } ;
struct ev_loop {int dummy; } ;


 int FUNC_0 (struct event_base*) ;
 int FUNC_1 (struct ev_loop*) ;
 char* FUNC_2 (struct event_base*) ;
 char* FUNC_3 () ;
 char* FUNC_4 (int ) ;
 struct event_base* FUNC_5 (struct ub_event_base*) ;

void
FUNC_6(struct ub_event_base* VAR_0, const char** VAR_1, const char** VAR_2,
 const char** VAR_3)
{
 struct event_base* VAR_4 = FUNC_5(VAR_0);




 FUNC_0(VAR_4);
 *VAR_1 = "pluggable-event";
 *VAR_2 = FUNC_3();
 *VAR_3 = "not obtainable";


}
