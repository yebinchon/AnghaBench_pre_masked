
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_smack {scalar_t__ smk_out; } ;
struct sock {int sk_family; struct socket_smack* sk_security; } ;
struct netlbl_lsm_secattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct netlbl_lsm_secattr*) ;
 int FUNC_5 (struct netlbl_lsm_secattr*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ,struct netlbl_lsm_secattr*) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (scalar_t__,struct netlbl_lsm_secattr*) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_2, int VAR_3)
{
 struct socket_smack *VAR_4 = VAR_2->sk_security;
 struct netlbl_lsm_secattr VAR_5;
 int VAR_6 = 0;
 FUNC_2();
 FUNC_0(VAR_2);

 if (VAR_4->smk_out == VAR_1 ||
     VAR_3 == VAR_0)
  FUNC_6(VAR_2);
 else {
  FUNC_5(&VAR_5);
  FUNC_8(VAR_4->smk_out, &VAR_5);
  VAR_6 = FUNC_7(VAR_2, VAR_2->sk_family, &VAR_5);
  FUNC_4(&VAR_5);
 }

 FUNC_1(VAR_2);
 FUNC_3();

 return VAR_6;
}
