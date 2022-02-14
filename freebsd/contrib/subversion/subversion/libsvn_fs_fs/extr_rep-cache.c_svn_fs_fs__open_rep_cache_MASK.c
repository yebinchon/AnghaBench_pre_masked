
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int path; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int rep_cache_db_opened; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int ,TYPE_1__*,int *) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *,int ,int ) ;

svn_error_t *
FUNC_5(svn_fs_t *VAR_1,
                          apr_pool_t *VAR_2)
{
  fs_fs_data_t *VAR_3 = VAR_1->fsap_data;
  svn_error_t *VAR_4 = FUNC_2(&VAR_3->rep_cache_db_opened,
                                           VAR_0, VAR_1, VAR_2);
  return FUNC_4(VAR_4,
                               FUNC_0("Couldn't open rep-cache database '%s'"),
                               FUNC_3(
                                 FUNC_1(VAR_1->path, VAR_2), VAR_2));
}
