
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int dothread; int event_base; scalar_t__ created_bg; } ;
struct event_base {int dummy; } ;


 struct ub_ctx* FUNC_0 () ;
 int FUNC_1 (struct ub_ctx*) ;
 int FUNC_2 (struct event_base*) ;

struct ub_ctx*
FUNC_3(struct event_base* VAR_0)
{
 struct ub_ctx* VAR_1 = FUNC_0();
 if(!VAR_1)
  return ((void*)0);

 VAR_1->created_bg = 0;
 VAR_1->dothread = 1;

 VAR_1->event_base = FUNC_2(VAR_0);
 if (!VAR_1->event_base) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }
 return VAR_1;
}
