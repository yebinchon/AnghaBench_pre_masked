
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,int ,int *) ;

const char *
FUNC_2(const char *VAR_1, apr_pool_t *VAR_2)
{
  const char *VAR_3;

  VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);


  if (VAR_3 == VAR_1)
    return FUNC_0(VAR_2, VAR_1);
  else
    return VAR_3;
}
