
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dt_stdcmode; int * dt_pcb; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(dtrace_hdl_t *VAR_6, const char *VAR_7, uintptr_t VAR_8)
{
 if (VAR_7 == ((void*)0))
  return (FUNC_0(VAR_6, VAR_5));

 if (VAR_6->dt_pcb != ((void*)0))
  return (FUNC_0(VAR_6, VAR_4));

 if (FUNC_1(VAR_7, "a") == 0)
  VAR_6->dt_stdcmode = VAR_0;
 else if (FUNC_1(VAR_7, "c") == 0)
  VAR_6->dt_stdcmode = VAR_1;
 else if (FUNC_1(VAR_7, "s") == 0)
  VAR_6->dt_stdcmode = VAR_2;
 else if (FUNC_1(VAR_7, "t") == 0)
  VAR_6->dt_stdcmode = VAR_3;
 else
  return (FUNC_0(VAR_6, VAR_5));

 return (0);
}
