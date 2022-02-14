
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (const char *VAR_2, const char *VAR_3)
{


  if (VAR_2[0] != VAR_3[0] || VAR_2[1] != VAR_3[1]
      || VAR_2[2] != VAR_3[2] || VAR_2[3] != VAR_3[3])
    return VAR_0;

  VAR_2 += 4;
  VAR_3 += 4;
  while (*VAR_2 != '*')
    if (*VAR_3++ != *VAR_2++)
      return VAR_0;

  return VAR_1;
}
