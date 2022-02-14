
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {struct netlbl_lsm_secattr* nlbl_secattr; int sid; } ;
struct netlbl_lsm_secattr {int dummy; } ;


 int VAR_0 ;
 struct netlbl_lsm_secattr* FUNC_0 (int ) ;
 int FUNC_1 (struct netlbl_lsm_secattr*) ;
 int FUNC_2 (int ,struct netlbl_lsm_secattr*) ;

__attribute__((used)) static struct netlbl_lsm_secattr *FUNC_3(struct sock *VAR_1)
{
 int VAR_2;
 struct sk_security_struct *VAR_3 = VAR_1->sk_security;
 struct netlbl_lsm_secattr *VAR_4;

 if (VAR_3->nlbl_secattr != ((void*)0))
  return VAR_3->nlbl_secattr;

 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_2 = FUNC_2(VAR_3->sid, VAR_4);
 if (VAR_2 != 0) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }
 VAR_3->nlbl_secattr = VAR_4;

 return VAR_4;
}
