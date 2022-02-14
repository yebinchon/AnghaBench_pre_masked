
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__* hcb_p ;
struct TYPE_4__ {int multiplier; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (TYPE_1__*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(hcb_p VAR_10, u_char VAR_11)
{



 if (VAR_10->multiplier <= 1) {
  FUNC_1(VAR_5, VAR_11);
  return;
 }

 if (VAR_9 >= 2)
  FUNC_3 ("%s: enabling clock multiplier\n", FUNC_4(VAR_10));

 FUNC_1(VAR_6, VAR_0);




 if (VAR_10->features & VAR_2) {
  int VAR_12 = 20;
  while (!(FUNC_0(VAR_8) & VAR_4) && --VAR_12 > 0)
   FUNC_2 (20);
  if (!VAR_12)
   FUNC_3("%s: the chip cannot lock the frequency\n",
    FUNC_4(VAR_10));
 } else
  FUNC_2 (20);
 FUNC_1(VAR_7, VAR_3);
 FUNC_1(VAR_5, VAR_11);
 FUNC_1(VAR_6, (VAR_0|VAR_1));
 FUNC_1(VAR_7, 0x00);
}
