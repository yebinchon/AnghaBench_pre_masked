
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* zn_handle; } ;
typedef TYPE_1__ zfs_node_t ;
struct TYPE_12__ {int zfs_hdl; } ;
typedef TYPE_2__ zfs_handle_t ;
typedef int avl_tree_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(zfs_handle_t *VAR_0, void *VAR_1)
{
 avl_tree_t *VAR_2 = VAR_1;
 zfs_node_t *VAR_3;
 zfs_node_t VAR_4;

 VAR_4.zn_handle = VAR_0;
 VAR_3 = FUNC_1(VAR_2, &VAR_4, ((void*)0));
 if (VAR_3) {






  FUNC_5(VAR_3->zn_handle);
  FUNC_2(VAR_2, VAR_3);
  FUNC_3(VAR_3);
 }

 VAR_3 = FUNC_4(VAR_0->zfs_hdl, sizeof (zfs_node_t));
 VAR_3->zn_handle = VAR_0;
 FUNC_0(VAR_2, VAR_3);

 return (0);
}
