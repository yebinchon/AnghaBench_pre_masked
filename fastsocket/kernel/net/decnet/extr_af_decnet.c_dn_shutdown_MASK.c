
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int sk_shutdown; } ;
struct dn_scp {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_6, int VAR_7)
{
 struct sock *VAR_8 = VAR_6->sk;
 struct dn_scp *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = -VAR_2;

 FUNC_2(VAR_8);

 if (VAR_6->state == VAR_5)
  goto out;

 VAR_10 = 0;
 if (VAR_6->state == VAR_4)
  goto out;

 VAR_10 = -VAR_1;
 if (VAR_9->state == VAR_0)
  goto out;

 if (VAR_7 != VAR_3)
  goto out;

 VAR_8->sk_shutdown = VAR_7;
 FUNC_1(VAR_8);
 VAR_10 = 0;

out:
 FUNC_3(VAR_8);

 return VAR_10;
}
