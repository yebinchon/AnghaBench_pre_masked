
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;

int
FUNC_4 (void)
{
  int VAR_1;

  VAR_1 = FUNC_1 (FUNC_3 (), 0);
  if (VAR_1 == VAR_0)
    VAR_1 = 0;
  if (FUNC_2 () > 0)
    {
      if (VAR_1)
 FUNC_0 ("%c", VAR_1);
      else
 FUNC_0 ("<empty character poll>");
    }

  return VAR_1 & 0x7f;
}
