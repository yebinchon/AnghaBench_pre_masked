
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_5__ {int file; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,int *,int,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int*,int *,TYPE_1__*,int ,int *,int ,int *) ;
 int FUNC_4 (TYPE_1__**,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_fs__revision_file_t **VAR_1,
                       svn_fs_t *VAR_2,
                       svn_revnum_t VAR_3,
                       apr_uint64_t VAR_4,
                       apr_pool_t *VAR_5)
{
  svn_fs_fs__revision_file_t *VAR_6;
  apr_off_t VAR_7 = -1;

  FUNC_0(FUNC_2(VAR_3, VAR_2, VAR_5));

  FUNC_0(FUNC_4(&VAR_6, VAR_2, VAR_3, VAR_5, VAR_5));
  FUNC_0(FUNC_3(&VAR_7, VAR_2, VAR_6, VAR_3, ((void*)0), VAR_4,
                                 VAR_5));

  FUNC_0(FUNC_1(VAR_2, VAR_6->file, ((void*)0), VAR_7, VAR_5));

  *VAR_1 = VAR_6;

  return VAR_0;
}
