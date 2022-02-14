
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uuid_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;

const char *
FUNC_3(apr_pool_t *VAR_1)
{
  apr_uuid_t VAR_2;
  char *VAR_3 = FUNC_0(VAR_1, VAR_0 + 1);
  FUNC_2(&VAR_2);
  FUNC_1(VAR_3, &VAR_2);
  return VAR_3;
}
