
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_4, int VAR_5, char *VAR_6, int VAR_7)
{
  int VAR_8;

  if (VAR_5 != 2)
    return;

  switch (VAR_4[0])
    {
    case 'S':
      if (VAR_4[1] != 'R')
 return;
      VAR_8 = VAR_3;
      break;
    case 'P':
      if (VAR_4[1] != 'C')
 return;
      VAR_8 = VAR_2;
      break;
    case 'D':
      if (VAR_4[1] < '0' || VAR_4[1] > '7')
 return;
      VAR_8 = VAR_4[1] - '0' + VAR_1;
      break;
    case 'A':
      if (VAR_4[1] < '0' || VAR_4[1] > '7')
 return;
      VAR_8 = VAR_4[1] - '0' + VAR_0;
      break;
    default:
      return;
    }

  FUNC_0 (VAR_8, VAR_6);
}
