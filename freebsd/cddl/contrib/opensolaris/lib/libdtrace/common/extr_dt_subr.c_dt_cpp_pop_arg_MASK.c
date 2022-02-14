
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dt_cpp_argc; char** dt_cpp_argv; } ;
typedef TYPE_1__ dtrace_hdl_t ;



char *
FUNC_0(dtrace_hdl_t *VAR_0)
{
 char *VAR_1;

 if (VAR_0->dt_cpp_argc <= 1)
  return (((void*)0));

 VAR_1 = VAR_0->dt_cpp_argv[--VAR_0->dt_cpp_argc];
 VAR_0->dt_cpp_argv[VAR_0->dt_cpp_argc] = ((void*)0);

 return (VAR_1);
}
