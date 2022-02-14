
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
struct TYPE_12__ {int * vtable; TYPE_4__* fsap_data; } ;
typedef TYPE_3__ svn_fs_path_change_iterator_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_13__ {int hi; } ;
typedef TYPE_4__ fsap_iterator_data_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_10__ {int (* report_changes ) (TYPE_3__**,TYPE_2__*,int *,int *) ;int (* paths_changed ) (int **,TYPE_2__*,int *) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int **,TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_3__**,TYPE_2__*,int *,int *) ;

svn_error_t *
FUNC_5(svn_fs_path_change_iterator_t **VAR_3,
                      svn_fs_root_t *VAR_4,
                      apr_pool_t *VAR_5,
                      apr_pool_t *VAR_6)
{
  svn_boolean_t VAR_7 = !VAR_4->vtable->report_changes
                          || ( VAR_0
                              && VAR_4->vtable->paths_changed);

  if (VAR_7)
    {
      svn_fs_path_change_iterator_t *VAR_8;
      fsap_iterator_data_t *VAR_9;

      apr_hash_t *VAR_10;
      FUNC_0(VAR_4->vtable->paths_changed(&VAR_10, VAR_4, VAR_5));

      VAR_9 = FUNC_2(VAR_5, sizeof(*VAR_9));
      VAR_9->hi = FUNC_1(VAR_5, VAR_10);

      VAR_8 = FUNC_2(VAR_5, sizeof(*VAR_8));
      VAR_8->fsap_data = VAR_9;
      VAR_8->vtable = &VAR_2;

      *VAR_3 = VAR_8;
    }
  else
    {
      FUNC_0(VAR_4->vtable->report_changes(VAR_3, VAR_4, VAR_5,
                                           VAR_6));
    }

  return VAR_1;
}
