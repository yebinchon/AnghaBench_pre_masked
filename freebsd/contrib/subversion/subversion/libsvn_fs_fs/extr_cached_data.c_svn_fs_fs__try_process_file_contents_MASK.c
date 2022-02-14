
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_process_contents_func_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_13__ {int expanded_size; int revision; int item_index; } ;
typedef TYPE_2__ representation_t ;
struct TYPE_14__ {int second; int revision; int member_0; } ;
typedef TYPE_3__ pair_cache_key_t ;
struct TYPE_15__ {TYPE_2__* data_rep; } ;
typedef TYPE_4__ node_revision_t ;
struct TYPE_16__ {scalar_t__ fulltext_cache; } ;
typedef TYPE_5__ fs_fs_data_t ;
struct TYPE_17__ {void* baton; int func; } ;
typedef TYPE_6__ cache_access_wrapper_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 int * FUNC_2 (void**,int *,scalar_t__,TYPE_3__*,int ,TYPE_6__*,int *) ;

svn_error_t *
FUNC_3(svn_boolean_t *VAR_3,
                                     svn_fs_t *VAR_4,
                                     node_revision_t *VAR_5,
                                     svn_fs_process_contents_func_t VAR_6,
                                     void* VAR_7,
                                     apr_pool_t *VAR_8)
{
  representation_t *VAR_9 = VAR_5->data_rep;
  if (VAR_9)
    {
      fs_fs_data_t *VAR_10 = VAR_4->fsap_data;
      pair_cache_key_t VAR_11 = { 0 };

      VAR_11.revision = VAR_9->revision;
      VAR_11.second = VAR_9->item_index;
      if (VAR_10->fulltext_cache && FUNC_0(VAR_9->revision)
          && FUNC_1(VAR_10, VAR_9->expanded_size))
        {
          cache_access_wrapper_baton_t VAR_12;
          void *VAR_13 = ((void*)0);

          VAR_12.func = VAR_6;
          VAR_12.baton = VAR_7;
          return FUNC_2(&VAR_13, VAR_3,
                                        VAR_10->fulltext_cache,
                                        &VAR_11,
                                        VAR_2,
                                        &VAR_12,
                                        VAR_8);
        }
    }

  *VAR_3 = VAR_0;
  return VAR_1;
}
