
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int32_t ;
typedef int csa_res ;


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
 int FUNC_0 (int) ;
 int VAR_12 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;

int
FUNC_3(csa_res *VAR_13, u_long VAR_14, u_int32_t *VAR_15)
{
 int VAR_16;
 u_int32_t VAR_17, VAR_18;





 FUNC_1(VAR_13, VAR_10);
 FUNC_2(VAR_13, VAR_7, VAR_14 - VAR_6);
 FUNC_2(VAR_13, VAR_8, 0);
 FUNC_2(VAR_13, VAR_9, VAR_1 | VAR_0 | VAR_4 | VAR_2 | VAR_3);




 VAR_17 = 0;
 for (VAR_16 = 0 ; VAR_16 < 10 ; VAR_16++) {



  FUNC_0(25);





  VAR_17 = FUNC_1(VAR_13, VAR_9);
  if ((VAR_17 & VAR_1) == 0)
   break;
 }




 if ((VAR_17 & VAR_1) != 0)
  return (VAR_12);




 VAR_18 = 0;
 for (VAR_16 = 0 ; VAR_16 < 10 ; VAR_16++) {




  VAR_18 = FUNC_1(VAR_13, VAR_11);




  if ((VAR_18 & VAR_5) != 0)
   break;



   FUNC_0(25);
 }




 if ((VAR_18 & VAR_5) == 0)
  return (VAR_12);





 *VAR_15 = FUNC_1(VAR_13, VAR_10);

 return (0);
}
