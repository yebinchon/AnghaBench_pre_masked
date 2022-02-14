
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5 (int VAR_5)
{
  int VAR_6;

  do
    {
      VAR_6 = FUNC_4 (VAR_1, VAR_5);
    }
  while (VAR_6 > 127);

  if (VAR_6 == VAR_0)
    {
      if (VAR_5 == 0)
 return -1;
      VAR_2 = 0;
      FUNC_0 ("Timeout reading from remote system.");
    }
  else if (VAR_6 < 0)
    FUNC_0 ("Serial communication error");

  if (VAR_4)
    {
      FUNC_3 (VAR_6);
      FUNC_1 (VAR_3);
    }

  return FUNC_2 (VAR_6);
}
