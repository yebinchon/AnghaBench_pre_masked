
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct x86emu {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static uint8_t
FUNC_3(struct x86emu *VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{
 uint32_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9 = 0;
 VAR_5 = VAR_3;
 if ((VAR_6 = VAR_4 % 9) != 0) {


  if (VAR_6 == 1) {
   VAR_8 = VAR_3 & 0x1;





   VAR_9 = FUNC_0(VAR_0) != 0;
  } else
   VAR_8 = (VAR_3 >> (VAR_6 - 1)) & 0x1;







  VAR_7 = (1 << (8 - VAR_6)) - 1;
  VAR_5 = (VAR_3 >> VAR_6) & VAR_7;






  VAR_5 |= (VAR_3 << (9 - VAR_6));


  if (FUNC_0(VAR_0)) {

   VAR_5 |= 1 << (8 - VAR_6);
  }

  FUNC_1(VAR_8, VAR_0);



  if (VAR_6 == 1) {
   FUNC_1(FUNC_2(VAR_9 + ((VAR_3 >> 6) & 0x2)),
       VAR_1);
  }
 }
 return (uint8_t) VAR_5;
}
