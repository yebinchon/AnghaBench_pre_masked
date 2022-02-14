
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;



__attribute__((used)) static unsigned char *
FUNC_0(unsigned char *VAR_0, apr_uint64_t *VAR_1)
{
  if (*VAR_0 < 0x80)
    {
      *VAR_1 = *VAR_0;
    }
  else
    {
      apr_uint64_t VAR_2 = 0;
      apr_uint64_t VAR_3 = 0;
      while (*VAR_0 >= 0x80)
        {
          VAR_3 += (apr_uint64_t)(*VAR_0 & 0x7f) << VAR_2;
          ++VAR_0;

          VAR_2 += 7;
          if (VAR_2 > 64)
            {



              *VAR_1 = 0;
              return VAR_0;
            }
        }

      *VAR_1 = VAR_3 + ((apr_uint64_t)*VAR_0 << VAR_2);
    }

  return ++VAR_0;
}
