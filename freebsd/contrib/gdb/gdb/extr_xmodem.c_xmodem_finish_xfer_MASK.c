
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int dummy; } ;





 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct serial*,int) ;
 int FUNC_3 (struct serial*,char*,int) ;

void
FUNC_4 (struct serial *VAR_1)
{
  int VAR_2;

  for (VAR_2 = 10; VAR_2 >= 0; VAR_2--)
    {
      int VAR_3;

      FUNC_3 (VAR_1, "\004", 1);

      VAR_3 = FUNC_2 (VAR_1, 3);
      switch (VAR_3)
 {
 case 130:
   return;
 case 128:
   continue;
 case 129:
   FUNC_0 ("xmodem_finish_xfer: Transfer aborted by receiver.");
 default:
   FUNC_1 (VAR_0, "xmodem_send_packet: Got unexpected character %c (0%o)\n", VAR_3, VAR_3);
   continue;
 }
    }

  FUNC_0 ("xmodem_finish_xfer:  Excessive retries.");
}
