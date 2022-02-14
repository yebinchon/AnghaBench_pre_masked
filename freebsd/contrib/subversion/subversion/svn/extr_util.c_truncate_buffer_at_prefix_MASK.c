
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static void
FUNC_3(apr_size_t *VAR_0,
                          char *VAR_1,
                          const char *VAR_2)
{
  char *VAR_3 = VAR_1;

  FUNC_0(VAR_1 && VAR_2);


  if (VAR_0)
    *VAR_0 = FUNC_1(VAR_1);

  while (1)
    {

      VAR_3 = FUNC_2(VAR_3, VAR_2);
      if (! VAR_3)
        return;




      if ((VAR_3 == VAR_1)
          || (*(VAR_3 - 1) == '\r')
          || (*(VAR_3 - 1) == '\n'))
        {
          *VAR_3 = '\0';
          if (VAR_0)
            *VAR_0 = VAR_3 - VAR_1;
        }
      else if (VAR_3)
        {


          VAR_3++;
        }
    }


}
