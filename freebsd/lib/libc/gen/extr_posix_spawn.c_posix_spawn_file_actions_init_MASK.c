
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct __posix_spawn_file_actions {int dummy; } ;
typedef TYPE_1__* posix_spawn_file_actions_t ;
struct TYPE_4__ {int fa_list; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;

int
FUNC_2(posix_spawn_file_actions_t *VAR_0)
{
 posix_spawn_file_actions_t VAR_1;

 VAR_1 = FUNC_1(sizeof(struct __posix_spawn_file_actions));
 if (VAR_1 == ((void*)0))
  return (-1);

 FUNC_0(&VAR_1->fa_list);
 *VAR_0 = VAR_1;
 return (0);
}
