
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zn_handle; } ;
typedef TYPE_1__ zpool_node_t ;
struct TYPE_8__ {int zl_avl; } ;
typedef TYPE_2__ zpool_list_t ;
typedef int (* zpool_iter_f ) (int ,void*) ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(zpool_list_t *VAR_1, int VAR_2, zpool_iter_f VAR_3,
    void *VAR_4)
{
 zpool_node_t *VAR_5, *VAR_6;
 int VAR_7 = 0;

 for (VAR_5 = FUNC_0(VAR_1->zl_avl); VAR_5 != ((void*)0); VAR_5 = VAR_6) {
  VAR_6 = FUNC_1(VAR_1->zl_avl, VAR_5);
  if (FUNC_2(VAR_5->zn_handle) != VAR_0 ||
      VAR_2)
   VAR_7 |= VAR_3(VAR_5->zn_handle, VAR_4);
 }

 return (VAR_7);
}
