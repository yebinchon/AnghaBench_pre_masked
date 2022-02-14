
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* posix_spawn_file_actions_t ;
struct TYPE_6__ {scalar_t__ fae_action; struct TYPE_6__* fae_path; int fa_list; } ;
typedef TYPE_1__ posix_spawn_file_actions_entry_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(posix_spawn_file_actions_t *VAR_2)
{
 posix_spawn_file_actions_entry_t *VAR_3;

 while ((VAR_3 = FUNC_0(&(*VAR_2)->fa_list)) != ((void*)0)) {

  FUNC_1(&(*VAR_2)->fa_list, VAR_1);


  if (VAR_3->fae_action == VAR_0)
   FUNC_2(VAR_3->fae_path);
  FUNC_2(VAR_3);
 }

 FUNC_2(*VAR_2);
 return (0);
}
