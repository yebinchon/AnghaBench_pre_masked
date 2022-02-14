
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct netlbl_lsm_secattr {int dummy; } ;




 int FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct sk_buff const*,struct netlbl_lsm_secattr*) ;
 int FUNC_2 (struct sk_buff const*,int,struct netlbl_lsm_secattr*) ;

int FUNC_3(const struct sk_buff *VAR_0,
     u16 VAR_1,
     struct netlbl_lsm_secattr *VAR_2)
{
 switch (VAR_1) {
 case 129:
  if (FUNC_0(VAR_0) &&
      FUNC_1(VAR_0, VAR_2) == 0)
   return 0;
  break;




 }

 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
