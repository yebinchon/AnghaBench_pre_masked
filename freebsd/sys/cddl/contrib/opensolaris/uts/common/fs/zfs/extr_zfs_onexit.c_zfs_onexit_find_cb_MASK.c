
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zo_actions; int zo_lock; } ;
typedef TYPE_1__ zfs_onexit_t ;
typedef int zfs_onexit_action_node_t ;
typedef scalar_t__ uint64_t ;
typedef int list_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;

__attribute__((used)) static zfs_onexit_action_node_t *
FUNC_4(zfs_onexit_t *VAR_0, uint64_t VAR_1)
{
 zfs_onexit_action_node_t *VAR_2;
 zfs_onexit_action_node_t *VAR_3;
 list_t *VAR_4;

 FUNC_0(FUNC_1(&VAR_0->zo_lock));

 VAR_2 = (zfs_onexit_action_node_t *)(uintptr_t)VAR_1;
 VAR_4 = &VAR_0->zo_actions;
 for (VAR_3 = FUNC_2(VAR_4); VAR_3 != ((void*)0); VAR_3 = FUNC_3(VAR_4, VAR_3)) {
  if (VAR_2 == VAR_3)
   break;
 }
 return (VAR_3);
}
