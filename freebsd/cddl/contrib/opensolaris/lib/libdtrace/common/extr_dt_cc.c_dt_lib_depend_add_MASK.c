
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
typedef int dt_list_t ;
struct TYPE_7__ {struct TYPE_7__* dtld_libpath; int * dtld_library; } ;
typedef TYPE_1__ dt_lib_depend_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 int * FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*,char const*,int) ;
 char* FUNC_8 (char const*,char) ;

int
FUNC_9(dtrace_hdl_t *VAR_3, dt_list_t *VAR_4, const char *VAR_5)
{
 dt_lib_depend_t *VAR_6;
 const char *VAR_7;

 FUNC_0(VAR_5 != ((void*)0));

 if ((VAR_7 = FUNC_8(VAR_5, '/')) == ((void*)0))
  return (FUNC_4(VAR_3, VAR_1));

 if ((VAR_6 = FUNC_5(VAR_3, sizeof (dt_lib_depend_t))) == ((void*)0))
  return (-1);

 if ((VAR_6->dtld_libpath = FUNC_1(VAR_3, VAR_2)) == ((void*)0)) {
  FUNC_2(VAR_3, VAR_6);
  return (-1);
 }

 (void) FUNC_7(VAR_6->dtld_libpath, VAR_5, VAR_7 - VAR_5 + 2);
 if ((VAR_6->dtld_library = FUNC_6(VAR_5)) == ((void*)0)) {
  FUNC_2(VAR_3, VAR_6->dtld_libpath);
  FUNC_2(VAR_3, VAR_6);
  return (FUNC_4(VAR_3, VAR_0));
 }

 FUNC_3(VAR_4, VAR_6);
 return (0);
}
