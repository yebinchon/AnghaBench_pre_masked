
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;

int
FUNC_5 (int VAR_5, char *VAR_6, int VAR_7)
{
  int VAR_8;

  FUNC_3 ();
  VAR_0 = 0;
  VAR_8 = FUNC_0 (VAR_5);
  if (VAR_3)
    {
      if (VAR_1)
 FUNC_2 (VAR_2 ? VAR_2 : VAR_4,
   "%s:%d -- ", VAR_6, VAR_7);
      if (VAR_0)
 FUNC_2 (VAR_2 ? VAR_2 : VAR_4,
   "[close FAILED! (%s)]\n", FUNC_4 (VAR_0));
      else
 FUNC_2 (VAR_2 ? VAR_2 : VAR_4,
   "%d = close (%d)\n", VAR_8, VAR_5);
      if (VAR_2)
 FUNC_1 (VAR_2);
    }

  return VAR_8;
}
