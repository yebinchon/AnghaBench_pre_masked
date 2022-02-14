
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,unsigned int) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (scalar_t__) ;

void
FUNC_12(unsigned int VAR_8)
{
 uint32_t VAR_9;
 int VAR_10;




 FUNC_11(VAR_0 + VAR_8);


 FUNC_10(VAR_2, 0xFFFFFFFF);
 FUNC_10(VAR_3, 0xFFFFFFFF);
 FUNC_10(VAR_5, 0xFFFFFFFF);


 FUNC_10(VAR_1, 0xFFFFFFFF);


 FUNC_10(FUNC_4(0), 0xFFFFFFFF);
 FUNC_10(FUNC_5(0), 0xFFFFFFFF);

 for (VAR_10 = 0; VAR_10 < 64; VAR_10++) {
  FUNC_10(FUNC_0(VAR_10), VAR_10<<5);
 }


 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9 = FUNC_9(FUNC_1(VAR_10>>3));
  VAR_9 &= FUNC_2(VAR_10);
  VAR_9 |= FUNC_3(VAR_10, VAR_8);
  FUNC_10(FUNC_1(VAR_10>>3), VAR_9);
 }


 FUNC_10(FUNC_8(0), (1 << VAR_7) - 1);


 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9 = FUNC_9(VAR_4);
  VAR_9 &= FUNC_6(VAR_10);
  VAR_9 |= FUNC_7(VAR_10, VAR_8);
  FUNC_10(VAR_4, VAR_9);
 }
}
