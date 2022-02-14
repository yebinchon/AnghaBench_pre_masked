
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_6__ {int * nvl_parent; } ;
typedef TYPE_1__ nvlist_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* FUNC_1 (int *) ;

const nvlist_t *
FUNC_2(const nvlist_t *VAR_0, void **VAR_1)
{
 nvpair_t *VAR_2;

 FUNC_0(VAR_0);

 VAR_2 = VAR_0->nvl_parent;
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_2;
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 return (FUNC_1(VAR_2));
}
