
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_file_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(apr_file_t *VAR_2,
             apr_off_t VAR_3,
             apr_pool_t *VAR_4)
{
  for (; VAR_3 >= VAR_0; VAR_3 -= VAR_0)
    FUNC_0(FUNC_1(VAR_2, VAR_0, VAR_4));

  if (VAR_3)
    FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_4));

  return VAR_1;
}
