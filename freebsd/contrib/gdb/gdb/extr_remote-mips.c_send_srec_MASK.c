
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;



 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_3, int VAR_4, CORE_ADDR VAR_5)
{
  while (1)
    {
      int VAR_6;

      FUNC_4 (VAR_1, VAR_3, VAR_4);

      VAR_6 = FUNC_2 (VAR_2);

      switch (VAR_6)
 {
 case 128:
   FUNC_0 ("Timeout during download.");
   break;
 case 0x6:
   return;
 case 0x15:
   FUNC_1 (VAR_0, "Download got a NACK at byte %s!  Retrying.\n", FUNC_3 (VAR_5));
   continue;
 default:
   FUNC_0 ("Download got unexpected ack char: 0x%x, retrying.\n", VAR_6);
 }
    }
}
