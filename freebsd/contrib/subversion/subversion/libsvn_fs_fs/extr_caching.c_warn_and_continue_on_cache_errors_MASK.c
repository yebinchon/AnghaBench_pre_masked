
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int warning_baton; int (* warning ) (int ,int *) ;} ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_error_t *VAR_1,
                                  void *VAR_2,
                                  apr_pool_t *VAR_3)
{
  svn_fs_t *VAR_4 = VAR_2;
  (VAR_4->warning)(VAR_4->warning_baton, VAR_1);
  FUNC_1(VAR_1);

  return VAR_0;
}
