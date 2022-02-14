
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dt_pcb; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (size_t) ;
 int * FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(dtrace_hdl_t *VAR_3, const char *VAR_4, uintptr_t VAR_5)
{
 char *VAR_6;
 size_t VAR_7;
 const char *VAR_8 = (const char *)VAR_5;

 if (VAR_8 == ((void*)0) || VAR_4 == ((void*)0))
  return (FUNC_2(VAR_3, VAR_1));

 if (VAR_3->dt_pcb != ((void*)0))
  return (FUNC_2(VAR_3, VAR_0));

 VAR_7 = FUNC_5(VAR_8) + FUNC_5(VAR_4) + 1;
 VAR_6 = FUNC_0(VAR_7);

 (void) FUNC_4(VAR_6, VAR_8);
 (void) FUNC_3(VAR_6, VAR_4);

 if (FUNC_1(VAR_3, VAR_6) == ((void*)0))
  return (FUNC_2(VAR_3, VAR_2));

 return (0);
}
