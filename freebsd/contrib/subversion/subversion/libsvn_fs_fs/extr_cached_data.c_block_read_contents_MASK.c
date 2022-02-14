
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_11__ {int stream; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
typedef int svn_fs_fs__rep_header_t ;
struct TYPE_10__ {int number; scalar_t__ revision; } ;
struct TYPE_12__ {TYPE_1__ item; } ;
typedef TYPE_3__ svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
struct TYPE_13__ {int second; scalar_t__ revision; int member_0; } ;
typedef TYPE_4__ pair_cache_key_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef scalar_t__ apr_int32_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,TYPE_2__*,TYPE_3__*,int ,int *,int *) ;
 int FUNC_2 (int **,int *,int ,TYPE_4__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_t *VAR_1,
                    svn_fs_fs__revision_file_t *VAR_2,
                    svn_fs_fs__p2l_entry_t* VAR_3,
                    apr_off_t VAR_4,
                    apr_pool_t *VAR_5)
{
  pair_cache_key_t VAR_6 = { 0 };
  svn_fs_fs__rep_header_t *VAR_7;

  VAR_6.revision = (apr_int32_t)VAR_3->item.revision;
  VAR_6.second = VAR_3->item.number;

  FUNC_0(FUNC_2(&VAR_7, VAR_1, VAR_2->stream, &VAR_6,
                          VAR_5, VAR_5));
  FUNC_0(FUNC_1(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4,
                             VAR_5, VAR_5));

  return VAR_0;
}
