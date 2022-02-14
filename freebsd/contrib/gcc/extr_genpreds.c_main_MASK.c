
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int,char**,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 char* VAR_6 ;
 int FUNC_9 (int*,int*) ;
 int VAR_7 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;

int
FUNC_13 (int VAR_8, char **VAR_9)
{
  rtx VAR_10;
  int VAR_11, VAR_12 = 0;

  VAR_6 = VAR_9[0];
  if (VAR_8 <= 1)
    FUNC_1 ("no input file name");
  if (FUNC_5 (VAR_8, VAR_9, VAR_5) != VAR_1)
    return VAR_0;

  while ((VAR_10 = FUNC_9 (&VAR_11, &VAR_12)) != 0)
    switch (FUNC_0 (VAR_10))
      {
      case 130:
      case 128:
 FUNC_7 (VAR_10, VAR_11);
 break;

      case 132:
      case 131:
      case 133:
 FUNC_6 (VAR_10, VAR_11);
 break;

      case 129:
 FUNC_8 (VAR_10, VAR_11);
 break;

      default:
 break;
      }

  if (VAR_3)
    FUNC_12 ();
  else if (VAR_2)
    FUNC_11 ();
  else
    FUNC_10 ();

  if (VAR_4 || FUNC_3 (VAR_7) || FUNC_4 (VAR_7) || FUNC_2 (VAR_7))
    return VAR_0;

  return VAR_1;
}
