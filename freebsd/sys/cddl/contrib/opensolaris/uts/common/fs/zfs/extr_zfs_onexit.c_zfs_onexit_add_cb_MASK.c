
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zo_lock; int zo_actions; } ;
typedef TYPE_1__ zfs_onexit_t ;
struct TYPE_7__ {void (* za_func ) (void*) ;void* za_data; int za_link; } ;
typedef TYPE_2__ zfs_onexit_action_node_t ;
typedef scalar_t__ uint64_t ;
typedef int minor_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_1__**) ;

int
FUNC_6(minor_t VAR_1, void (*VAR_2)(void *), void *VAR_3,
    uint64_t *VAR_4)
{
 zfs_onexit_t *VAR_5;
 zfs_onexit_action_node_t *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_1, &VAR_5);
 if (VAR_7)
  return (VAR_7);

 VAR_6 = FUNC_0(sizeof (zfs_onexit_action_node_t), VAR_0);
 FUNC_2(&VAR_6->za_link);
 VAR_6->za_func = VAR_2;
 VAR_6->za_data = VAR_3;

 FUNC_3(&VAR_5->zo_lock);
 FUNC_1(&VAR_5->zo_actions, VAR_6);
 FUNC_4(&VAR_5->zo_lock);
 if (VAR_4)
  *VAR_4 = (uint64_t)(uintptr_t)VAR_6;

 return (0);
}
