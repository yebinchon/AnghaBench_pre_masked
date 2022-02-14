
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dt_lib_path; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_7__ {char* dir_path; } ;
typedef TYPE_2__ dt_dirpath_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(dtrace_hdl_t *VAR_2, const char *VAR_3, uintptr_t VAR_4)
{
 dt_dirpath_t *VAR_5 = FUNC_0(&VAR_2->dt_lib_path);
 char *VAR_6;

 if (VAR_3 == ((void*)0))
  return (FUNC_1(VAR_2, VAR_0));

 if ((VAR_6 = FUNC_3(VAR_3)) == ((void*)0))
  return (FUNC_1(VAR_2, VAR_1));

 FUNC_2(VAR_5->dir_path);
 VAR_5->dir_path = VAR_6;

 return (0);
}
