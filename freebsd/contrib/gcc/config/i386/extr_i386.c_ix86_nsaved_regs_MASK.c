
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1 (void)
{
  int VAR_1 = 0;
  int VAR_2;

  for (VAR_2 = VAR_0 - 1; VAR_2 >= 0; VAR_2--)
    if (FUNC_0 (VAR_2, 1))
      VAR_1++;
  return VAR_1;
}
