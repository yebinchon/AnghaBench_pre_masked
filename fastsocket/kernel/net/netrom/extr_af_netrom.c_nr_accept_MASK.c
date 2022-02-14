
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_type; scalar_t__ sk_state; int sk_sleep; int sk_receive_queue; } ;
struct sk_buff {struct sock* sk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 struct sk_buff* FUNC_9 (int *) ;
 int FUNC_10 (struct sock*,struct socket*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_11(struct socket *VAR_10, struct socket *VAR_11, int VAR_12)
{
 struct sk_buff *VAR_13;
 struct sock *VAR_14;
 FUNC_0(VAR_9);
 struct sock *VAR_15;
 int VAR_16 = 0;

 if ((VAR_15 = VAR_10->sk) == ((void*)0))
  return -VAR_0;

 FUNC_3(VAR_15);
 if (VAR_15->sk_type != VAR_5) {
  VAR_16 = -VAR_1;
  goto out_release;
 }

 if (VAR_15->sk_state != VAR_7) {
  VAR_16 = -VAR_0;
  goto out_release;
 }





 for (;;) {
  FUNC_4(VAR_15->sk_sleep, &VAR_9, VAR_6);
  VAR_13 = FUNC_9(&VAR_15->sk_receive_queue);
  if (VAR_13)
   break;

  if (VAR_12 & VAR_4) {
   VAR_16 = -VAR_3;
   break;
  }
  if (!FUNC_7(VAR_8)) {
   FUNC_5(VAR_15);
   FUNC_6();
   FUNC_3(VAR_15);
   continue;
  }
  VAR_16 = -VAR_2;
  break;
 }
 FUNC_1(VAR_15->sk_sleep, &VAR_9);
 if (VAR_16)
  goto out_release;

 VAR_14 = VAR_13->sk;
 FUNC_10(VAR_14, VAR_11);


 FUNC_2(VAR_13);
 FUNC_8(VAR_15);

out_release:
 FUNC_5(VAR_15);

 return VAR_16;
}
