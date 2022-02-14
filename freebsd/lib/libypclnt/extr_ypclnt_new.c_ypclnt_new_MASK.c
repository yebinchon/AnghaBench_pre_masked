
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* server; struct TYPE_5__* map; struct TYPE_5__* domain; } ;
typedef TYPE_1__ ypclnt_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (char const*) ;

ypclnt_t *
FUNC_3(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 ypclnt_t *VAR_3;

 if ((VAR_3 = FUNC_0(1, sizeof *VAR_3)) == ((void*)0))
  return (((void*)0));
 if (VAR_0 != ((void*)0) && (VAR_3->domain = FUNC_2(VAR_0)) == ((void*)0))
  goto fail;
 if (VAR_1 != ((void*)0) && (VAR_3->map = FUNC_2(VAR_1)) == ((void*)0))
  goto fail;
 if (VAR_2 != ((void*)0) && (VAR_3->server = FUNC_2(VAR_2)) == ((void*)0))
  goto fail;
 return (VAR_3);
 fail:
 FUNC_1(VAR_3->domain);
 FUNC_1(VAR_3->map);
 FUNC_1(VAR_3->server);
 FUNC_1(VAR_3);
 return (((void*)0));
}
