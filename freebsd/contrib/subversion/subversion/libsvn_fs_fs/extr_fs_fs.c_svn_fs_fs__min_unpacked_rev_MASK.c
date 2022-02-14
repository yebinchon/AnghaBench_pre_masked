
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ format; int min_unpacked_rev; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;

svn_error_t *
FUNC_2(svn_revnum_t *VAR_2,
                            svn_fs_t *VAR_3,
                            apr_pool_t *VAR_4)
{
  fs_fs_data_t *VAR_5 = VAR_3->fsap_data;


  if (VAR_5->format >= VAR_0)
    FUNC_0(FUNC_1(VAR_3, VAR_4));

  *VAR_2 = VAR_5->min_unpacked_rev;

  return VAR_1;
}
