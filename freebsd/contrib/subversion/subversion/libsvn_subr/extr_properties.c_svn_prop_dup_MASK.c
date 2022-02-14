
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_prop_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;

svn_prop_t *
FUNC_2(const svn_prop_t *VAR_0, apr_pool_t *VAR_1)
{
  svn_prop_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  *VAR_2 = *VAR_0;

  FUNC_1(VAR_2, VAR_1);

  return VAR_2;
}
