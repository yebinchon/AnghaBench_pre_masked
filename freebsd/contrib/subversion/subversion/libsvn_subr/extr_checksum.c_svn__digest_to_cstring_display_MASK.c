
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int *,int) ;

const char *
FUNC_1(const unsigned char VAR_0[],
                               apr_size_t VAR_1,
                               apr_pool_t *VAR_2)
{
  static const char *VAR_3 = "0123456789abcdef";
  char *VAR_4 = FUNC_0(VAR_2, (VAR_1 * 2) + 1);
  apr_size_t VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    {
      VAR_4[VAR_5*2] = VAR_3[VAR_0[VAR_5] >> 4];
      VAR_4[VAR_5*2+1] = VAR_3[VAR_0[VAR_5] & 0x0f];
    }
  VAR_4[VAR_5*2] = '\0';

  return VAR_4;
}
