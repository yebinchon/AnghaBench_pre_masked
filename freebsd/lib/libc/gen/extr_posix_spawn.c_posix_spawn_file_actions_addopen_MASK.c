
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* posix_spawn_file_actions_t ;
struct TYPE_8__ {int fae_fildes; int fae_oflag; int fae_mode; int * fae_path; int fae_action; } ;
typedef TYPE_2__ posix_spawn_file_actions_entry_t ;
typedef int mode_t ;
struct TYPE_7__ {int fa_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int * FUNC_3 (char const*) ;

int
FUNC_4(posix_spawn_file_actions_t * __restrict VAR_4,
    int VAR_5, const char * __restrict VAR_6, int VAR_7, mode_t VAR_8)
{
 posix_spawn_file_actions_entry_t *VAR_9;
 int VAR_10;

 if (VAR_5 < 0)
  return (VAR_0);


 VAR_9 = FUNC_2(sizeof(posix_spawn_file_actions_entry_t));
 if (VAR_9 == ((void*)0))
  return (VAR_2);


 VAR_9->fae_action = VAR_1;
 VAR_9->fae_path = FUNC_3(VAR_6);
 if (VAR_9->fae_path == ((void*)0)) {
  VAR_10 = VAR_2;
  FUNC_1(VAR_9);
  return (VAR_10);
 }
 VAR_9->fae_fildes = VAR_5;
 VAR_9->fae_oflag = VAR_7;
 VAR_9->fae_mode = VAR_8;

 FUNC_0(&(*VAR_4)->fa_list, VAR_9, VAR_3);
 return (0);
}
