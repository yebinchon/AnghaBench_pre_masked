
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_info {int dummy; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (struct d_info*,int) ;
 char FUNC_2 (struct d_info*) ;

__attribute__((used)) static long
FUNC_3 (struct d_info *VAR_0)
{
  int VAR_1;
  char VAR_2;
  long VAR_3;

  VAR_1 = 0;
  VAR_2 = FUNC_2 (VAR_0);
  if (VAR_2 == 'n')
    {
      VAR_1 = 1;
      FUNC_1 (VAR_0, 1);
      VAR_2 = FUNC_2 (VAR_0);
    }

  VAR_3 = 0;
  while (1)
    {
      if (! FUNC_0 (VAR_2))
 {
   if (VAR_1)
     VAR_3 = - VAR_3;
   return VAR_3;
 }
      VAR_3 = VAR_3 * 10 + VAR_2 - '0';
      FUNC_1 (VAR_0, 1);
      VAR_2 = FUNC_2 (VAR_0);
    }
}
