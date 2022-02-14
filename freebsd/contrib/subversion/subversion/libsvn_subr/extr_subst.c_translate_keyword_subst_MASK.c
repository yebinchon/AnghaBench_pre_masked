
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_boolean_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static svn_boolean_t
FUNC_3(char *VAR_3,
                        apr_size_t *VAR_4,
                        const char *VAR_5,
                        apr_size_t VAR_6,
                        const svn_string_t *VAR_7)
{
  char *VAR_8;


  FUNC_0(*VAR_4 <= VAR_1);
  FUNC_0((VAR_3[0] == '$') && (VAR_3[*VAR_4 - 1] == '$'));


  if (*VAR_4 < VAR_6 + 2)
    return VAR_0;



  if (VAR_6 > VAR_1 - 5)
    return VAR_0;


  if (FUNC_1(VAR_3 + 1, VAR_5, VAR_6))
    return VAR_0;

  VAR_8 = VAR_3 + 1 + VAR_6;
  if ((VAR_8[0] == ':')
      && (VAR_8[1] == ':')
      && (VAR_8[2] == ' ')
      && ((VAR_3[*VAR_4 - 2] == ' ')
          || (VAR_3[*VAR_4 - 2] == '#'))

      && ((6 + VAR_6) < *VAR_4))
    {

      apr_size_t VAR_9 = *VAR_4 - (6 + VAR_6);

      if (! VAR_7)
        {

          VAR_8 += 2;
          while (*VAR_8 != '$')
            *(VAR_8++) = ' ';
        }
      else
        {
          if (VAR_7->len <= VAR_9)
            {
              FUNC_2(VAR_8 + 3, VAR_7->data, VAR_7->len);
              VAR_8 += 3 + VAR_7->len;
              while (*VAR_8 != '$')
                *(VAR_8++) = ' ';
            }
          else
            {

              FUNC_2(VAR_8 + 3, VAR_7->data, VAR_9);
              VAR_3[*VAR_4 - 2] = '#';
              VAR_3[*VAR_4 - 1] = '$';
            }
        }
      return VAR_2;
    }


  else if (VAR_8[0] == '$')
    {

      if (VAR_7)
        {

          VAR_8[0] = ':';
          VAR_8[1] = ' ';
          if (VAR_7->len)
            {
              apr_size_t VAR_10 = VAR_7->len;


              if (VAR_10 > (VAR_1 - 5 - VAR_6))
                VAR_10 = VAR_1 - 5 - VAR_6;
              FUNC_2(VAR_8 + 2, VAR_7->data, VAR_10);
              VAR_8[2 + VAR_10] = ' ';
              VAR_8[2 + VAR_10 + 1] = '$';
              *VAR_4 = 5 + VAR_6 + VAR_10;
            }
          else
            {

              VAR_8[2] = '$';
              *VAR_4 = 4 + VAR_6;
            }
        }
      else
        {

        }
      return VAR_2;
    }


  else if (((*VAR_4 >= 4 + VAR_6 )
           && (VAR_8[0] == ':')
           && (VAR_8[1] == ' ')
           && (VAR_3[*VAR_4 - 2] == ' '))
        || ((*VAR_4 >= 3 + VAR_6 )
           && (VAR_8[0] == ':')
           && (VAR_8[1] == '$')))
    {

      if (! VAR_7)
        {

          VAR_8[0] = '$';
          *VAR_4 = 2 + VAR_6;
        }
      else
        {

          VAR_8[0] = ':';
          VAR_8[1] = ' ';
          if (VAR_7->len)
            {
              apr_size_t VAR_11 = VAR_7->len;


              if (VAR_11 > (VAR_1 - 5 - VAR_6))
                VAR_11 = VAR_1 - 5 - VAR_6;
              FUNC_2(VAR_8 + 2, VAR_7->data, VAR_11);
              VAR_8[2 + VAR_11] = ' ';
              VAR_8[2 + VAR_11 + 1] = '$';
              *VAR_4 = 5 + VAR_6 + VAR_11;
            }
          else
            {

              VAR_8[2] = '$';
              *VAR_4 = 4 + VAR_6;
            }
        }
      return VAR_2;
    }

  return VAR_0;
}
