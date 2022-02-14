
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;


 int VAR_0 ;
 char* FUNC_0 (char const*,int) ;
 int** VAR_1 ;
 int* VAR_2 ;

const char *
FUNC_1(const char *VAR_3, apr_size_t VAR_4)
{
  const char *VAR_5 = FUNC_0(VAR_3, VAR_4);
  const char *VAR_6 = VAR_3 + VAR_4;
  int VAR_7 = VAR_0;

  VAR_3 = VAR_5;
  while (VAR_3 < VAR_6)
    {
      unsigned char VAR_8 = *VAR_3++;
      int VAR_9 = VAR_2[VAR_8];
      VAR_7 = VAR_1[VAR_7][VAR_9];
      if (VAR_7 == VAR_0)
        VAR_5 = VAR_3;
    }
  return VAR_5;
}
