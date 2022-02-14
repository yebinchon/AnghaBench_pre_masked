
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

bool FUNC_0(u32 VAR_12, u32 VAR_13)
{
 u32 VAR_14;


 if ((VAR_12 & VAR_6) != (VAR_13 & VAR_6))
  return VAR_10;

 switch (VAR_12 & VAR_6) {
 case 130:




  VAR_14 = VAR_1 | VAR_5 |
         VAR_4 | VAR_0 |
         VAR_8 |
         VAR_9;
  if ((VAR_13 & VAR_14) != (VAR_12 & VAR_14))
   return VAR_10;


  if (!(VAR_13 & VAR_7))
   return VAR_10;
  break;
 case 129:




  VAR_14 = VAR_3 | VAR_2;
  if ((VAR_13 & VAR_14) != (VAR_12 & VAR_14))
   return VAR_10;
  break;
 case 128:



  break;
 }


 return VAR_11;
}
