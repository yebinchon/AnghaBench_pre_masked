
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(apr_array_header_t **VAR_1,
                    svn_fs_root_t *VAR_2,
                    apr_hash_t *VAR_3,
                    apr_pool_t *VAR_4,
                    apr_pool_t *VAR_5)
{
  *VAR_1 = FUNC_0(VAR_2->fs, VAR_3, VAR_4,
                                           VAR_5);

  return VAR_0;
}
