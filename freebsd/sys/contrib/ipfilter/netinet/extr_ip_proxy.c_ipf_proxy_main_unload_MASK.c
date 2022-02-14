
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* apr_unload ) () ;struct TYPE_4__* apr_next; scalar_t__ apr_p; } ;
typedef TYPE_1__ aproxy_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2()
{
 aproxy_t *VAR_2;

 for (VAR_2 = VAR_1; VAR_2->apr_p; VAR_2++)
  if (VAR_2->apr_unload != ((void*)0))
   (*VAR_2->apr_unload)();
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->apr_next)
  if (VAR_2->apr_unload != ((void*)0))
   (*VAR_2->apr_unload)();

 return 0;
}
