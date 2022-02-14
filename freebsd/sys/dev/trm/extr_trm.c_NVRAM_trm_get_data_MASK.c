
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static u_int8_t
FUNC_4(PACB VAR_4, u_int8_t VAR_5)
{
 int VAR_6;
 u_int8_t VAR_7, VAR_8 = 0;




 FUNC_1(VAR_4, 0x06, VAR_5);

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {



  FUNC_3((VAR_2 | VAR_1) , VAR_3);
  FUNC_0(VAR_4);
  FUNC_3(VAR_2 , VAR_3);



  VAR_7 = FUNC_2(VAR_3);
  VAR_8 <<= 1;
  if (VAR_7 & VAR_0) {
   VAR_8 |= 1;
  }
  FUNC_0(VAR_4);
 }



 FUNC_3(0, VAR_3);
 return (VAR_8);
}
