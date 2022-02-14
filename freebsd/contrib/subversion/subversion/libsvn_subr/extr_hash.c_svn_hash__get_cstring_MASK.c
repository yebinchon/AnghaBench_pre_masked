
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_hash_t ;


 char* FUNC_0 (int *,char const*) ;

const char *
FUNC_1(apr_hash_t *VAR_0,
                      const char *VAR_1,
                      const char *VAR_2)
{
  if (VAR_0)
    {
      const char *VAR_3 = FUNC_0(VAR_0, VAR_1);
      return VAR_3 ? VAR_3 : VAR_2;
    }

  return VAR_2;
}
