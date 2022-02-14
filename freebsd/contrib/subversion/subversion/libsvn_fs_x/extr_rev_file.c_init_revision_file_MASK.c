
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {int start_revision; int is_packed; } ;
struct TYPE_6__ {TYPE_1__ file_info; } ;
typedef TYPE_2__ svn_fs_x__revision_file_t ;
typedef int svn_fs_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static svn_fs_x__revision_file_t *
FUNC_3(svn_fs_t *VAR_0,
                   svn_revnum_t VAR_1,
                   apr_pool_t *VAR_2)
{
  svn_fs_x__revision_file_t *VAR_3 = FUNC_0(VAR_0, VAR_2);

  VAR_3->file_info.is_packed = FUNC_1(VAR_0, VAR_1);
  VAR_3->file_info.start_revision = FUNC_2(VAR_0, VAR_1);

  return VAR_3;
}
