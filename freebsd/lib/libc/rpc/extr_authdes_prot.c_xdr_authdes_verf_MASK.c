
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct authdes_verf {int adv_int_u; int adv_xtimestamp; } ;
typedef int des_block ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;

bool_t
FUNC_2(XDR *VAR_1, struct authdes_verf *VAR_2)
{



 FUNC_0(FUNC_1(VAR_1, (caddr_t)&VAR_2->adv_xtimestamp,
     sizeof(des_block)));
 FUNC_0(FUNC_1(VAR_1, (caddr_t)&VAR_2->adv_int_u,
     sizeof(VAR_2->adv_int_u)));
 return (VAR_0);
}
