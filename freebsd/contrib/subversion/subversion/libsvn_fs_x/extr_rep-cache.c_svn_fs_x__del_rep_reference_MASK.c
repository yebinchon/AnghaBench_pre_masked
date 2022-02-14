
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
struct TYPE_5__ {int rep_cache_db; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_6__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;

svn_error_t *
FUNC_5(svn_fs_t *VAR_2,
                            svn_revnum_t VAR_3,
                            apr_pool_t *VAR_4)
{
  svn_fs_x__data_t *VAR_5 = VAR_2->fsap_data;
  svn_sqlite__stmt_t *VAR_6;

  if (! VAR_5->rep_cache_db)
    FUNC_0(FUNC_1(VAR_2, VAR_4));

  FUNC_0(FUNC_3(&VAR_6, VAR_5->rep_cache_db,
                                    VAR_0));
  FUNC_0(FUNC_2(VAR_6, "r", VAR_3));
  FUNC_0(FUNC_4(VAR_6));

  return VAR_1;
}
