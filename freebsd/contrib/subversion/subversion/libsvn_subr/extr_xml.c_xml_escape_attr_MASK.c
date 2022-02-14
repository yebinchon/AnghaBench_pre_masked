
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int,int *) ;

__attribute__((used)) static void
FUNC_3(svn_stringbuf_t **VAR_0,
                const char *VAR_1,
                apr_size_t VAR_2,
                apr_pool_t *VAR_3)
{
  const char *VAR_4 = VAR_1 + VAR_2;
  const char *VAR_5 = VAR_1, *VAR_6;

  if (*VAR_0 == ((void*)0))
    *VAR_0 = FUNC_2(VAR_2, VAR_3);

  while (1)
    {


      VAR_6 = VAR_5;
      while (VAR_6 < VAR_4 && *VAR_6 != '&' && *VAR_6 != '<' && *VAR_6 != '>'
             && *VAR_6 != '"' && *VAR_6 != '\'' && *VAR_6 != '\r'
             && *VAR_6 != '\n' && *VAR_6 != '\t')
        VAR_6++;
      FUNC_0(*VAR_0, VAR_5, VAR_6 - VAR_5);


      if (VAR_6 == VAR_4)
        break;


      if (*VAR_6 == '&')
        FUNC_1(*VAR_0, "&amp;");
      else if (*VAR_6 == '<')
        FUNC_1(*VAR_0, "&lt;");
      else if (*VAR_6 == '>')
        FUNC_1(*VAR_0, "&gt;");
      else if (*VAR_6 == '"')
        FUNC_1(*VAR_0, "&quot;");
      else if (*VAR_6 == '\'')
        FUNC_1(*VAR_0, "&apos;");
      else if (*VAR_6 == '\r')
        FUNC_1(*VAR_0, "&#13;");
      else if (*VAR_6 == '\n')
        FUNC_1(*VAR_0, "&#10;");
      else if (*VAR_6 == '\t')
        FUNC_1(*VAR_0, "&#9;");

      VAR_5 = VAR_6 + 1;
    }
}
