
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const) ;
 char FUNC_1 (char const) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (const char *VAR_2, const char *VAR_3)
{


  if (FUNC_2 (VAR_2, VAR_3))
    return VAR_1;



  if (FUNC_1 (*VAR_3) == 'r')
    VAR_3++;
  if (!FUNC_0 (*VAR_3))
    return VAR_0;



  if (FUNC_1 (VAR_2[0]) == 'v' && FUNC_1 (VAR_2[1]) == 'r')
    VAR_2 += 2;
  else if (FUNC_1 (VAR_2[0]) == 'r' && FUNC_1 (VAR_2[1]) == 'm')
    VAR_2 += 2;
  else if (FUNC_1 (VAR_2[0]) == 'r')
    VAR_2 += 1;

  return FUNC_2 (VAR_2, VAR_3);
}
