
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int revision; int changed_paths2; } ;
typedef TYPE_1__ svn_log_entry_t ;
struct TYPE_6__ {char action; } ;
typedef TYPE_2__ svn_log_changed_path_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int revision_deleted; int path; } ;
typedef TYPE_3__ log_path_del_rev_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,void*,int *,void**) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
                      svn_log_entry_t *VAR_2,
                      apr_pool_t *VAR_3)
{
  log_path_del_rev_t *VAR_4 = VAR_1;
  apr_hash_index_t *VAR_5;


  if (! VAR_2->changed_paths2)
    return VAR_0;

  for (VAR_5 = FUNC_0(VAR_3, VAR_2->changed_paths2);
       VAR_5 != ((void*)0);
       VAR_5 = FUNC_1(VAR_5))
    {
      void *VAR_6;
      char *VAR_7;
      svn_log_changed_path_t *VAR_8;

      FUNC_2(VAR_5, (void *) &VAR_7, ((void*)0), &VAR_6);
      VAR_8 = VAR_6;
      if (FUNC_3(VAR_4->path, VAR_7) == 0
          && (VAR_8->action == 'D' || VAR_8->action == 'R'))
        {

          VAR_4->revision_deleted = VAR_2->revision;
          break;
        }
    }
  return VAR_0;
}
