
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_signal {void (* callback ) (int,void*) ;int * ev_signal; void* cb_arg; struct comm_base* base; } ;
struct comm_base {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;

struct comm_signal*
FUNC_2(struct comm_base* VAR_0,
        void (*VAR_1)(int, void*), void* VAR_2)
{
 struct comm_signal* VAR_3 = (struct comm_signal*)FUNC_1(
  sizeof(struct comm_signal));
 if(!VAR_3) {
  FUNC_0("malloc failed");
  return ((void*)0);
 }
 VAR_3->base = VAR_0;
 VAR_3->callback = VAR_1;
 VAR_3->cb_arg = VAR_2;
 VAR_3->ev_signal = ((void*)0);
 return VAR_3;
}
