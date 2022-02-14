
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char const*,int) ;
 int VAR_0 ;

void
FUNC_1 (const char *VAR_1, int VAR_2)
{
  int VAR_3 = 0;
  int VAR_4 = 2000;



  while (VAR_3 < VAR_2)
    {
      int VAR_5 = VAR_2 - VAR_3;
      if (VAR_5 > VAR_4)
 VAR_5 = VAR_4;

      FUNC_0 (VAR_0, VAR_1, VAR_5);

      VAR_3 += VAR_5;
      VAR_1 += VAR_5;
    }
}
