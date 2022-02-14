
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

void
FUNC_3 (char *VAR_1)
{
  char *VAR_2;

  for (VAR_2 = VAR_1; VAR_2[0] && VAR_2[1]; VAR_2 += 2)
    {
      char VAR_3[2];
      char VAR_4 = FUNC_1 (VAR_2[0]) * 16 + FUNC_1 (VAR_2[1]);
      VAR_3[0] = VAR_4;
      VAR_3[1] = 0;
      FUNC_0 (VAR_3, VAR_0);
    }
  FUNC_2 (VAR_0);
}
