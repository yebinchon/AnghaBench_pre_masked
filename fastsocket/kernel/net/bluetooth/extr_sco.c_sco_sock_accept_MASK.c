
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int state; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_sleep; } ;


 int FUNC_0 (char*,struct sock*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 struct sock* FUNC_3 (struct sock*,struct socket*) ;
 int VAR_7 ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int *) ;
 long FUNC_7 (long) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (long) ;
 long FUNC_11 (struct sock*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_9, struct socket *VAR_10, int VAR_11)
{
 FUNC_1(VAR_8, VAR_7);
 struct sock *VAR_12 = VAR_9->sk, *VAR_13;
 long VAR_14;
 int VAR_15 = 0;

 FUNC_4(VAR_12);

 if (VAR_12->sk_state != VAR_0) {
  VAR_15 = -VAR_2;
  goto done;
 }

 VAR_14 = FUNC_11(VAR_12, VAR_11 & VAR_3);

 FUNC_0("sk %p timeo %ld", VAR_12, VAR_14);


 FUNC_2(VAR_12->sk_sleep, &VAR_8);
 while (!(VAR_13 = FUNC_3(VAR_12, VAR_10))) {
  FUNC_8(VAR_5);
  if (!VAR_14) {
   VAR_15 = -VAR_1;
   break;
  }

  FUNC_5(VAR_12);
  VAR_14 = FUNC_7(VAR_14);
  FUNC_4(VAR_12);

  if (VAR_12->sk_state != VAR_0) {
   VAR_15 = -VAR_2;
   break;
  }

  if (FUNC_9(VAR_7)) {
   VAR_15 = FUNC_10(VAR_14);
   break;
  }
 }
 FUNC_8(VAR_6);
 FUNC_6(VAR_12->sk_sleep, &VAR_8);

 if (VAR_15)
  goto done;

 VAR_10->state = VAR_4;

 FUNC_0("new socket %p", VAR_13);

done:
 FUNC_5(VAR_12);
 return VAR_15;
}
