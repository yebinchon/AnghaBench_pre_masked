
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int number; int change_set; } ;
struct TYPE_14__ {int expanded_size; TYPE_1__ id; } ;
typedef TYPE_2__ svn_fs_x__representation_t ;
struct TYPE_15__ {int revision; int second; int member_0; } ;
typedef TYPE_3__ svn_fs_x__pair_cache_key_t ;
struct TYPE_16__ {TYPE_2__* data_rep; } ;
typedef TYPE_4__ svn_fs_x__noderev_t ;
struct TYPE_17__ {int fulltext_cache; } ;
typedef TYPE_5__ svn_fs_x__data_t ;
struct TYPE_18__ {TYPE_5__* fsap_data; } ;
typedef TYPE_6__ svn_fs_t ;
typedef int svn_fs_process_contents_func_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_19__ {void* baton; int func; } ;
typedef TYPE_7__ cache_access_wrapper_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 int * FUNC_2 (void**,int *,int ,TYPE_3__*,int ,TYPE_7__*,int *) ;
 int FUNC_3 (int ) ;

svn_error_t *
FUNC_4(svn_boolean_t *VAR_3,
                                    svn_fs_t *VAR_4,
                                    svn_fs_x__noderev_t *VAR_5,
                                    svn_fs_process_contents_func_t VAR_6,
                                    void* VAR_7,
                                    apr_pool_t *VAR_8)
{
  svn_fs_x__representation_t *VAR_9 = VAR_5->data_rep;
  if (VAR_9)
    {
      svn_fs_x__data_t *VAR_10 = VAR_4->fsap_data;
      svn_fs_x__pair_cache_key_t VAR_11 = { 0 };

      VAR_11.revision = FUNC_3(VAR_9->id.change_set);
      VAR_11.second = VAR_9->id.number;
      if ( FUNC_0(VAR_11.revision)
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
