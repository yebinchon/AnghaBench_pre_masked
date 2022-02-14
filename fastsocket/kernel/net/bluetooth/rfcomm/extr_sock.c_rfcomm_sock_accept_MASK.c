
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int state; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_type; int sk_sleep; } ;


 int FUNC_0 (char*,struct sock*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int *) ;
 struct sock* FUNC_3 (struct sock*,struct socket*) ;
 int VAR_9 ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int *) ;
 long FUNC_7 (long) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (long) ;
 long FUNC_11 (struct sock*,int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_11, struct socket *VAR_12, int VAR_13)
{
 FUNC_1(VAR_10, VAR_9);
 struct sock *VAR_14 = VAR_11->sk, *VAR_15;
 long VAR_16;
 int VAR_17 = 0;

 FUNC_4(VAR_14);

 if (VAR_14->sk_state != VAR_0) {
  VAR_17 = -VAR_2;
  goto done;
 }

 if (VAR_14->sk_type != VAR_5) {
  VAR_17 = -VAR_3;
  goto done;
 }

 VAR_16 = FUNC_11(VAR_14, VAR_13 & VAR_4);

 FUNC_0("sk %p timeo %ld", VAR_14, VAR_16);


 FUNC_2(VAR_14->sk_sleep, &VAR_10);
 while (!(VAR_15 = FUNC_3(VAR_14, VAR_12))) {
  FUNC_8(VAR_7);
  if (!VAR_16) {
   VAR_17 = -VAR_1;
   break;
  }

  FUNC_5(VAR_14);
  VAR_16 = FUNC_7(VAR_16);
  FUNC_4(VAR_14);

  if (VAR_14->sk_state != VAR_0) {
   VAR_17 = -VAR_2;
   break;
  }

  if (FUNC_9(VAR_9)) {
   VAR_17 = FUNC_10(VAR_16);
   break;
  }
 }
 FUNC_8(VAR_8);
 FUNC_6(VAR_14->sk_sleep, &VAR_10);

 if (VAR_17)
  goto done;

 VAR_12->state = VAR_6;

 FUNC_0("new socket %p", VAR_15);

done:
 FUNC_5(VAR_14);
 return VAR_17;
}
