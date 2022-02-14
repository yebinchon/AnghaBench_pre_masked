
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* baseline_info; void* revnum_to_bc; } ;
typedef TYPE_1__ svn_ra_serf__blncache_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 void* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int * FUNC_2 (int *) ;

svn_error_t *
FUNC_3(svn_ra_serf__blncache_t **VAR_1,
                             apr_pool_t *VAR_2)
{
  svn_ra_serf__blncache_t *VAR_3 = FUNC_1(VAR_2, sizeof(*VAR_3));
  apr_pool_t *VAR_4;



  VAR_4 = FUNC_2(VAR_2);
  VAR_3->revnum_to_bc = FUNC_0(VAR_4);
  VAR_3->baseline_info = FUNC_0(VAR_4);

  *VAR_1 = VAR_3;

  return VAR_0;
}
