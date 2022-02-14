
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* dt_provmod; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_5__ {char* dp_name; struct TYPE_5__* dp_next; } ;
typedef TYPE_2__ dt_provmod_t ;



int
FUNC_0(dtrace_hdl_t *VAR_0, const char **VAR_1, int VAR_2)
{
 dt_provmod_t *VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = VAR_0->dt_provmod; VAR_3 != ((void*)0); VAR_3 = VAR_3->dp_next, VAR_4++) {
  if (VAR_4 < VAR_2)
   VAR_1[VAR_4] = VAR_3->dp_name;
 }

 return (VAR_4);
}
