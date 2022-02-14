
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int u32 ;
typedef TYPE_1__* hcb_p ;
struct TYPE_3__ {int clock_khz; int clock_divn; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int
FUNC_0(hcb_p VAR_3, u_char VAR_4, u_char VAR_5, u_char *VAR_6, u_char *VAR_7)
{
 u32 VAR_8 = VAR_3->clock_khz;
 int VAR_9 = VAR_3->clock_divn;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 int VAR_13;




 if (VAR_4 && VAR_5 <= 9) VAR_11 = 125;
 else if (VAR_5 <= 10) VAR_11 = 250;
 else if (VAR_5 == 11) VAR_11 = 303;
 else if (VAR_5 == 12) VAR_11 = 500;
 else VAR_11 = 40 * VAR_5;
 VAR_13 = VAR_11;

 VAR_12 = VAR_11 * VAR_8;
 if (VAR_4)
  VAR_12 <<= 1;
 if ((VAR_3->features & (VAR_0|VAR_1)) == VAR_0) {




  while (VAR_9 > 0) {
   --VAR_9;
   if (VAR_12 > (VAR_2[VAR_9] << 2)) {
    ++VAR_9;
    break;
   }
  }
  VAR_10 = 0;
  if (VAR_9 == VAR_3->clock_divn) {
   VAR_13 = -1;
  }
  *VAR_6 = VAR_9;
  *VAR_7 = VAR_10;
  return VAR_13;
 }






 while (VAR_9-- > 0)
  if (VAR_12 >= (VAR_2[VAR_9] << 2)) break;







 if (VAR_4) {
  VAR_10 = (VAR_12 - 1) / (VAR_2[VAR_9] << 1) + 1 - 2;

 }
 else {
  VAR_10 = (VAR_12 - 1) / VAR_2[VAR_9] + 1 - 4;

 }




 if (VAR_10 > 2) {VAR_10 = 2; VAR_13 = -1;}




 *VAR_6 = VAR_9;
 *VAR_7 = VAR_10;

 return VAR_13;
}
