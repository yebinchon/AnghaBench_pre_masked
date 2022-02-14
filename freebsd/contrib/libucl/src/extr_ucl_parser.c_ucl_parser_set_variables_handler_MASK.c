
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_variable_handler ;
struct ucl_parser {void* var_data; int var_handler; } ;



void
FUNC_0 (struct ucl_parser *VAR_0,
  ucl_variable_handler VAR_1, void *VAR_2)
{
 VAR_0->var_handler = VAR_1;
 VAR_0->var_data = VAR_2;
}
