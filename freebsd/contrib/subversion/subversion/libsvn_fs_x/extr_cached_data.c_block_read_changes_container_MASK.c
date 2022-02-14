
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_x__revision_file_t ;
struct TYPE_14__ {int second; int revision; } ;
typedef TYPE_2__ svn_fs_x__pair_cache_key_t ;
struct TYPE_15__ {int offset; TYPE_1__* items; } ;
typedef TYPE_3__ svn_fs_x__p2l_entry_t ;
struct TYPE_16__ {int changes_container_cache; } ;
typedef TYPE_4__ svn_fs_x__data_t ;
typedef int svn_fs_x__changes_t ;
typedef int svn_fs_x__changes_context_t ;
struct TYPE_17__ {TYPE_4__* fsap_data; } ;
typedef TYPE_5__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_13__ {int change_set; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int **,TYPE_5__*,int *,TYPE_3__*,int *) ;
 int FUNC_2 (scalar_t__*,int ,TYPE_2__*,int *) ;
 int FUNC_3 (int ,TYPE_2__*,int *,int *) ;
 int FUNC_4 (int **,int *,int ,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (int **,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_array_header_t **VAR_2,
                             svn_fs_t *VAR_3,
                             svn_fs_x__revision_file_t *VAR_4,
                             svn_fs_x__p2l_entry_t* VAR_5,
                             apr_uint32_t VAR_6,
                             svn_fs_x__changes_context_t *VAR_7,
                             svn_boolean_t VAR_8,
                             apr_pool_t *VAR_9,
                             apr_pool_t *VAR_10)
{
  svn_fs_x__data_t *VAR_11 = VAR_3->fsap_data;
  svn_fs_x__changes_t *VAR_12;
  svn_fs_x__pair_cache_key_t VAR_13;
  svn_stream_t *VAR_14;
  svn_revnum_t VAR_15 = FUNC_5(VAR_5->items[0].change_set);

  VAR_13.revision = FUNC_6(VAR_3, VAR_15);
  VAR_13.second = VAR_5->offset;


  if (!VAR_8)
    {
      svn_boolean_t VAR_16 = VAR_0;
      FUNC_0(FUNC_2(&VAR_16, VAR_11->changes_container_cache,
                                 &VAR_13, VAR_10));
      if (VAR_16)
        return VAR_1;
    }

  FUNC_0(FUNC_1(&VAR_14, VAR_3, VAR_4, VAR_5, VAR_10));



  FUNC_0(FUNC_7(&VAR_12, VAR_14, VAR_10,
                                           VAR_10));



  if (VAR_8)
    FUNC_0(FUNC_4(VAR_2, VAR_12, VAR_6,
                                       VAR_7, VAR_9));
  FUNC_0(FUNC_3(VAR_11->changes_container_cache, &VAR_13, VAR_12,
                         VAR_10));

  return VAR_1;
}
