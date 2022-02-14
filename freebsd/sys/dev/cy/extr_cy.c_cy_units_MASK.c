
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ cy_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (scalar_t__,int ,int,int) ;
 int* VAR_5 ;

int
FUNC_3(cy_addr VAR_6, int VAR_7)
{
 int VAR_8;
 u_char VAR_9;
 int VAR_10;
 cy_addr VAR_11;

 for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
  VAR_11 = VAR_6 + (VAR_5[VAR_8] << VAR_7);


  for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
   FUNC_0(50);
   if (!FUNC_1(VAR_11, VAR_0, VAR_7))
    break;
  }


  FUNC_2(VAR_11, VAR_3, VAR_7, 0);


  FUNC_2(VAR_11, VAR_0, VAR_7,
   VAR_1 | VAR_2);


  VAR_9 = 0;


  for (VAR_10 = 0; VAR_10 < 200; VAR_10++) {
   FUNC_0(50);


   VAR_9 = FUNC_1(VAR_11, VAR_3,
        VAR_7);
   if ((VAR_9 & 0xf0) == 0x40)
    break;
  }






  if ((VAR_9 & 0xf0) != 0x40)
   break;
 }
 return (VAR_8);
}
