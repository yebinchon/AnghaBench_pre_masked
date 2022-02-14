
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct notify_baton {int conflict_stats; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;

svn_error_t *
FUNC_2(void *VAR_1, apr_pool_t *VAR_2)
{
  struct notify_baton *VAR_3 = VAR_1;

  FUNC_0(FUNC_1(VAR_3->conflict_stats, VAR_2));
  return VAR_0;
}
