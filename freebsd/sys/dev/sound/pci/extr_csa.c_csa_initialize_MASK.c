
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* sc_p ;
typedef int csa_res ;
struct TYPE_3__ {int res; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(sc_p VAR_40)
{
 int VAR_41;
 u_int32_t VAR_42, VAR_43;
 csa_res *VAR_44;

 VAR_44 = &VAR_40->res;






 FUNC_3(VAR_44, VAR_13, 0);
 FUNC_3(VAR_44, VAR_22, 0);






 FUNC_3(VAR_44, VAR_18, VAR_33 | VAR_31);
 FUNC_3(VAR_44, VAR_9, 1);
 FUNC_0(50);
 FUNC_3(VAR_44, VAR_9, 0);
 FUNC_0(50);
 FUNC_3(VAR_44, VAR_9, VAR_1);






 FUNC_3(VAR_44, VAR_9, VAR_0 | VAR_1);






 FUNC_0(50000);





 FUNC_3(VAR_44, VAR_22, VAR_38);
 FUNC_0(700000);






 FUNC_3(VAR_44, VAR_16, VAR_30 | VAR_29);
 FUNC_3(VAR_44, VAR_17, 0x3a);
 FUNC_3(VAR_44, VAR_14, VAR_25);




 FUNC_3(VAR_44, VAR_13, VAR_23);




 FUNC_0(5000);




 FUNC_3(VAR_44, VAR_13, FUNC_2(VAR_44, VAR_13) | VAR_24);




 FUNC_1(VAR_44);
 FUNC_3(VAR_44, VAR_20, VAR_35 | VAR_34);
 FUNC_3(VAR_44, VAR_21, VAR_36 | VAR_34);
 FUNC_3(VAR_44, VAR_22, VAR_38 | VAR_37);




 VAR_42 = 0;
 for (VAR_41 = 0 ; VAR_41 < 1000 ; VAR_41++) {




  FUNC_0(125);





  VAR_42 = FUNC_2(VAR_44, VAR_12);
  if ((VAR_42 & VAR_7) != 0)
   break;
 }




 if ((VAR_42 & VAR_7) == 0)
  return (VAR_26);





 FUNC_3(VAR_44, VAR_9, VAR_2 | VAR_0 | VAR_1);





 VAR_43 = 0;
 for (VAR_41 = 0 ; VAR_41 < 2000 ; VAR_41++) {







  FUNC_0(1000);





  VAR_43 = FUNC_2(VAR_44, VAR_10);
  if ((VAR_43 & (VAR_3 | VAR_4)) == (VAR_3 | VAR_4))
   break;
 }




 if ((VAR_43 & (VAR_3 | VAR_4)) != (VAR_3 | VAR_4))
  return (VAR_26);





 FUNC_3(VAR_44, VAR_11, VAR_5 | VAR_6);
 return (0);
}
