
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_4__ {int * nvl_array_next; int nvl_flags; } ;
typedef TYPE_1__ nvlist_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void
FUNC_2(nvlist_t *VAR_1, nvpair_t *VAR_2)
{

 FUNC_0(VAR_1);

 if (VAR_2 != ((void*)0)) {
  VAR_1->nvl_flags |= VAR_0;
 } else {
  VAR_1->nvl_flags &= ~VAR_0;
  FUNC_1(VAR_1->nvl_array_next);
 }

 VAR_1->nvl_array_next = VAR_2;
}
