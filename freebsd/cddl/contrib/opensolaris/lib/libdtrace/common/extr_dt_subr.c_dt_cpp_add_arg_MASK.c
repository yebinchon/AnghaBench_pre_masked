
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dt_cpp_argc; int dt_cpp_args; char** dt_cpp_argv; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char**,int) ;
 char** FUNC_2 (char**,int) ;
 char* FUNC_3 (char const*) ;

char *
FUNC_4(dtrace_hdl_t *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 if (VAR_0->dt_cpp_argc == VAR_0->dt_cpp_args) {
  int VAR_3 = VAR_0->dt_cpp_args;
  int VAR_4 = VAR_3 * 2;
  char **VAR_5 = FUNC_2(VAR_0->dt_cpp_argv, sizeof (char *) * VAR_4);

  if (VAR_5 == ((void*)0))
   return (((void*)0));

  FUNC_1(&VAR_5[VAR_3], sizeof (char *) * VAR_3);
  VAR_0->dt_cpp_argv = VAR_5;
  VAR_0->dt_cpp_args = VAR_4;
 }

 if ((VAR_2 = FUNC_3(VAR_1)) == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_0->dt_cpp_argc < VAR_0->dt_cpp_args);
 VAR_0->dt_cpp_argv[VAR_0->dt_cpp_argc++] = VAR_2;
 return (VAR_2);
}
