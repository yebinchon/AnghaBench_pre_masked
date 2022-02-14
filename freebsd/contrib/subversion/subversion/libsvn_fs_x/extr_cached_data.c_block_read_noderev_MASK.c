
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_x__revision_file_t ;
typedef int svn_fs_x__pair_cache_key_t ;
struct TYPE_8__ {int item_count; } ;
typedef TYPE_1__ svn_fs_x__p2l_entry_t ;
typedef int svn_fs_x__noderev_t ;
struct TYPE_9__ {int node_revision_cache; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_10__ {TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int **,TYPE_3__*,int *,TYPE_1__*,int *) ;
 int FUNC_3 (scalar_t__*,int ,int *,int *) ;
 int FUNC_4 (int ,int *,int *,int *) ;
 int FUNC_5 (int **,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_x__noderev_t **VAR_2,
                   svn_fs_t *VAR_3,
                   svn_fs_x__revision_file_t *VAR_4,
                   svn_fs_x__p2l_entry_t* VAR_5,
                   svn_fs_x__pair_cache_key_t *VAR_6,
                   svn_boolean_t VAR_7,
                   apr_pool_t *VAR_8,
                   apr_pool_t *VAR_9)
{
  svn_fs_x__data_t *VAR_10 = VAR_3->fsap_data;
  svn_stream_t *VAR_11;


  FUNC_1(VAR_5->item_count == 1);


  if (!VAR_7)
    {
      svn_boolean_t VAR_12 = VAR_0;
      FUNC_0(FUNC_3(&VAR_12, VAR_10->node_revision_cache, VAR_6,
                                 VAR_9));
      if (VAR_12)
        return VAR_1;
    }

  FUNC_0(FUNC_2(&VAR_11, VAR_3, VAR_4, VAR_5, VAR_9));



  FUNC_0(FUNC_5(VAR_2, VAR_11, VAR_8,
                                 VAR_9));
  FUNC_0(FUNC_4(VAR_10->node_revision_cache, VAR_6, *VAR_2,
                         VAR_9));

  return VAR_1;
}
