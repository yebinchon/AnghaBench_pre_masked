
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_0, int VAR_1, char *VAR_2, int VAR_3)
{
  int VAR_4 = 0;

  if (VAR_1 < 2 || VAR_1 > 4)
    return;

  switch (VAR_0[0])
    {
    case 'R':
      if (VAR_0[1] < '0' || VAR_0[1] > '9')
 return;
      if (VAR_1 == 2)
 VAR_4 = VAR_0[1] - '0';
      else if (VAR_1 == 3 && VAR_0[2] >= '0' && VAR_0[2] <= '9')
 VAR_4 = (VAR_0[1] - '0') * 10 + (VAR_0[2] - '0');
      else
 return;
      break;
    case 'F':
      if (VAR_0[1] != 'R' || VAR_0[2] < '0' || VAR_0[2] > '9')
 return;
      if (VAR_1 == 3)
 VAR_4 = 32 + VAR_0[2] - '0';
      else if (VAR_1 == 4 && VAR_0[3] >= '0' && VAR_0[3] <= '9')
 VAR_4 = 32 + (VAR_0[2] - '0') * 10 + (VAR_0[3] - '0');
      else
 return;
      break;
    case 'I':
      if (VAR_1 != 2 || VAR_0[1] != 'P')
 return;
      VAR_4 = 64;
      break;
    case 'M':
      if (VAR_1 != 3 || VAR_0[1] != 'S' || VAR_0[2] != 'R')
 return;
      VAR_4 = 65;
      break;
    case 'C':
      if (VAR_1 != 2 || VAR_0[1] != 'R')
 return;
      VAR_4 = 66;
      break;
    case 'S':
      if (VAR_1 != 4 || VAR_0[1] != 'P' || VAR_0[2] != 'R')
 return;
      else if (VAR_0[3] == '8')
 VAR_4 = 67;
      else if (VAR_0[3] == '9')
 VAR_4 = 68;
      else if (VAR_0[3] == '1')
 VAR_4 = 69;
      else if (VAR_0[3] == '0')
 VAR_4 = 70;
      else
 return;
      break;
    default:
      return;
    }

  FUNC_0 (VAR_4, VAR_2);
}
