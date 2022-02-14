
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int revnum_to_bc; } ;
typedef TYPE_1__ svn_ra_serf__blncache_t ;
typedef int svn_error_t ;
typedef int revnum ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 char* FUNC_0 (int ,int *,int) ;
 char* FUNC_1 (int *,char const*) ;

svn_error_t *
FUNC_2(const char **VAR_1,
                                 svn_ra_serf__blncache_t *VAR_2,
                                 svn_revnum_t VAR_3,
                                 apr_pool_t *VAR_4)
{
  const char *VAR_5 = FUNC_0(VAR_2->revnum_to_bc,
                                   &VAR_3, sizeof(VAR_3));
  *VAR_1 = VAR_5 ? FUNC_1(VAR_4, VAR_5) : ((void*)0);
  return VAR_0;
}
