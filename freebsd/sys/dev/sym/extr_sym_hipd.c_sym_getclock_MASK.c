
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hcb_p ;
struct TYPE_5__ {unsigned char sv_scntl3; unsigned char sv_stest1; int features; int multiplier; int clock_khz; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,...) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4 (hcb_p VAR_5, int VAR_6)
{
 unsigned char VAR_7 = VAR_5->sv_scntl3;
 unsigned char VAR_8 = VAR_5->sv_stest1;
 unsigned VAR_9;




 if (VAR_5->features & VAR_2) {
  VAR_5->multiplier = VAR_6;
  VAR_5->clock_khz = 40000 * VAR_6;
  return;
 }

 VAR_5->multiplier = 1;
 VAR_9 = 40000;



 if (VAR_6 > 1 && (VAR_8 & (VAR_0+VAR_1)) == VAR_0+VAR_1) {
  if (VAR_4 >= 2)
   FUNC_1 ("%s: clock multiplier found\n", FUNC_3(VAR_5));
  VAR_5->multiplier = VAR_6;
 }






 if (VAR_5->multiplier != VAR_6 || (VAR_7 & 7) < 3 || !(VAR_7 & 1)) {
  FUNC_0 (VAR_3, 0);
  VAR_9 = FUNC_2 (VAR_5);

  if (VAR_4)
   FUNC_1 ("%s: chip clock is %uKHz\n", FUNC_3(VAR_5), VAR_9);

  if (VAR_9 < 45000) VAR_9 = 40000;
  else if (VAR_9 < 55000) VAR_9 = 50000;
  else VAR_9 = 80000;

  if (VAR_9 < 80000 && VAR_6 > 1) {
   if (VAR_4 >= 2)
    FUNC_1 ("%s: clock multiplier assumed\n",
     FUNC_3(VAR_5));
   VAR_5->multiplier = VAR_6;
  }
 } else {
  if ((VAR_7 & 7) == 3) VAR_9 = 40000;
  else if ((VAR_7 & 7) == 5) VAR_9 = 80000;
  else VAR_9 = 160000;

  VAR_9 /= VAR_5->multiplier;
 }




 VAR_9 *= VAR_5->multiplier;
 VAR_5->clock_khz = VAR_9;
}
