
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_x__revision_file_t ;
struct TYPE_17__ {int second; int revision; } ;
typedef TYPE_1__ svn_fs_x__pair_cache_key_t ;
struct TYPE_18__ {int mergeinfo_count; } ;
typedef TYPE_2__ svn_fs_x__noderev_t ;
struct TYPE_19__ {int change_set; } ;
typedef TYPE_3__ svn_fs_x__id_t ;
struct TYPE_20__ {scalar_t__ noderevs_container_cache; } ;
typedef TYPE_4__ svn_fs_x__data_t ;
struct TYPE_21__ {TYPE_4__* fsap_data; } ;
typedef TYPE_5__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_int64_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (void**,scalar_t__*,scalar_t__,TYPE_1__*,int ,int *,int *) ;
 int FUNC_2 (TYPE_2__**,TYPE_5__*,TYPE_3__ const*,int *,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,TYPE_5__*,int *,TYPE_3__ const*,int *) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (int **,TYPE_5__*,int ,int *) ;

svn_error_t *
FUNC_9(apr_int64_t *VAR_2,
                              svn_fs_t *VAR_3,
                              const svn_fs_x__id_t *VAR_4,
                              apr_pool_t *VAR_5)
{
  svn_fs_x__noderev_t *VAR_6;






  if (! FUNC_5(VAR_4->change_set))
    {

      svn_fs_x__data_t *VAR_7 = VAR_3->fsap_data;
      svn_revnum_t VAR_8 = FUNC_3(VAR_4->change_set);

      svn_fs_x__revision_file_t *VAR_9;
      FUNC_0(FUNC_8(&VAR_9, VAR_3, VAR_8,
                                      VAR_5));

      if ( FUNC_4(VAR_3, VAR_8)
          && VAR_7->noderevs_container_cache)
        {
          svn_fs_x__pair_cache_key_t VAR_10;
          apr_off_t VAR_11;
          apr_uint32_t VAR_12;
          svn_boolean_t VAR_13;

          FUNC_0(FUNC_6(&VAR_11, &VAR_12, VAR_3, VAR_9,
                                        VAR_4, VAR_5));
          VAR_10.revision = FUNC_7(VAR_3, VAR_8);
          VAR_10.second = VAR_11;

          FUNC_0(FUNC_1((void **)VAR_2, &VAR_13,
                                         VAR_7->noderevs_container_cache, &VAR_10,
                                         VAR_1,
                                         &VAR_12, VAR_5));
          if (VAR_13)
            return VAR_0;
        }
    }



  FUNC_0(FUNC_2(&VAR_6, VAR_3, VAR_4, VAR_5,
                                      VAR_5));
  *VAR_2 = VAR_6->mergeinfo_count;

  return VAR_0;
}
