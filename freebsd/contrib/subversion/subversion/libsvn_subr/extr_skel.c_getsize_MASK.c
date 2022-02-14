
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;



__attribute__((used)) static apr_size_t
FUNC_0(const char *VAR_0, apr_size_t VAR_1,
        const char **VAR_2, apr_size_t VAR_3)
{
  apr_size_t VAR_4 = VAR_3 / 10;
  apr_size_t VAR_5 = VAR_3 % 10;
  apr_size_t VAR_6;
  apr_size_t VAR_7 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_1 && '0' <= VAR_0[VAR_6] && VAR_0[VAR_6] <= '9'; VAR_6++)
    {
      apr_size_t VAR_8 = VAR_0[VAR_6] - '0';


      if (VAR_7 > VAR_4
          || (VAR_7 == VAR_4 && VAR_8 > VAR_5))
        {
          *VAR_2 = 0;
          return 0;
        }

      VAR_7 = (VAR_7 * 10) + VAR_8;
    }


  if (VAR_6 == 0)
    {
      *VAR_2 = 0;
      return 0;
    }
  else
    {
      *VAR_2 = VAR_0 + VAR_6;
      return VAR_7;
    }
}
