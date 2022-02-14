
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef size_t apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const) ;
 int * VAR_2 ;

svn_boolean_t
FUNC_3(const char *VAR_3)
{
  apr_size_t VAR_4;


  VAR_3 = FUNC_0(VAR_3);


  if (! VAR_3)
    return VAR_0;


  VAR_3 = FUNC_1(VAR_3, '/');




  if (VAR_3 == ((void*)0))
    return VAR_1;

  for (VAR_4 = 0; VAR_3[VAR_4]; VAR_4++)
    {

      if (VAR_3[VAR_4] == '%')
        {
          if (FUNC_2(VAR_3[VAR_4 + 1]) &&
              FUNC_2(VAR_3[VAR_4 + 2]))
            {
              VAR_4 += 2;
              continue;
            }
          return VAR_0;
        }
      else if (! VAR_2[((unsigned char)VAR_3[VAR_4])])
        {
          return VAR_0;
        }
    }

  return VAR_1;
}
