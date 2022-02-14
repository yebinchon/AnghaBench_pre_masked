
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 scalar_t__ FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char const*) ;
 scalar_t__* VAR_2 ;

svn_boolean_t
FUNC_3(const char *VAR_3, apr_pool_t *VAR_4)
{
  const char *VAR_5 = VAR_3, *VAR_6 = VAR_3;
  const char *VAR_7 = ((void*)0);
  if (*VAR_3 == '\0')
    return VAR_0;

  if (! FUNC_2(VAR_3))
    return VAR_0;


  while (*VAR_5 && (*VAR_5 != '/') && (*VAR_5 != ':'))
    VAR_5++;


  if (! (*VAR_5 == ':' && *(VAR_5+1) == '/' && *(VAR_5+2) == '/'))
    return VAR_0;


  VAR_5 = VAR_3;
  while (*VAR_5 != ':')
    {
      if (*VAR_5 >= 'A' && *VAR_5 <= 'Z')
        return VAR_0;
      VAR_5++;
    }

  VAR_5 += 3;


  if (! *VAR_5)
    return VAR_1;


  VAR_6 = VAR_5;
  while (*VAR_5 && (*VAR_5 != '/') && (*VAR_5 != '@'))
    VAR_5++;

  if (*VAR_5 == '@')
    VAR_6 = VAR_5 + 1;


  VAR_5 = VAR_6;

  if (*VAR_5 == '[')
    {
      VAR_5++;
      while (*VAR_5 == ':'
             || (*VAR_5 >= '0' && *VAR_5 <= '9')
             || (*VAR_5 >= 'a' && *VAR_5 <= 'f'))
        {
          VAR_5++;
        }

      if (*VAR_5 != ']')
        return VAR_0;
      VAR_5++;
    }
  else
    while (*VAR_5 && *VAR_5 != '/' && *VAR_5 != ':')
      {
        if (*VAR_5 >= 'A' && *VAR_5 <= 'Z')
          return VAR_0;
        VAR_5++;
      }


  if (*VAR_5 == ':')
    {
      apr_int64_t VAR_8 = 0;

      VAR_5++;
      VAR_7 = VAR_5;

      while (*VAR_5 >= '0' && *VAR_5 <= '9')
        {
          VAR_8 = 10 * VAR_8 + (*VAR_5 - '0');
          VAR_5++;
        }

      if (VAR_5 == VAR_7 && (*VAR_5 == '/' || *VAR_5 == '\0'))
        return VAR_0;

      if (VAR_8 == 80 && FUNC_0(VAR_3, "http:", 5) == 0)
        return VAR_0;
      else if (VAR_8 == 443 && FUNC_0(VAR_3, "https:", 6) == 0)
        return VAR_0;
      else if (VAR_8 == 3690 && FUNC_0(VAR_3, "svn:", 4) == 0)
        return VAR_0;

      while (*VAR_5 && *VAR_5 != '/')
        ++VAR_5;
    }

  VAR_7 = VAR_5;
  VAR_6 = VAR_5;
  while (*VAR_5 && (*VAR_5 != '/'))
    VAR_5++;
  while(1)
    {
      apr_size_t VAR_9 = VAR_5 - VAR_6;

      if (VAR_9 == 1 && *VAR_6 == '.')
        return VAR_0;

      if (*VAR_5 == '/' && *(VAR_5+1) == '/')
        return VAR_0;

      if (! *VAR_5 && *(VAR_5 - 1) == '/' && VAR_5 - 1 != VAR_3)
        return VAR_0;

      if (! *VAR_5)
        break;

      if (*VAR_5 == '/')
        VAR_5++;

      VAR_6 = VAR_5;
      while (*VAR_5 && (*VAR_5 != '/'))
        VAR_5++;
    }

  VAR_5 = VAR_7;

  while (*VAR_5)
    {
      if (*VAR_5 == '%')
        {
          char VAR_10[3];
          int VAR_11;



          if (((*(VAR_5+1) < '0' || *(VAR_5+1) > '9'))
              && (*(VAR_5+1) < 'A' || *(VAR_5+1) > 'F'))
            return VAR_0;
          else if (((*(VAR_5+2) < '0' || *(VAR_5+2) > '9'))
                   && (*(VAR_5+2) < 'A' || *(VAR_5+2) > 'F'))
            return VAR_0;

          VAR_10[0] = *(++VAR_5);
          VAR_10[1] = *(++VAR_5);
          VAR_10[2] = '\0';
          VAR_11 = (int)FUNC_1(VAR_10, ((void*)0), 16);

          if (VAR_2[VAR_11])
            return VAR_0;
        }
      else if (*VAR_5 != '/' && !VAR_2[(unsigned char)*VAR_5])
        return VAR_0;
      VAR_5++;
    }

  return VAR_1;
}
