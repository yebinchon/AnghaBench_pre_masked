
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* svn_revnum_t ;
typedef int svn_fs_x__id_t ;
typedef int svn_fs_t ;
struct TYPE_4__ {TYPE_2__* fsap_data; int * vtable; } ;
typedef TYPE_1__ svn_fs_history_t ;
typedef int svn_boolean_t ;
struct TYPE_5__ {int current_id; int * fs; void* next_copy; void* rev_hint; int * path_hint; int is_interesting; void* revision; int * path; } ;
typedef TYPE_2__ fs_history_data_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int * FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static svn_fs_history_t *
FUNC_3(svn_fs_t *VAR_1,
                 const char *VAR_2,
                 svn_revnum_t VAR_3,
                 svn_boolean_t VAR_4,
                 const char *VAR_5,
                 svn_revnum_t VAR_6,
                 svn_revnum_t VAR_7,
                 const svn_fs_x__id_t *VAR_8,
                 apr_pool_t *VAR_9)
{
  svn_fs_history_t *VAR_10 = FUNC_0(VAR_9, sizeof(*VAR_10));
  fs_history_data_t *VAR_11 = FUNC_0(VAR_9, sizeof(*VAR_11));
  VAR_11->path = FUNC_1(VAR_2, VAR_9);
  VAR_11->revision = VAR_3;
  VAR_11->is_interesting = VAR_4;
  VAR_11->path_hint = VAR_5
                 ? FUNC_1(VAR_5, VAR_9)
                 : ((void*)0);
  VAR_11->rev_hint = VAR_6;
  VAR_11->next_copy = VAR_7;
  VAR_11->fs = VAR_1;

  if (VAR_8)
    VAR_11->current_id = *VAR_8;
  else
    FUNC_2(&VAR_11->current_id);

  VAR_10->vtable = &VAR_0;
  VAR_10->fsap_data = VAR_11;
  return VAR_10;
}
