
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_3 (struct serial*,int) ;

int
FUNC_4 (struct serial *VAR_3)
{
  int VAR_4;
  int VAR_5;

  VAR_0 = 1;
  VAR_1 = 0;
  FUNC_0 ();

  for (VAR_5 = 1; VAR_5 <= 10; VAR_5++)
    {
      VAR_4 = FUNC_3 (VAR_3, 6);

      switch (VAR_4)
 {
 case 'C':
   VAR_1 = 1;
 case 128:
   return 0;
 default:
   FUNC_2 (VAR_2, "xmodem_init_xfer: Got unexpected character %c (0%o)\n", VAR_4, VAR_4);
   continue;
 case 129:
   FUNC_2 (VAR_2, "Got a CANCEL from the target.\n");
   continue;
 }
    }
  FUNC_1 ("xmodem_init_xfer:  Too many unexpected characters.");
}
