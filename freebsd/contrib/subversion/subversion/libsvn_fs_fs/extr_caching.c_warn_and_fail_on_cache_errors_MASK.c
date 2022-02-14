
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int warning_baton; int (* warning ) (int ,int *) ;} ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_error_t *VAR_0,
                              void *VAR_1,
                              apr_pool_t *VAR_2)
{
  svn_fs_t *VAR_3 = VAR_1;
  (VAR_3->warning)(VAR_3->warning_baton, VAR_0);
  return VAR_0;
}
