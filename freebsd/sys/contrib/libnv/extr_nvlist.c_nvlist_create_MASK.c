
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nvl_flags; int nvl_magic; int nvl_head; int * nvl_array_next; int * nvl_parent; scalar_t__ nvl_error; } ;
typedef TYPE_1__ nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;

nvlist_t *
FUNC_3(int VAR_2)
{
 nvlist_t *VAR_3;

 FUNC_0((VAR_2 & ~(VAR_1)) == 0);

 VAR_3 = FUNC_2(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 VAR_3->nvl_error = 0;
 VAR_3->nvl_flags = VAR_2;
 VAR_3->nvl_parent = ((void*)0);
 VAR_3->nvl_array_next = ((void*)0);
 FUNC_1(&VAR_3->nvl_head);
 VAR_3->nvl_magic = VAR_0;

 return (VAR_3);
}
