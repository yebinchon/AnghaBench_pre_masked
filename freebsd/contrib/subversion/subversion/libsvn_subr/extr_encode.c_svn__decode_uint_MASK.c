
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

const unsigned char *
FUNC_1(apr_uint64_t *VAR_1,
                 const unsigned char *VAR_2,
                 const unsigned char *VAR_3)
{
  apr_uint64_t VAR_4 = 0;

  if (VAR_3 - VAR_2 > VAR_0)
    VAR_3 = VAR_2 + VAR_0;


  while (FUNC_0(VAR_2 < VAR_3))
    {
      unsigned int VAR_5 = *VAR_2++;

      if (VAR_5 < 0x80)
        {
          *VAR_1 = (VAR_4 << 7) | VAR_5;
          return VAR_2;
        }
      else
        {
          VAR_4 = (VAR_4 << 7) | (VAR_5 & 0x7f);
        }
    }

  return ((void*)0);
}
