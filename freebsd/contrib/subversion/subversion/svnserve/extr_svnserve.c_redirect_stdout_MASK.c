
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int **,int *) ;

__attribute__((used)) static apr_status_t FUNC_3(void *VAR_0)
{
  apr_pool_t *VAR_1 = VAR_0;
  apr_file_t *VAR_2, *VAR_3;
  apr_status_t VAR_4;

  if ((VAR_4 = FUNC_2(&VAR_2, VAR_1)))
    return VAR_4;
  if ((VAR_4 = FUNC_1(&VAR_3, VAR_1)))
    return VAR_4;
  return FUNC_0(VAR_2, VAR_3, VAR_1);
}
