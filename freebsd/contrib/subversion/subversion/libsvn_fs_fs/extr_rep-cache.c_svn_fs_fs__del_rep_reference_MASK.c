
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_sqlite__stmt_t ;
typedef int svn_revnum_t ;
struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ format; int rep_cache_db; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;

svn_error_t *
FUNC_6(svn_fs_t *VAR_3,
                             svn_revnum_t VAR_4,
                             apr_pool_t *VAR_5)
{
  fs_fs_data_t *VAR_6 = VAR_3->fsap_data;
  svn_sqlite__stmt_t *VAR_7;

  FUNC_1(VAR_6->format >= VAR_1);
  if (! VAR_6->rep_cache_db)
    FUNC_0(FUNC_2(VAR_3, VAR_5));

  FUNC_0(FUNC_4(&VAR_7, VAR_6->rep_cache_db,
                                    VAR_0));
  FUNC_0(FUNC_3(VAR_7, "r", VAR_4));
  FUNC_0(FUNC_5(VAR_7));

  return VAR_2;
}
