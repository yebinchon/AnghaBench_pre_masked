
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t apr_size_t ;


 scalar_t__ FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static apr_size_t
FUNC_1(const char *VAR_0, apr_size_t VAR_1)
{
  apr_size_t VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
      if (VAR_0[VAR_2] == '/')
        {
          if (VAR_2 > 0 && VAR_0[VAR_2-1] == ':' && VAR_2 < VAR_1-1 && VAR_0[VAR_2+1] == '/')
            {

              if (VAR_2 == 5 && FUNC_0("file", VAR_0, 4) == 0)
                return 7;
              else
                {
                  for (VAR_2 += 2; VAR_2 < VAR_1; VAR_2++)
                    if (VAR_0[VAR_2] == '/')
                      return VAR_2;

                  return VAR_1;
                }
            }
          else
            return 0;
        }
    }

  return 0;
}
