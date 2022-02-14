
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct inet_connection_sock {int icsk_accept_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,long) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int *) ;
 struct sock* FUNC_6 (int *,struct sock*) ;
 long FUNC_7 (struct sock*,int) ;

struct sock *FUNC_8(struct sock *VAR_5, int VAR_6, int *VAR_7)
{
 struct inet_connection_sock *VAR_8 = FUNC_1(VAR_5);
 struct sock *VAR_9;
 int VAR_10;

 FUNC_3(VAR_5);




 VAR_10 = -VAR_1;
 if (VAR_5->sk_state != VAR_3)
  goto out_err;


 if (FUNC_5(&VAR_8->icsk_accept_queue)) {
  long VAR_11 = FUNC_7(VAR_5, VAR_6 & VAR_2);


  VAR_10 = -VAR_0;
  if (!VAR_11)
   goto out_err;

  VAR_10 = FUNC_2(VAR_5, VAR_11);
  if (VAR_10)
   goto out_err;
 }

 VAR_9 = FUNC_6(&VAR_8->icsk_accept_queue, VAR_5);
 FUNC_0(VAR_9->sk_state == VAR_4);
out:
 FUNC_4(VAR_5);
 return VAR_9;
out_err:
 VAR_9 = ((void*)0);
 *VAR_7 = VAR_10;
 goto out;
}
