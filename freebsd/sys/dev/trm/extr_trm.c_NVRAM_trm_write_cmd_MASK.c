
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int PACB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(PACB VAR_4, u_int8_t VAR_5, u_int8_t VAR_6)
{
 int VAR_7;
 u_int8_t VAR_8;

     for (VAR_7 = 0; VAR_7 < 3; VAR_7++, VAR_5 <<= 1) {



       VAR_8 = VAR_2;
  if (VAR_5 & 0x04)
   VAR_8 |= VAR_0;

  FUNC_1(VAR_8, VAR_3);
  FUNC_0(VAR_4);
  FUNC_1((VAR_8 | VAR_1), VAR_3);
  FUNC_0(VAR_4);
 }
 for (VAR_7 = 0; VAR_7 < 7; VAR_7++, VAR_6 <<= 1) {



  VAR_8 = VAR_2;
  if (VAR_6 & 0x40)

   VAR_8 |= VAR_0;
  FUNC_1(VAR_8 , VAR_3);
  FUNC_0(VAR_4);
  FUNC_1((VAR_8 | VAR_1), VAR_3);
  FUNC_0(VAR_4);
 }
 FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_4);
}
