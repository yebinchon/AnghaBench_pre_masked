
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef size_t apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(const char *VAR_2)
{
  apr_size_t VAR_3, VAR_4 = FUNC_0(VAR_2);

  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    {
      char VAR_5 = VAR_2[VAR_3];


      if (VAR_5 == '-')
        {
          if (VAR_3 + 1 != VAR_4)
            {
              if (VAR_2[VAR_3 + 1] == '.')
                return VAR_0;
            }
          else
            return VAR_0;


          if (VAR_3 == 0)
            return VAR_0;
          else
            if (VAR_2[VAR_3 - 1] == '.')
              return VAR_0;
        }
      else if (VAR_5 != '*' && VAR_5 != '.' && !FUNC_1(VAR_5))
        return VAR_0;
    }

  return VAR_1;
}
