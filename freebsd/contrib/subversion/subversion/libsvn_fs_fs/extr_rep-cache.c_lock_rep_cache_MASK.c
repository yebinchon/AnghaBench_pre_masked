
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int rep_cache_db; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_t *VAR_2,
               apr_pool_t *VAR_3)
{
  fs_fs_data_t *VAR_4 = VAR_2->fsap_data;

  if (! VAR_4->rep_cache_db)
    FUNC_0(FUNC_1(VAR_2, VAR_3));

  FUNC_0(FUNC_2(VAR_4->rep_cache_db, VAR_0));

  return VAR_1;
}
