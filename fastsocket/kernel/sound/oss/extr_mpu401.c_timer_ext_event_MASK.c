
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu_config {int devno; int timer_flag; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct mpu_config *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = VAR_4->devno;

 if (!VAR_4->timer_flag)
  return;

 switch (VAR_5)
 {
  case 132:
   FUNC_5("<MIDI clk>");
   break;

  case 129:
   FUNC_5("Ext MIDI start\n");
   if (!VAR_3)
   {
    if (VAR_2 & VAR_0)
    {
     VAR_3 = 1;
     FUNC_6(VAR_7);
     VAR_1 = 0;
     FUNC_4(FUNC_2());
    }
   }
   break;

  case 128:
   FUNC_5("Ext MIDI stop\n");
   if (VAR_2 & VAR_0)
   {
    VAR_3 = 0;
    FUNC_7(VAR_7);
    FUNC_4(FUNC_3());
   }
   break;

  case 131:
   FUNC_5("Ext MIDI continue\n");
   if (VAR_2 & VAR_0)
   {
    VAR_3 = 1;
    FUNC_6(VAR_7);
    FUNC_4(FUNC_0());
     }
     break;

  case 130:
   FUNC_5("Songpos: %d\n", VAR_6);
   if (VAR_2 & VAR_0)
   {
    FUNC_4(FUNC_1(VAR_6));
   }
   break;
 }
}
