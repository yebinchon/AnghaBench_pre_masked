
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dt_linkmode; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(dtrace_hdl_t *VAR_5, const char *VAR_6, uintptr_t VAR_7)
{
 if (VAR_6 == ((void*)0))
  return (FUNC_0(VAR_5, VAR_4));

 if (FUNC_1(VAR_6, "kernel") == 0)
  VAR_5->dt_linkmode = VAR_1;
 else if (FUNC_1(VAR_6, "primary") == 0)
  VAR_5->dt_linkmode = VAR_2;
 else if (FUNC_1(VAR_6, "dynamic") == 0)
  VAR_5->dt_linkmode = VAR_0;
 else if (FUNC_1(VAR_6, "static") == 0)
  VAR_5->dt_linkmode = VAR_3;
 else
  return (FUNC_0(VAR_5, VAR_4));

 return (0);
}
