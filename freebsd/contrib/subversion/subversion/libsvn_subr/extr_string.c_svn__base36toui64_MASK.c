
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int digits ;
typedef int apr_uint64_t ;


 int VAR_0 ;

apr_uint64_t
FUNC_0(const char **VAR_1, const char *VAR_2)
{
  apr_uint64_t VAR_3 = 0;
  apr_uint64_t VAR_4 = 1;
  int VAR_5 = 0;
  char VAR_6[VAR_0];



  while (VAR_5 < sizeof(VAR_6))
    {
      char VAR_7 = *VAR_2;
      if (VAR_7 < 'a')
        {

          if (VAR_7 < '0' || VAR_7 > '9')
            break;

          VAR_7 -= '0';
        }
      else
        {
          if (VAR_7 < 'a' || VAR_7 > 'z')
            break;

          VAR_7 -= 'a' - 10;
        }

      VAR_6[VAR_5++] = VAR_7;
      VAR_2++;
    }


  while (VAR_5 > 0)
    {
      VAR_3 += VAR_4 * (apr_uint64_t)VAR_6[--VAR_5];
      VAR_4 *= 36;
    }

  if (VAR_1)
    *VAR_1 = VAR_2;

  return VAR_3;
}
