
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_4__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_fs__rep_header_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int pair_cache_key_t ;
struct TYPE_5__ {scalar_t__ rep_header_cache; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (void**,scalar_t__*,scalar_t__,int *,int *) ;
 int FUNC_2 (scalar_t__,int *,int *,int *) ;
 int FUNC_3 (int **,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_fs__rep_header_t **VAR_2,
                svn_fs_t *VAR_3,
                svn_stream_t *VAR_4,
                pair_cache_key_t *VAR_5,
                apr_pool_t *VAR_6,
                apr_pool_t *VAR_7)
{
  fs_fs_data_t *VAR_8 = VAR_3->fsap_data;
  svn_boolean_t VAR_9 = VAR_0;

  if (VAR_8->rep_header_cache)
    {
      FUNC_0(FUNC_1((void**)VAR_2, &VAR_9,
                             VAR_8->rep_header_cache, VAR_5,
                             VAR_6));
      if (VAR_9)
        return VAR_1;
    }

  FUNC_0(FUNC_3(VAR_2, VAR_4, VAR_6,
                                     VAR_7));

  if (VAR_8->rep_header_cache)
    FUNC_0(FUNC_2(VAR_8->rep_header_cache, VAR_5, *VAR_2,
                           VAR_7));

  return VAR_1;
}
