
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static apr_size_t
FUNC_2(const char *VAR_0,
                         const char *VAR_1,
                         apr_pool_t *VAR_2)
{
  apr_size_t VAR_3, VAR_4;
  apr_size_t VAR_5 = 0;
  apr_size_t VAR_6 = 0;

  VAR_3 = FUNC_1(VAR_0);
  VAR_4 = FUNC_1(VAR_1);

  if (FUNC_0(VAR_0) || FUNC_0(VAR_1))
    return 0;

  while (VAR_0[VAR_5] == VAR_1[VAR_5])
    {

      if (VAR_0[VAR_5] == '/')
        VAR_6 = VAR_5;

      VAR_5++;


      if ((VAR_5 == VAR_3) || (VAR_5 == VAR_4))
        break;
    }




  if (VAR_5 == 1 && VAR_0[0] == '/' && VAR_1[0] == '/')
    return 1;




  if (((VAR_5 == VAR_3) && (VAR_1[VAR_5] == '/'))
           || ((VAR_5 == VAR_4) && (VAR_0[VAR_5] == '/'))
           || ((VAR_5 == VAR_3) && (VAR_5 == VAR_4)))
    return VAR_5;
  else
    if (VAR_6 == 0 && VAR_0[0] == '/' && VAR_1[0] == '/')
      return 1;
  return VAR_6;
}
