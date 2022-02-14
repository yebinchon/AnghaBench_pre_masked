
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_3, int VAR_4)
{
  int VAR_5, VAR_6;

  VAR_5 = 2;

  while (1)
    {
      VAR_6 = FUNC_0 (VAR_3, VAR_4);

      if (VAR_6 >= 0 || VAR_5 == 0)
 break;
      else if (VAR_2 != VAR_1 && VAR_2 != VAR_0)
 {
   VAR_5--;
   FUNC_1 (1);
 }
    }

  return VAR_6;
}
