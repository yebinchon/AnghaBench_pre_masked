
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* apr_load ) () ;scalar_t__ apr_p; } ;
typedef TYPE_1__ aproxy_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

int
FUNC_1()
{
 aproxy_t *VAR_1;

 for (VAR_1 = VAR_0; VAR_1->apr_p; VAR_1++) {
  if (VAR_1->apr_load != ((void*)0))
   (*VAR_1->apr_load)();
 }
 return 0;
}
