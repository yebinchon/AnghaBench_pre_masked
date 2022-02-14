
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* dt_ld_path; int * dt_pcb; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(dtrace_hdl_t *VAR_3, const char *VAR_4, uintptr_t VAR_5)
{
 char *VAR_6;

 if (VAR_4 == ((void*)0))
  return (FUNC_0(VAR_3, VAR_1));

 if (VAR_3->dt_pcb != ((void*)0))
  return (FUNC_0(VAR_3, VAR_0));

 if ((VAR_6 = FUNC_2(VAR_4)) == ((void*)0))
  return (FUNC_0(VAR_3, VAR_2));

 FUNC_1(VAR_3->dt_ld_path);
 VAR_3->dt_ld_path = VAR_6;

 return (0);
}
