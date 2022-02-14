
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int csa_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;

void
FUNC_3(csa_res *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 u_int8_t VAR_12, VAR_13;





 VAR_11 = 1;
 VAR_12 = FUNC_1(VAR_8, VAR_0);
 if ((VAR_12 & VAR_5) == 0) {
  FUNC_2(VAR_8, VAR_0, VAR_12 | VAR_5);
  VAR_11 = 0;
 }






 FUNC_2(VAR_8, VAR_4, 0);


 VAR_13 = 0;
 for (VAR_9 = 0 ; VAR_9 < 256 ; VAR_9++) {

  for (VAR_10 = 0 ; VAR_10 < 5 ; VAR_10++) {
   FUNC_0(100);
   VAR_13 = FUNC_1(VAR_8, VAR_3);
   if ((VAR_13 & VAR_7) == 0)
    break;
  }
  if ((VAR_13 & VAR_7) != 0) {
   if (!VAR_11)
    FUNC_2(VAR_8, VAR_0, VAR_12);
  }

  FUNC_2(VAR_8, VAR_1, VAR_9);

  FUNC_2(VAR_8, VAR_2, VAR_6);
 }




 if (!VAR_11)
  FUNC_2(VAR_8, VAR_0, VAR_12);
}
