
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_3 (char *VAR_10, int VAR_11)
{
  if (!FUNC_0 ())
    {
      FUNC_1 ("This GDB does not control a terminal.\n");
      return;
    }

  FUNC_1 ("Inferior's terminal status (currently saved by GDB):\n");


  {
    int VAR_12;

    VAR_12 = VAR_9;

    FUNC_1 ("File descriptor flags = ");





    switch (VAR_12 & ((130 | 128 | 129)))
      {
      case 130:
 FUNC_1 ("O_RDONLY");
 break;
      case 128:
 FUNC_1 ("O_WRONLY");
 break;
      case 129:
 FUNC_1 ("O_RDWR");
 break;
      }
    VAR_12 &= ~((130 | 128 | 129));
    if (VAR_12 & VAR_1)
      FUNC_1 (" | O_APPEND");
    VAR_12 &= ~VAR_1;







    if (VAR_12)
      FUNC_1 (" | 0x%x", VAR_12);
    FUNC_1 ("\n");
  }






  FUNC_2 (VAR_8, VAR_7, VAR_5);
}
