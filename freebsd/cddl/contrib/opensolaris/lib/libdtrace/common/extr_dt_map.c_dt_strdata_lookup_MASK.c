
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dt_maxstrdata; char const** dt_strdata; } ;
typedef TYPE_1__ dtrace_hdl_t ;



const char *
FUNC_0(dtrace_hdl_t *VAR_0, int VAR_1)
{
 if (VAR_1 == 0 || VAR_1 > VAR_0->dt_maxstrdata)
  return (((void*)0));

 if (VAR_0->dt_strdata == ((void*)0))
  return (((void*)0));

 return (VAR_0->dt_strdata[VAR_1 - 1]);
}
