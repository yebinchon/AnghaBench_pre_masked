
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uuid; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_boolean_t *VAR_1,
          svn_fs_t *VAR_2,
          svn_fs_t *VAR_3,
          apr_pool_t *VAR_4)
{
  *VAR_1 = ! FUNC_0(VAR_2->uuid, VAR_3->uuid);
  return VAR_0;
}
