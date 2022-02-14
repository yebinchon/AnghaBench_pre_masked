
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_3, uint8_t VAR_4)
{
 uint32_t VAR_5, VAR_6;
 uint32_t VAR_7;

 if (VAR_3 > VAR_1)
  return;

 VAR_5 = VAR_2 + FUNC_2(VAR_3, 4);
 VAR_6 = 8 * (VAR_3 % 4);


 VAR_7 = FUNC_0(VAR_0 + VAR_5);
 VAR_7 &= ~(0xff << VAR_6);
 VAR_7 |= VAR_4 << VAR_6;
 FUNC_1(VAR_0 + VAR_5, VAR_7);


 FUNC_0(VAR_0 + VAR_5);
}
