
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int (* zpool_iter_f ) (int *,void*) ;
typedef int zpool_handle_t ;
struct TYPE_9__ {int libzfs_pool_iter; int libzfs_ns_avl; } ;
typedef TYPE_1__ libzfs_handle_t ;
struct TYPE_10__ {int cn_name; } ;
typedef TYPE_2__ config_node_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int **) ;
 scalar_t__ FUNC_4 (int ) ;

int
FUNC_5(libzfs_handle_t *VAR_0, zpool_iter_f VAR_1, void *VAR_2)
{
 config_node_t *VAR_3;
 zpool_handle_t *VAR_4;
 int VAR_5;







 if (!VAR_0->libzfs_pool_iter && FUNC_0(VAR_0) != 0)
  return (-1);

 VAR_0->libzfs_pool_iter++;
 for (VAR_3 = FUNC_1(VAR_0->libzfs_ns_avl); VAR_3 != ((void*)0);
     VAR_3 = FUNC_2(VAR_0->libzfs_ns_avl, VAR_3)) {

  if (FUNC_4(VAR_3->cn_name))
   continue;

  if (FUNC_3(VAR_0, VAR_3->cn_name, &VAR_4) != 0) {
   VAR_0->libzfs_pool_iter--;
   return (-1);
  }

  if (VAR_4 == ((void*)0))
   continue;

  if ((VAR_5 = VAR_1(VAR_4, VAR_2)) != 0) {
   VAR_0->libzfs_pool_iter--;
   return (VAR_5);
  }
 }
 VAR_0->libzfs_pool_iter--;

 return (0);
}
