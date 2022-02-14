
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int PACB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void
FUNC_4(PACB VAR_5, u_int8_t VAR_6, u_int8_t VAR_7)
{
 int VAR_8;
 u_int8_t VAR_9;




 FUNC_1(VAR_5, 0x05, VAR_6);



 for (VAR_8 = 0; VAR_8 < 8; VAR_8++, VAR_7 <<= 1) {
  VAR_9 = VAR_3;
  if (VAR_7 & 0x80)

   VAR_9 |= VAR_1;
  FUNC_3(VAR_9 , VAR_4);
  FUNC_0(VAR_5);
  FUNC_3((VAR_9 | VAR_2), VAR_4);
  FUNC_0(VAR_5);
 }
 FUNC_3(VAR_3 , VAR_4);
 FUNC_0(VAR_5);



 FUNC_3(0 , VAR_4);
 FUNC_0(VAR_5);
 FUNC_3(VAR_3 ,VAR_4);
 FUNC_0(VAR_5);



 while (1) {
  FUNC_3((VAR_3 | VAR_2), VAR_4);
  FUNC_0(VAR_5);
  FUNC_3(VAR_3, VAR_4);
  FUNC_0(VAR_5);
  if (FUNC_2(VAR_4) & VAR_0) {
   break;
  }
 }



 FUNC_3(0, VAR_4);
 return;
}
