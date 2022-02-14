
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_7__ {scalar_t__ nvl_magic; int * nvl_parent; int * nvl_array_next; } ;
typedef TYPE_1__ nvlist_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(nvlist_t *VAR_0)
{
 nvpair_t *VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 FUNC_1();

 FUNC_2(VAR_0);

 while ((VAR_1 = FUNC_4(VAR_0)) != ((void*)0)) {
  FUNC_5(VAR_0, VAR_1);
  FUNC_6(VAR_1);
 }
 if (VAR_0->nvl_array_next != ((void*)0))
  FUNC_7(VAR_0->nvl_array_next);
 VAR_0->nvl_array_next = ((void*)0);
 VAR_0->nvl_parent = ((void*)0);
 VAR_0->nvl_magic = 0;
 FUNC_3(VAR_0);

 FUNC_0();
}
