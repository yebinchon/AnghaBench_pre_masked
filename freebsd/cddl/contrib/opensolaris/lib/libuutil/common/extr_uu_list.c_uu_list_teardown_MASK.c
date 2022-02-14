
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ul_debug; } ;
typedef TYPE_1__ uu_list_t ;


 void* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (char*,void*,void*) ;

void *
FUNC_3(uu_list_t *VAR_0, void **VAR_1)
{
 void *VAR_2;




 if (VAR_0->ul_debug && *VAR_1 != ((void*)0))
  FUNC_2("uu_list_teardown(%p, %p): unexpected cookie\n",
      (void *)VAR_0, (void *)VAR_1);

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  FUNC_1(VAR_0, VAR_2);
 return (VAR_2);
}
