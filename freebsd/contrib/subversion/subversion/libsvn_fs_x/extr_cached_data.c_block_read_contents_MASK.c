
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_fs_x__revision_file_t ;
struct TYPE_8__ {int item_index; scalar_t__ revision; int is_packed; int member_0; } ;
typedef TYPE_1__ svn_fs_x__representation_cache_key_t ;
typedef int svn_fs_x__rep_header_t ;
struct TYPE_9__ {int second; scalar_t__ revision; } ;
typedef TYPE_2__ svn_fs_x__pair_cache_key_t ;
typedef int svn_fs_x__p2l_entry_t ;
typedef int svn_fs_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int member_0; } ;
typedef TYPE_3__ rep_state_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef scalar_t__ apr_int32_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,TYPE_3__*,int ,int *) ;
 int FUNC_2 (TYPE_3__*,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int **,int *,int *,TYPE_1__*,int *) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_t *VAR_1,
                    svn_fs_x__revision_file_t *VAR_2,
                    svn_fs_x__p2l_entry_t* VAR_3,
                    svn_fs_x__pair_cache_key_t *VAR_4,
                    apr_off_t VAR_5,
                    apr_pool_t *VAR_6)
{
  svn_fs_x__representation_cache_key_t VAR_7 = { 0 };
  rep_state_t VAR_8 = { 0 };
  svn_filesize_t VAR_9;
  svn_fs_x__rep_header_t *VAR_10;

  VAR_7.revision = (apr_int32_t)VAR_4->revision;
  VAR_7.is_packed = FUNC_4(VAR_1, VAR_7.revision);
  VAR_7.item_index = VAR_4->second;

  FUNC_0(FUNC_3(&VAR_10, VAR_1, VAR_2, &VAR_7,
                          VAR_6));
  FUNC_0(FUNC_2(&VAR_8, VAR_10, VAR_1, VAR_2, VAR_3, VAR_6));
  FUNC_0(FUNC_1(&VAR_9, VAR_1, &VAR_8, VAR_5, VAR_6));

  return VAR_0;
}
