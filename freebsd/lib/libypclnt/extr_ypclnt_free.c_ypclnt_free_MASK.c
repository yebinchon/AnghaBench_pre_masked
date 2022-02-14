
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* error; struct TYPE_4__* server; struct TYPE_4__* map; struct TYPE_4__* domain; } ;
typedef TYPE_1__ ypclnt_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(ypclnt_t *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  FUNC_0(VAR_0->domain);
  FUNC_0(VAR_0->map);
  FUNC_0(VAR_0->server);
  FUNC_0(VAR_0->error);
  FUNC_0(VAR_0);
 }
}
