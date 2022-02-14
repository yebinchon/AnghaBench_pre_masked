
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  int VAR_3 = 0;
  int VAR_4 = 0;

  FUNC_3 (1, "MODULE***\n");

  do
    {
      VAR_3 = FUNC_0 (VAR_2);
      FUNC_4 (VAR_3, VAR_2);

      VAR_3 &= 0x7f;
    }
  while (FUNC_1 (VAR_3) && VAR_3 != VAR_1);

  FUNC_3 (-1, "");

  VAR_3 = FUNC_0 (VAR_2);
  while (VAR_3 != VAR_0)
    {
      FUNC_2 ("%02x ", VAR_3);
      VAR_4++;
      if (VAR_4 == 32)
 {
   FUNC_2 ("\n");
   VAR_4 = 0;
 }
      VAR_3 = FUNC_0 (VAR_2);
    }
}
