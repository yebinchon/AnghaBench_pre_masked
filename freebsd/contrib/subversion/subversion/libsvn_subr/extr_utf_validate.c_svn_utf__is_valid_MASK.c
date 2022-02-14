
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,int) ;
 int** VAR_2 ;
 int* VAR_3 ;

svn_boolean_t
FUNC_1(const char *VAR_4, apr_size_t VAR_5)
{
  const char *VAR_6 = VAR_4 + VAR_5;
  int VAR_7 = VAR_1;

  if (!VAR_4)
    return VAR_0;

  VAR_4 = FUNC_0(VAR_4, VAR_5);

  while (VAR_4 < VAR_6)
    {
      unsigned char VAR_8 = *VAR_4++;
      int VAR_9 = VAR_3[VAR_8];
      VAR_7 = VAR_2[VAR_7][VAR_9];
    }
  return VAR_7 == VAR_1;
}
