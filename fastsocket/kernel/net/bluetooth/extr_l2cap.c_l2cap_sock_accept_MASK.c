
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
 int VAR_7 ;
 int FUNC_2 (int ,int *) ;
 struct sock* FUNC_3 (struct sock*,struct socket*) ;
 int VAR_8 ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int *) ;
 long FUNC_7 (long) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (long) ;
 long FUNC_11 (struct sock*,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_10, struct socket *VAR_11, int VAR_12)
{
 FUNC_1(VAR_9, VAR_8);
 struct sock *VAR_13 = VAR_10->sk, *VAR_14;
 long VAR_15;
 int VAR_16 = 0;

 FUNC_4(VAR_13, VAR_4);

 if (VAR_13->sk_state != VAR_0) {
  VAR_16 = -VAR_2;
  goto done;
 }

 VAR_15 = FUNC_11(VAR_13, VAR_12 & VAR_3);

 FUNC_0("sk %p timeo %ld", VAR_13, VAR_15);


 FUNC_2(VAR_13->sk_sleep, &VAR_9);
 while (!(VAR_14 = FUNC_3(VAR_13, VAR_11))) {
  FUNC_8(VAR_6);
  if (!VAR_15) {
   VAR_16 = -VAR_1;
   break;
  }

  FUNC_5(VAR_13);
  VAR_15 = FUNC_7(VAR_15);
  FUNC_4(VAR_13, VAR_4);

  if (VAR_13->sk_state != VAR_0) {
   VAR_16 = -VAR_2;
   break;
  }

  if (FUNC_9(VAR_8)) {
   VAR_16 = FUNC_10(VAR_15);
   break;
  }
 }
 FUNC_8(VAR_7);
 FUNC_6(VAR_13->sk_sleep, &VAR_9);

 if (VAR_16)
  goto done;

 VAR_11->state = VAR_5;

 FUNC_0("new socket %p", VAR_14);

done:
 FUNC_5(VAR_13);
 return VAR_16;
}
