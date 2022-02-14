
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int repos_root; int * repos_locks; } ;
struct edit_baton {TYPE_1__ wb; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,char const*) ;

svn_error_t *
FUNC_1(void *VAR_1,
                              apr_hash_t *VAR_2,
                              const char *VAR_3,
                              apr_pool_t *VAR_4)
{
  struct edit_baton *VAR_5 = VAR_1;

  VAR_5->wb.repos_locks = VAR_2;
  VAR_5->wb.repos_root = FUNC_0(VAR_4, VAR_3);

  return VAR_0;
}
