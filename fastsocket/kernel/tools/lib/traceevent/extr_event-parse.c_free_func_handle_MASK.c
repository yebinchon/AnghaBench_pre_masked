
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent_function_handler {struct pevent_function_handler* next; struct pevent_function_handler* params; struct pevent_function_handler* name; } ;
struct pevent_func_params {struct pevent_func_params* next; struct pevent_func_params* params; struct pevent_func_params* name; } ;


 int FUNC_0 (struct pevent_function_handler*) ;

__attribute__((used)) static void FUNC_1(struct pevent_function_handler *VAR_0)
{
 struct pevent_func_params *VAR_1;

 FUNC_0(VAR_0->name);

 while (VAR_0->params) {
  VAR_1 = VAR_0->params;
  VAR_0->params = VAR_1->next;
  FUNC_0(VAR_1);
 }

 FUNC_0(VAR_0);
}
