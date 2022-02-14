
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {scalar_t__ nlbl_state; } ;
struct netlbl_lsm_secattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct netlbl_lsm_secattr*) ;
 int FUNC_2 (struct netlbl_lsm_secattr*) ;
 int FUNC_3 (struct sock*,struct netlbl_lsm_secattr*) ;
 int FUNC_4 (struct sock*) ;

int FUNC_5(struct socket *VAR_6,
         int VAR_7,
         int VAR_8)
{
 int VAR_9 = 0;
 struct sock *VAR_10 = VAR_6->sk;
 struct sk_security_struct *VAR_11 = VAR_10->sk_security;
 struct netlbl_lsm_secattr VAR_12;

 if (VAR_7 == VAR_2 && VAR_8 == VAR_3 &&
     (VAR_11->nlbl_state == VAR_5 ||
      VAR_11->nlbl_state == VAR_4)) {
  FUNC_2(&VAR_12);
  FUNC_0(VAR_10);
  VAR_9 = FUNC_3(VAR_10, &VAR_12);
  FUNC_4(VAR_10);
  if (VAR_9 == 0)
   VAR_9 = -VAR_0;
  else if (VAR_9 == -VAR_1)
   VAR_9 = 0;
  FUNC_1(&VAR_12);
 }

 return VAR_9;
}
