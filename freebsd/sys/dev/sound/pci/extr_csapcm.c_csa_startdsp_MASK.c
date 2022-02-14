
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int csa_res ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(csa_res *VAR_6)
{
 int VAR_7;
 u_long VAR_8;




 FUNC_2(VAR_6, VAR_0, 0xadf);





 FUNC_2(VAR_6, VAR_1, VAR_4 | VAR_5 | VAR_3);





 VAR_8 = 0;
 for (VAR_7 = 0 ; VAR_7 < 25 ; VAR_7++) {



  FUNC_0(50);



  VAR_8 = FUNC_1(VAR_6, VAR_1);




  if((VAR_8 & VAR_5) == 0)
   break;
 }



 if((VAR_8 & VAR_5) != 0)
  return (VAR_2);

 return (0);
}
