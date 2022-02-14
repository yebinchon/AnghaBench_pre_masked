
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {int dummy; } ;


 int FUNC_0 (struct expression*,int,int*,int*) ;

int
FUNC_1 (struct expression *VAR_0, int VAR_1)
{
  int VAR_2, VAR_3, VAR_4;

  FUNC_0 (VAR_0, VAR_1, &VAR_2, &VAR_3);

  while (VAR_3 > 0)
    {
      VAR_2 += FUNC_1 (VAR_0, VAR_1 - VAR_2);
      VAR_3--;
    }

  return VAR_2;
}
