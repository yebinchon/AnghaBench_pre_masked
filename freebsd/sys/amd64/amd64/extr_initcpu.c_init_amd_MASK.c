
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4(void)
{
 uint64_t VAR_7;
 switch (FUNC_0(VAR_4)) {
 case 0x10:
 case 0x12:
  if ((VAR_3 & VAR_0) == 0)
   FUNC_3(0xc0011029, FUNC_2(0xc0011029) | 1);
  break;
 }






 if (FUNC_0(VAR_4) == 0x10) {
  if ((VAR_3 & VAR_0) == 0) {
   VAR_7 = FUNC_2(VAR_2);
   VAR_7 |= (uint64_t)1 << 54;
   FUNC_3(VAR_2, VAR_7);
  }
 }







 if (FUNC_0(VAR_4) == 0x10) {
  if ((VAR_3 & VAR_0) == 0) {
   VAR_7 = FUNC_2(0xc001102a);
   VAR_7 &= ~((uint64_t)1 << 24);
   FUNC_3(0xc001102a, VAR_7);
  }
 }







 if (FUNC_0(VAR_4) == 0x16 && FUNC_1(VAR_4) <= 0xf) {
  if ((VAR_3 & VAR_0) == 0) {
   VAR_7 = FUNC_2(VAR_1);
   VAR_7 |= (uint64_t)1 << 15;
   FUNC_3(VAR_1, VAR_7);
  }
 }


 if (FUNC_0(VAR_4) == 0x17 && FUNC_1(VAR_4) == 0x1 &&
     (VAR_3 & VAR_0) == 0) {

  VAR_7 = FUNC_2(0xc0011029);
  VAR_7 |= 0x2000;
  FUNC_3(0xc0011029, VAR_7);


  VAR_7 = FUNC_2(VAR_1);
  VAR_7 |= 0x10;
  FUNC_3(VAR_1, VAR_7);


  VAR_7 = FUNC_2(0xc0011028);
  VAR_7 |= 0x10;
  FUNC_3(0xc0011028, VAR_7);


  VAR_7 = FUNC_2(VAR_1);
  VAR_7 |= 0x200000000000000;
  FUNC_3(VAR_1, VAR_7);
 }
 if (VAR_6 == 0) {
  VAR_6 = 1;
  if (FUNC_0(VAR_4) == 0x17) {
   VAR_5 = 1;
  }
 }
}
