
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock_tokens; int username; } ;
typedef TYPE_1__ svn_fs_access_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;

svn_error_t *
FUNC_4(svn_fs_access_t **VAR_1,
                     const char *VAR_2,
                     apr_pool_t *VAR_3)
{
  svn_fs_access_t *VAR_4;

  FUNC_0(VAR_2 != ((void*)0));

  VAR_4 = FUNC_2(VAR_3, sizeof(*VAR_4));
  VAR_4->username = FUNC_3(VAR_3, VAR_2);
  VAR_4->lock_tokens = FUNC_1(VAR_3);
  *VAR_1 = VAR_4;

  return VAR_0;
}
