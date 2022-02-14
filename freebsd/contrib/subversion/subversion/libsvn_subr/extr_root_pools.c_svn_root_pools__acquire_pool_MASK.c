
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_root_pools__t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int **,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

apr_pool_t *
FUNC_4(svn_root_pools__t *VAR_1)
{
  apr_pool_t *VAR_2;
  svn_error_t *VAR_3 = FUNC_0(&VAR_2, VAR_1);
  if (VAR_3)
    {

      FUNC_2(VAR_3);
      VAR_2 = FUNC_1(FUNC_3(VAR_0));
    }

  return VAR_2;
}
