
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_size_t ;


 int * FUNC_0 (char const*,int,int *) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(serf_bucket_t *VAR_0,
                                   serf_bucket_alloc_t *VAR_1,
                                   const char *VAR_2, apr_size_t VAR_3)
{
  const char *VAR_4 = VAR_2 + VAR_3;
  const char *VAR_5 = VAR_2, *VAR_6;
  serf_bucket_t *VAR_7;

  while (1)
    {
      VAR_6 = VAR_5;
      while (VAR_6 < VAR_4 && *VAR_6 != '&' && *VAR_6 != '<' && *VAR_6 != '>' && *VAR_6 != '\r')
        VAR_6++;


      VAR_7 = FUNC_0(VAR_5, VAR_6 - VAR_5, VAR_1);
      FUNC_1(VAR_0, VAR_7);


      if (VAR_6 == VAR_4)
        break;


      if (*VAR_6 == '&')
        {
          VAR_7 = FUNC_0("&amp;", sizeof("&amp;") - 1,
                                                  VAR_1);
          FUNC_1(VAR_0, VAR_7);
        }
      else if (*VAR_6 == '<')
        {
          VAR_7 = FUNC_0("&lt;", sizeof("&lt;") - 1,
                                                  VAR_1);
          FUNC_1(VAR_0, VAR_7);
        }
      else if (*VAR_6 == '>')
        {
          VAR_7 = FUNC_0("&gt;", sizeof("&gt;") - 1,
                                                  VAR_1);
          FUNC_1(VAR_0, VAR_7);
        }
      else if (*VAR_6 == '\r')
        {
          VAR_7 = FUNC_0("&#13;", sizeof("&#13;") - 1,
                                                  VAR_1);
          FUNC_1(VAR_0, VAR_7);
        }

      VAR_5 = VAR_6 + 1;
    }
}
