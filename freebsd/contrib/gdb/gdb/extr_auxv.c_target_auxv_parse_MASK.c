
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int const) ;

int
FUNC_2 (struct target_ops *VAR_1, char **VAR_2, char *VAR_3,
     CORE_ADDR *VAR_4, CORE_ADDR *VAR_5)
{
  const int VAR_6 = FUNC_0 (VAR_0);
  char *VAR_7 = *VAR_2;

  if (VAR_3 == VAR_7)
    return 0;

  if (VAR_3 - VAR_7 < VAR_6 * 2)
    return -1;

  *VAR_4 = FUNC_1 (VAR_7, VAR_6);
  VAR_7 += VAR_6;
  *VAR_5 = FUNC_1 (VAR_7, VAR_6);
  VAR_7 += VAR_6;

  *VAR_2 = VAR_7;
  return 1;
}
