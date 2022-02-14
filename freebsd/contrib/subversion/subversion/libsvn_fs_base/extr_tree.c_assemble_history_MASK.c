
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_4__ {TYPE_2__* fsap_data; int * vtable; } ;
typedef TYPE_1__ svn_fs_history_t ;
typedef int svn_boolean_t ;
struct TYPE_5__ {char const* path; char const* path_hint; int * fs; void* rev_hint; int is_interesting; void* revision; } ;
typedef TYPE_2__ base_history_data_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static svn_fs_history_t *
FUNC_1(svn_fs_t *VAR_1,
                 const char *VAR_2,
                 svn_revnum_t VAR_3,
                 svn_boolean_t VAR_4,
                 const char *VAR_5,
                 svn_revnum_t VAR_6,
                 apr_pool_t *VAR_7)
{
  svn_fs_history_t *VAR_8 = FUNC_0(VAR_7, sizeof(*VAR_8));
  base_history_data_t *VAR_9 = FUNC_0(VAR_7, sizeof(*VAR_9));
  VAR_9->path = VAR_2;
  VAR_9->revision = VAR_3;
  VAR_9->is_interesting = VAR_4;
  VAR_9->path_hint = VAR_5;
  VAR_9->rev_hint = VAR_6;
  VAR_9->fs = VAR_1;
  VAR_8->vtable = &VAR_0;
  VAR_8->fsap_data = VAR_9;
  return VAR_8;
}
