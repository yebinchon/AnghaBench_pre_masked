
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ PNVRAMTYPE ;
typedef int PACB ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void
FUNC_5(PNVRAMTYPE VAR_3,PACB VAR_4)
{
 u_int8_t *VAR_5 = (u_int8_t *) VAR_3;
 u_int8_t VAR_6;


 FUNC_4((FUNC_3(VAR_1) | VAR_0),
     VAR_1);



 FUNC_2(VAR_4, 0x04, 0xFF);
 FUNC_4(0, VAR_2);
 FUNC_1(VAR_4);
 for (VAR_6 = 0; VAR_6 < 128; VAR_6++, VAR_5++) {
  FUNC_0(VAR_4, VAR_6, *VAR_5);
 }



 FUNC_2(VAR_4, 0x04, 0x00);
 FUNC_4(0 , VAR_2);
 FUNC_1(VAR_4);

 FUNC_4((FUNC_3(VAR_1) & ~VAR_0),
     VAR_1);
 return;
}
