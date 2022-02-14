
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_x__revision_file_t ;
typedef int svn_fs_x__representation_cache_key_t ;
typedef int svn_fs_x__rep_header_t ;
struct TYPE_4__ {int rep_header_cache; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_5__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (void**,scalar_t__*,int ,int *,int *) ;
 int FUNC_2 (int ,int *,int *,int *) ;
 int FUNC_3 (int **,int *,int *,int *) ;
 int FUNC_4 (int **,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_x__rep_header_t **VAR_2,
                svn_fs_t *VAR_3,
                svn_fs_x__revision_file_t *VAR_4,
                svn_fs_x__representation_cache_key_t *VAR_5,
                apr_pool_t *VAR_6)
{
  svn_fs_x__data_t *VAR_7 = VAR_3->fsap_data;
  svn_stream_t *VAR_8;
  svn_boolean_t VAR_9 = VAR_0;

  FUNC_0(FUNC_1((void**)VAR_2, &VAR_9,
                         VAR_7->rep_header_cache, VAR_5, VAR_6));
  if (VAR_9)
    return VAR_1;

  FUNC_0(FUNC_4(&VAR_8, VAR_4));
  FUNC_0(FUNC_3(VAR_2, VAR_8, VAR_6, VAR_6));
  FUNC_0(FUNC_2(VAR_7->rep_header_cache, VAR_5, *VAR_2, VAR_6));

  return VAR_1;
}
