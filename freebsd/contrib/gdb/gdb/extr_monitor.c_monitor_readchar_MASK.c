
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;

int
FUNC_3 (void)
{
  int VAR_3;
  int VAR_4;

  do
    {
      VAR_4 = 0;
      VAR_3 = FUNC_2 (VAR_1, VAR_2);

      if (VAR_3 >= 0)
 VAR_3 &= 0xff;
    }
  while (VAR_4);

  if (VAR_3 >= 0)
    return VAR_3;

  if (VAR_3 == VAR_0)
    FUNC_0 ("Timeout reading from remote system.");

  FUNC_1 ("remote-monitor");
}
