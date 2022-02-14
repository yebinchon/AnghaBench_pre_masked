
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
struct TYPE_14__ {TYPE_5__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_fs__revision_file_t ;
struct TYPE_13__ {int number; int revision; } ;
struct TYPE_15__ {TYPE_1__ item; } ;
typedef TYPE_3__ svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_16__ {int second; int revision; int member_0; } ;
typedef TYPE_4__ pair_cache_key_t ;
typedef int node_revision_t ;
struct TYPE_17__ {scalar_t__ node_revision_cache; } ;
typedef TYPE_5__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int FUNC_2 (int **,TYPE_2__*,int *,TYPE_3__*,int *) ;
 int FUNC_3 (scalar_t__*,scalar_t__,TYPE_4__*,int *) ;
 int FUNC_4 (scalar_t__,TYPE_4__*,int *,int *) ;
 int FUNC_5 (int **,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(node_revision_t **VAR_1,
                   svn_fs_t *VAR_2,
                   svn_fs_fs__revision_file_t *VAR_3,
                   svn_fs_fs__p2l_entry_t *VAR_4,
                   svn_boolean_t VAR_5,
                   apr_pool_t *VAR_6,
                   apr_pool_t *VAR_7)
{
  fs_fs_data_t *VAR_8 = VAR_2->fsap_data;
  svn_stream_t *VAR_9;

  pair_cache_key_t VAR_10 = { 0 };
  VAR_10.revision = VAR_4->item.revision;
  VAR_10.second = VAR_4->item.number;

  if (!VAR_5 && !VAR_8->node_revision_cache)
    return VAR_0;


  if (!VAR_5 && VAR_8->node_revision_cache)
    {
      svn_boolean_t VAR_11;
      FUNC_0(FUNC_3(&VAR_11, VAR_8->node_revision_cache,
                                 &VAR_10, VAR_7));
      if (VAR_11)
        return VAR_0;
    }

  FUNC_0(FUNC_2(&VAR_9, VAR_2, VAR_3, VAR_4, VAR_7));


  FUNC_0(FUNC_5(VAR_1, VAR_9,
                                  VAR_6, VAR_7));
  FUNC_0(FUNC_1(VAR_2, *VAR_1, VAR_7));

  if (VAR_8->node_revision_cache)
    FUNC_0(FUNC_4(VAR_8->node_revision_cache, &VAR_10, *VAR_1,
                           VAR_7));

  return VAR_0;
}
