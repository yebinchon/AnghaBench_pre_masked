
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ,void (*) ()) ;

void
FUNC_8 (void)
{
  int VAR_6;

  if (VAR_5 == 0)
    return;
  VAR_6 = FUNC_5 (VAR_5, VAR_1);

  if (VAR_6 == -1)
    {
      FUNC_6 (VAR_5, VAR_4);
      FUNC_1 (1);
    }


  if (VAR_6 != 0)
    {
      FUNC_2 (0);
      FUNC_3 (VAR_6);
    }
  if (VAR_6 != 1)
    {
      FUNC_2 (1);
      FUNC_3 (VAR_6);
    }
  if (VAR_6 != 2)
    {
      FUNC_2 (2);
      FUNC_3 (VAR_6);
    }
  if (VAR_6 > 2)
    FUNC_2 (VAR_6);

}
