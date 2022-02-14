
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uuid; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 char* FUNC_0 (int *,int ) ;

svn_error_t *
FUNC_1(svn_fs_t *VAR_1, const char **VAR_2, apr_pool_t *VAR_3)
{

  *VAR_2 = FUNC_0(VAR_3, VAR_1->uuid);
  return VAR_0;
}
