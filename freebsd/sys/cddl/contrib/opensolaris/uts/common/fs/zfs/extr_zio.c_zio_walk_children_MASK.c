
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int io_lock; int io_child_list; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_10__ {TYPE_1__* zl_child; TYPE_1__* zl_parent; } ;
typedef TYPE_2__ zio_link_t ;
typedef int list_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,TYPE_2__*) ;

zio_t *
FUNC_4(zio_t *VAR_0, zio_link_t **VAR_1)
{
 list_t *VAR_2 = &VAR_0->io_child_list;

 FUNC_0(FUNC_1(&VAR_0->io_lock));

 *VAR_1 = (*VAR_1 == ((void*)0)) ? FUNC_2(VAR_2) : FUNC_3(VAR_2, *VAR_1);
 if (*VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_0((*VAR_1)->zl_parent == VAR_0);
 return ((*VAR_1)->zl_child);
}
