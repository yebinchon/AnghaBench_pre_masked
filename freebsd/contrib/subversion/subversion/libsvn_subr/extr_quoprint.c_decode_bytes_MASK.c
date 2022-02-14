
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int apr_size_t ;


 scalar_t__ FUNC_0 (char) ;
 char const* VAR_0 ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (int *,char) ;

__attribute__((used)) static void
FUNC_3(svn_stringbuf_t *VAR_1, const char *VAR_2, apr_size_t VAR_3,
             char *VAR_4, int *VAR_5)
{
  const char *VAR_6, *VAR_7, *VAR_8;
  char VAR_9;

  for (VAR_6 = VAR_2; VAR_6 <= VAR_2 + VAR_3; VAR_6++)
    {

      VAR_4[(*VAR_5)++] = *VAR_6;
      if (*VAR_4 != '=')
        {

          if (FUNC_0(*VAR_4))
            FUNC_2(VAR_1, *VAR_4);
          *VAR_5 = 0;
        }
      else if (*VAR_4 == '=' && *VAR_5 == 2 && VAR_4[1] == '\n')
        {

          *VAR_5 = 0;
        }
      else if (*VAR_4 == '=' && *VAR_5 == 3)
        {

          VAR_7 = FUNC_1(VAR_0, VAR_4[1]);
          VAR_8 = FUNC_1(VAR_0, VAR_4[2]);
          if (VAR_7 != ((void*)0) && VAR_8 != ((void*)0))
            {
              VAR_9 = (char)(((VAR_7 - VAR_0) << 4) | (VAR_8 - VAR_0));
              FUNC_2(VAR_1, VAR_9);
            }
          *VAR_5 = 0;
        }
    }
}
