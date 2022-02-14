
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {scalar_t__ nlbl_state; struct netlbl_lsm_secattr* nlbl_secattr; } ;
struct sk_buff {struct sock* sk; } ;
struct netlbl_lsm_secattr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct netlbl_lsm_secattr*) ;
 int FUNC_1 (struct netlbl_lsm_secattr*) ;
 int FUNC_2 (struct sk_buff*,int ,struct netlbl_lsm_secattr*) ;
 int FUNC_3 (int ,struct netlbl_lsm_secattr*) ;

int FUNC_4(struct sk_buff *VAR_1,
     u16 VAR_2,
     u32 VAR_3)
{
 int VAR_4;
 struct netlbl_lsm_secattr VAR_5;
 struct netlbl_lsm_secattr *VAR_6 = ((void*)0);
 struct sock *VAR_7;



 VAR_7 = VAR_1->sk;
 if (VAR_7 != ((void*)0)) {
  struct sk_security_struct *VAR_8 = VAR_7->sk_security;
  if (VAR_8->nlbl_state != VAR_0)
   return 0;
  VAR_6 = VAR_8->nlbl_secattr;
 }
 if (VAR_6 == ((void*)0)) {
  VAR_6 = &VAR_5;
  FUNC_1(VAR_6);
  VAR_4 = FUNC_3(VAR_3, VAR_6);
  if (VAR_4 != 0)
   goto skbuff_setsid_return;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_6);

skbuff_setsid_return:
 if (VAR_6 == &VAR_5)
  FUNC_0(VAR_6);
 return VAR_4;
}
