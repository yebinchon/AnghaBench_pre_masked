
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ value ;
typedef int apr_uint64_t ;
typedef int apr_size_t ;


 int VAR_0 ;

apr_size_t
FUNC_0(char *VAR_1, apr_uint64_t VAR_2)
{
  char *VAR_3 = VAR_1;
  if (VAR_2 < 10)
    {

      *(VAR_1++) = (char)(VAR_2) + '0';
    }
  else
    {
      char VAR_4[VAR_0];
      char *VAR_5 = VAR_4;


      while (VAR_2 > 0)
        {
          char VAR_6 = (char)(VAR_2 % 36);
          VAR_2 /= 36;

          *VAR_5 = (VAR_6 <= 9) ? (VAR_6 + '0') : (VAR_6 - 10 + 'a');
          ++VAR_5;
        }


      while (VAR_5 > VAR_4)
        *(VAR_1++) = *(--VAR_5);
    }

  *VAR_1 = '\0';
  return VAR_1 - VAR_3;
}
