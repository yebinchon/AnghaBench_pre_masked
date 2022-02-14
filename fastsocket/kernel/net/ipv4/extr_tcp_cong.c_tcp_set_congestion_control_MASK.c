
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_congestion_ops {int flags; int (* init ) (struct sock*) ;int owner; } ;
struct sock {scalar_t__ sk_state; } ;
struct inet_connection_sock {struct tcp_congestion_ops* icsk_ca_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (struct sock*) ;
 struct tcp_congestion_ops* FUNC_6 (char const*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct sock *VAR_6, const char *VAR_7)
{
 struct inet_connection_sock *VAR_8 = FUNC_1(VAR_6);
 struct tcp_congestion_ops *VAR_9;
 int VAR_10 = 0;

 FUNC_2();
 VAR_9 = FUNC_6(VAR_7);


 if (VAR_9 == VAR_8->icsk_ca_ops)
  goto out;
 if (!VAR_9)
  VAR_10 = -VAR_2;

 else if (!((VAR_9->flags & VAR_5) || FUNC_0(VAR_0)))
  VAR_10 = -VAR_3;

 else if (!FUNC_8(VAR_9->owner))
  VAR_10 = -VAR_1;

 else {
  FUNC_7(VAR_6);
  VAR_8->icsk_ca_ops = VAR_9;

  if (VAR_6->sk_state != VAR_4 && VAR_8->icsk_ca_ops->init)
   VAR_8->icsk_ca_ops->init(VAR_6);
 }
 out:
 FUNC_3();
 return VAR_10;
}
