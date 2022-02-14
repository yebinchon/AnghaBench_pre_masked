
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ path_type_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*,int,char*,unsigned char) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (char) ;
 char FUNC_6 (char const) ;
 int FUNC_7 (char*,char const*,int) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (char*,int *,int) ;
 int FUNC_11 (char const) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static const char *
FUNC_12(path_type_t VAR_6, const char *VAR_7, apr_pool_t *VAR_8)
{
  char *VAR_9, *VAR_10;
  const char *VAR_11;
  apr_size_t VAR_12;
  apr_size_t VAR_13 = 0;
  apr_size_t VAR_14 = 0;
  svn_boolean_t VAR_15 = VAR_0;
  char *VAR_16 = ((void*)0);



  if (FUNC_0(VAR_7))
    {
      FUNC_4(VAR_6 != VAR_5);
      return "";
    }

  VAR_10 = VAR_9 = FUNC_2(VAR_8, FUNC_8(VAR_7) + 1);




  VAR_11 = VAR_7;
  if (VAR_6 == VAR_5)
    {
      FUNC_4(*VAR_11 != '/');

      while (*VAR_11 && (*VAR_11 != '/') && (*VAR_11 != ':'))
        VAR_11++;

      if (*VAR_11 == ':' && *(VAR_11+1) == '/' && *(VAR_11+2) == '/')
        {
          const char *VAR_17;

          VAR_15 = VAR_1;


          VAR_11 = VAR_7;
          while (*VAR_11 != ':')
            {
              *(VAR_10++) = FUNC_5((*VAR_11++));
              VAR_13++;
            }
          *(VAR_10++) = ':';
          *(VAR_10++) = '/';
          *(VAR_10++) = '/';
          VAR_11 += 3;
          VAR_13 += 3;


          VAR_17 = VAR_11;
          while (*VAR_11 && (*VAR_11 != '/') && (*VAR_11 != '@'))
            VAR_11++;

          if (*VAR_11 == '@')
            {

              VAR_12 = VAR_11 - VAR_17 + 1;
              FUNC_7(VAR_10, VAR_17, VAR_12);
              VAR_10 += VAR_12;
              VAR_11++;
            }
          else
            VAR_11 = VAR_17;


          if (*VAR_11 == '[')
            {
             *(VAR_10++) = *(VAR_11++);

              while (*VAR_11 == ':'
                     || (*VAR_11 >= '0' && (*VAR_11 <= '9'))
                     || (*VAR_11 >= 'a' && (*VAR_11 <= 'f'))
                     || (*VAR_11 >= 'A' && (*VAR_11 <= 'F')))
                {
                  *(VAR_10++) = FUNC_5((*VAR_11++));
                }

              if (*VAR_11 == ']')
                *(VAR_10++) = *(VAR_11++);
            }
          else
            while (*VAR_11 && (*VAR_11 != '/') && (*VAR_11 != ':'))
              *(VAR_10++) = FUNC_5((*VAR_11++));

          if (*VAR_11 == ':')
            {


              if (VAR_11[1] == '8' && VAR_11[2] == '0'
                  && (VAR_11[3]== '/'|| !VAR_11[3])
                  && !FUNC_9(VAR_9, "http:", 5))
                {
                  VAR_11 += 3;
                }
              else if (VAR_11[1] == '4' && VAR_11[2] == '4' && VAR_11[3] == '3'
                       && (VAR_11[4]== '/'|| !VAR_11[4])
                       && !FUNC_9(VAR_9, "https:", 6))
                {
                  VAR_11 += 4;
                }
              else if (VAR_11[1] == '3' && VAR_11[2] == '6'
                       && VAR_11[3] == '9' && VAR_11[4] == '0'
                       && (VAR_11[5]== '/'|| !VAR_11[5])
                       && !FUNC_9(VAR_9, "svn:", 4))
                {
                  VAR_11 += 5;
                }
              else if (VAR_11[1] == '/' || !VAR_11[1])
                {
                  VAR_11 += 1;
                }

              while (*VAR_11 && (*VAR_11 != '/'))
                *(VAR_10++) = FUNC_5((*VAR_11++));
            }


          *(VAR_10) = *(VAR_11);



          if (*VAR_11)
            {
              VAR_11++;
              VAR_10++;
              VAR_16 = VAR_10;
            }

          VAR_14 = 1;
        }
    }



  if (! VAR_15 && VAR_6 != VAR_4)
    {
      VAR_11 = VAR_7;


      if (*VAR_11 == '/')
        {
          *(VAR_10++) = *(VAR_11++);







        }
    }

  while (*VAR_11)
    {


      const char *VAR_18 = VAR_11;
      apr_size_t VAR_19 = 0;

      while (*VAR_18
             && (VAR_18[0] != '/')
             && (! (VAR_6 == VAR_5 && VAR_18[0] == '%' && VAR_18[1] == '2' &&
                    FUNC_6(VAR_18[2]) == 'F')))
        {
          ++VAR_18;
        }


      if (VAR_18[0] == '/')
        VAR_19 = 1;
      else if (VAR_6 == VAR_5 && VAR_18[0] == '%')
        VAR_19 = 3;

      VAR_12 = VAR_18 - VAR_11;

      if (VAR_12 == 0
          || (VAR_12 == 1 && VAR_11[0] == '.')
          || (VAR_6 == VAR_5 && VAR_12 == 3 && VAR_11[0] == '%' && VAR_11[1] == '2'
              && FUNC_6(VAR_11[2]) == 'E'))
        {


        }
      else
        {

          FUNC_7(VAR_10, VAR_11, VAR_12);
          VAR_10 += VAR_12;
          if (VAR_19)
            *(VAR_10++) = '/';
          VAR_14++;
        }


      VAR_11 = VAR_18 + VAR_19;
    }







  if ((VAR_14 > 0 && *(VAR_10 - 1) == '/')
      && ! (VAR_15 && VAR_7[VAR_13] == '\0'))
    {
      VAR_10 --;
    }

  *VAR_10 = '\0';
  if (VAR_16)
    {
      int VAR_20 = 0;
      VAR_11 = VAR_16;

      while (*VAR_11)
        {
          switch (*VAR_11)
            {
              case '/':
                break;
              case '%':
                if (!FUNC_11(*(VAR_11+1)) ||
                    !FUNC_11(*(VAR_11+2)))
                  VAR_20 += 2;
                else
                  VAR_11 += 2;
                break;
              default:
                if (!VAR_2[(unsigned char)*VAR_11])
                  VAR_20 += 2;
                break;
            }
          VAR_11++;
        }

      if (VAR_20 > 0)
        {
          apr_size_t VAR_21 = (apr_size_t)(VAR_16 - VAR_9);

          VAR_10 = FUNC_1(VAR_8, (apr_size_t)(VAR_11 - VAR_9) + VAR_20 + 1);
          FUNC_7(VAR_10, VAR_9, VAR_21);
          VAR_9 = VAR_10;

          VAR_10 += VAR_21;
        }
      else
        VAR_10 = VAR_16;

      VAR_11 = VAR_16;

      while (*VAR_11)
        {
          switch (*VAR_11)
            {
              case '/':
                *(VAR_10++) = '/';
                break;
              case '%':
                if (!FUNC_11(*(VAR_11+1)) ||
                    !FUNC_11(*(VAR_11+2)))
                  {
                    *(VAR_10++) = '%';
                    *(VAR_10++) = '2';
                    *(VAR_10++) = '5';
                  }
                else
                  {
                    char VAR_22[3];
                    int VAR_23;

                    VAR_22[0] = *(++VAR_11);
                    VAR_22[1] = *(++VAR_11);
                    VAR_22[2] = 0;

                    VAR_23 = (int)FUNC_10(VAR_22, ((void*)0), 16);

                    if (VAR_2[(unsigned char)VAR_23])
                      *(VAR_10++) = (char)VAR_23;
                    else
                      {
                        *(VAR_10++) = '%';
                        *(VAR_10++) = FUNC_6(VAR_22[0]);
                        *(VAR_10++) = FUNC_6(VAR_22[1]);
                      }
                  }
                break;
              default:
                if (!VAR_2[(unsigned char)*VAR_11])
                  {
                    FUNC_3(VAR_10, 4, "%%%02X", (unsigned char)*VAR_11);
                    VAR_10 += 3;
                  }
                else
                  *(VAR_10++) = *VAR_11;
                break;
            }
          VAR_11++;
        }
      *VAR_10 = '\0';
    }

  return VAR_9;
}
