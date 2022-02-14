
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 char const* FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char const*,int *) ;
 char* FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (char const*) ;
 char const* FUNC_5 (char const*,char const*,int *) ;
 char* FUNC_6 (char const*,char const*) ;

__attribute__((used)) static const char *
FUNC_7(const char *VAR_0,
             const char *VAR_1,
             const char *VAR_2,
             apr_pool_t *VAR_3,
             apr_pool_t *VAR_4)
{
  const char *VAR_5;
  const char *VAR_6 = "";
  const char *VAR_7;
  const char *VAR_8;





  VAR_7 = FUNC_6(VAR_0, VAR_2);

  if (VAR_7)
    return FUNC_5(VAR_1, VAR_7, VAR_3);
  VAR_5 = FUNC_3(VAR_0, VAR_2,
                                       VAR_4);
  if (*VAR_5 == '\0')
    {

      return FUNC_1(VAR_3, VAR_2);
    }
  VAR_7 = FUNC_6(VAR_5, VAR_0);
  VAR_8 = FUNC_6(VAR_5, VAR_2);







  while (*VAR_7)
    {
      VAR_7 = FUNC_2(VAR_7, VAR_4);
      VAR_6 = FUNC_5(VAR_6, "..", VAR_4);
    }


  return FUNC_5(VAR_6, VAR_8, VAR_3);
}
