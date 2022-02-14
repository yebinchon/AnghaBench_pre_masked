
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {int youngest_rev_cache; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_6__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;

svn_error_t *
FUNC_2(svn_revnum_t *VAR_1,
                       svn_fs_t *VAR_2,
                       apr_pool_t *VAR_3)
{
  svn_fs_x__data_t *VAR_4 = VAR_2->fsap_data;
  FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_3));
  VAR_4->youngest_rev_cache = *VAR_1;

  return VAR_0;
}
