
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* posix_spawn_file_actions_t ;
struct TYPE_7__ {int fae_fildes; int fae_action; } ;
typedef TYPE_2__ posix_spawn_file_actions_entry_t ;
struct TYPE_6__ {int fa_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int) ;

int
FUNC_2(posix_spawn_file_actions_t *VAR_4,
    int VAR_5)
{
 posix_spawn_file_actions_entry_t *VAR_6;

 if (VAR_5 < 0)
  return (VAR_0);


 VAR_6 = FUNC_1(sizeof(posix_spawn_file_actions_entry_t));
 if (VAR_6 == ((void*)0))
  return (VAR_2);


 VAR_6->fae_action = VAR_1;
 VAR_6->fae_fildes = VAR_5;

 FUNC_0(&(*VAR_4)->fa_list, VAR_6, VAR_3);
 return (0);
}
