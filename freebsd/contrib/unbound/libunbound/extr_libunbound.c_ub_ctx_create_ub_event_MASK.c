
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_event_base {int dummy; } ;
struct ub_ctx {int dothread; struct ub_event_base* event_base; scalar_t__ created_bg; } ;


 struct ub_ctx* FUNC_0 () ;

struct ub_ctx*
FUNC_1(struct ub_event_base* VAR_0)
{
 struct ub_ctx* VAR_1 = FUNC_0();
 if(!VAR_1)
  return ((void*)0);

 VAR_1->created_bg = 0;
 VAR_1->dothread = 1;

 VAR_1->event_base = VAR_0;
 return VAR_1;
}
