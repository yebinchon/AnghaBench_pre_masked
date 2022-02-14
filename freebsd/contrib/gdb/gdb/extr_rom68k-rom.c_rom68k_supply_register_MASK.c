
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_5, int VAR_6, char *VAR_7, int VAR_8)
{
  int VAR_9;
  int VAR_10;

  VAR_9 = 1;
  VAR_10 = -1;

  if (VAR_6 == 2)
    switch (VAR_5[0])
      {
      case 'S':
 if (VAR_5[1] == 'R')
   VAR_10 = VAR_3;
 break;
      case 'P':
 if (VAR_5[1] == 'C')
   VAR_10 = VAR_2;
 break;
      case 'D':
 if (VAR_5[1] != 'R')
   break;
 VAR_10 = VAR_1;
 VAR_9 = 8;
 break;
      case 'A':
 if (VAR_5[1] != 'R')
   break;
 VAR_10 = VAR_0;
 VAR_9 = 7;
 break;
      }
  else if (VAR_6 == 3)
    switch (VAR_5[0])
      {
      case 'I':
 if (VAR_5[1] == 'S' && VAR_5[2] == 'P')
   VAR_10 = VAR_4;
      }

  if (VAR_10 >= 0)
    while (VAR_9-- > 0)
      VAR_7 = FUNC_0 (VAR_10++, VAR_7);
}
