
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_family; } ;
struct netlbl_lsm_secattr {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,struct netlbl_lsm_secattr*) ;

int FUNC_1(struct sock *VAR_2,
   struct netlbl_lsm_secattr *VAR_3)
{
 int VAR_4;

 switch (VAR_2->sk_family) {
 case 129:
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  break;





 default:
  VAR_4 = -VAR_1;
 }

 return VAR_4;
}
