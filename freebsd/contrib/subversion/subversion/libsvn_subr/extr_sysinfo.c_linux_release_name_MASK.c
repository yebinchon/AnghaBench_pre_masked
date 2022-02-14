
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char*,char const*,char const*) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;

__attribute__((used)) static const char *
FUNC_7(apr_pool_t *VAR_0)
{
  const char *VAR_1 = FUNC_4(VAR_0);



  const char *VAR_2 = FUNC_2(VAR_0);


  if (!VAR_2)
    VAR_2 = FUNC_6(VAR_0);


  if (!VAR_2)
    VAR_2 = FUNC_3(VAR_0);


  if (!VAR_2)
    VAR_2 = FUNC_5(VAR_0);


  if (!VAR_2)
    VAR_2 = FUNC_1(VAR_0);

  if (!VAR_2)
    return VAR_1;

  if (!VAR_1)
    return VAR_2;

  return FUNC_0(VAR_0, "%s [%s]", VAR_2, VAR_1);
}
