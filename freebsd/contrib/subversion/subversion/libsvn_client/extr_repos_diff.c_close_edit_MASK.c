
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct edit_baton {int pool; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
           apr_pool_t *VAR_2)
{
  struct edit_baton *VAR_3 = VAR_1;

  FUNC_0(VAR_3->pool);

  return VAR_0;
}
